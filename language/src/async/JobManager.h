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
    std::queue<std::shared_ptr<Job>> jobQueue;
    std::vector<std::shared_ptr<Job>> runningJobs;
    std::mutex mutex;
    unsigned supportedThreads;

public:
    JobManager();

    void queueJob(std::shared_ptr<Job> job);

    void stopJobs();

protected:

    void runNextJob();

    void jobFinished(std::shared_ptr<Job> job);
};


#endif //SLOVENC_JOBMANAGER_H
