//
// Created by Andraz on 15/03/2020.
//

#ifndef SLOVENC_JOBMANAGER_H
#define SLOVENC_JOBMANAGER_H


#include <queue>
#include <vector>
#include <memory>
#include <future>
#include "Job.h"
#include "utils/ContainerUtils.h"

class JobManager {
private:
    std::queue<Job *> jobQueue;
    std::vector<Job *> runningJobs;
    std::mutex mutex;
    unsigned supportedThreads;

public:
    JobManager();

    void queueJob(Job *job);

    void stopJobs();

protected:

    void runNextJob();

    void jobFinished(Job *job);
};


#endif //SLOVENC_JOBMANAGER_H
