//
// Created by Andraz on 15/03/2020.
//

#include "Job.h"

void Job::cancel() {
    cancelFlag.store(true);
}

Job::Job() {
    cancelFlag.store(false);
}

bool Job::isCanceled() {
    return cancelFlag.load();
}
