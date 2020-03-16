//
// Created by Andraz on 15/03/2020.
//

#ifndef SLOVENC_JOB_H
#define SLOVENC_JOB_H

#include <future>


class Job {
private:
    std::atomic<bool> cancelFlag;

public:
    Job();

    void cancel();

    bool isCanceled();

    virtual void run() = 0;

    virtual std::vector<Job *> onComplete() = 0;
};


#endif //SLOVENC_JOB_H
