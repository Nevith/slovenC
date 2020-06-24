//
// Created by Andraz on 15/03/2020.
//

#include <iostream>
#include "JobManager.h"

JobManager::JobManager() {
    unsigned concurrentThreadsSupported = std::thread::hardware_concurrency();
    if (concurrentThreadsSupported == 0) {
        concurrentThreadsSupported = 4;
    }
    supportedThreads = concurrentThreadsSupported;
}

void JobManager::queueJob(std::shared_ptr<Job> job) {
    const std::lock_guard<std::mutex> lock(mutex);
    jobQueue.push(job);

    if (runningJobs.size() < supportedThreads && !jobQueue.empty()) {
        runNextJob();
    }
}

void JobManager::wait() {
    while (true) {
        {
            const std::lock_guard<std::mutex> lock(mutex);
            if (jobQueue.empty() && runningJobs.empty() && futures.empty()) {
                return;
            }
            cleanFutures();
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void JobManager::stopJobs() {
    while (true) {
        {
            const std::lock_guard<std::mutex> lock(mutex);
            while (!jobQueue.empty()) {
                jobQueue.pop();
            }
            for (const auto &job : runningJobs) {
                job->cancel();
            }
            if (jobQueue.empty() && runningJobs.empty() && futures.empty()) {
                return;
            }
            cleanFutures();
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void JobManager::runNextJob() {
    if (!jobQueue.empty()) {
        auto nextJob = jobQueue.front();
        jobQueue.pop();

        runningJobs.push_back(nextJob);
        std::future result = std::async(std::launch::async, [](const std::shared_ptr<Job> &a, JobManager *jobManager) {
            try {
                a->run();
                if (!a->isCanceled()) {
                    for (const std::shared_ptr<Job> &newJob : a->onComplete()) {
                        jobManager->queueJob(newJob);
                    }
                }
            } catch (std::exception &e) {
                a->cancel();
                std::cout << e.what() << std::endl;
            }
            jobManager->jobFinished(a);
        }, nextJob, this);

        futures.push_back(std::move(result));
    }
}

void JobManager::jobFinished(std::shared_ptr<Job> job) {
    const std::lock_guard<std::mutex> lock(mutex);

    ContainerUtils::remove(runningJobs, job);
    cleanFutures();
    runNextJob();
}

void JobManager::cleanFutures() {
    for (auto it = futures.begin(); it < futures.end();) {
        if (is_ready(*it)) {
            it = futures.erase(it);
        } else {
            ++it;
        }
    }
}

JobManager::~JobManager() {
    stopJobs();
}
