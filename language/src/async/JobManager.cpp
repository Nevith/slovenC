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
    std::cout << "Locked mutex" << std::endl;
    jobQueue.push(job);

    if (runningJobs.size() < supportedThreads && !jobQueue.empty()) {
        runNextJob();
    }
    std::cout << "Released mutex" << std::endl;
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
        std::future result = std::async(std::launch::async,[](std::shared_ptr<Job> a, JobManager *jobManager) {
            a->run();
            if (!a->isCanceled()) {
                for (std::shared_ptr<Job> newJob : a->onComplete()) {
                    std::cout << "QueuedJob" << std::endl;
                    jobManager->queueJob(newJob);
                }
                jobManager->jobFinished(a);
            }
        }, nextJob, this);
        std::cout << "aaaaa" << std::endl;
    }
}

void JobManager::jobFinished(std::shared_ptr<Job> job) {
    const std::lock_guard<std::mutex> lock(mutex);

    ContainerUtils::remove(runningJobs, job);
    runNextJob();
}
