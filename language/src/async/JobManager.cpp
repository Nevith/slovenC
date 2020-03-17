//
// Created by Andraz on 15/03/2020.
//

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

    while (runningJobs.size() < supportedThreads && !jobQueue.empty()) {
        runNextJob();
    }
}

void JobManager::stopJobs() {
    const std::lock_guard<std::mutex> lock(mutex);

    while (!jobQueue.empty()) {
        jobQueue.pop();
    }
    for (auto job : runningJobs) {
        job->cancel();
    }
    runningJobs.clear();
}

void JobManager::runNextJob() {
    if (!jobQueue.empty()) {
        auto nextJob = jobQueue.front();
        jobQueue.pop();

        runningJobs.push_back(nextJob);
        std::future result = std::async([](std::shared_ptr<Job> a, JobManager *jobManager) {
            a->run();
            if (!a->isCanceled()) {
                for (std::shared_ptr<Job> newJob : a->onComplete()) {
                    jobManager->queueJob(newJob);
                }
                jobManager->jobFinished(a);
            }
        }, nextJob, this);
    }
}

void JobManager::jobFinished(std::shared_ptr<Job> job) {
    const std::lock_guard<std::mutex> lock(mutex);

    ContainerUtils::remove(runningJobs, job);
    runNextJob();
}
