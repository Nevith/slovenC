//
// Created by Andraz on 19/03/2020.
//

#ifndef SLOVENC_PROJECTJOB_H
#define SLOVENC_PROJECTJOB_H


#include <project/Project.h>
#include <async/Job.h>

class ProjectJob: public Job {
    std::shared_ptr<Project> project;

public:
    ProjectJob(const std::string& absolutePath);

    void run() override;

    std::vector<std::shared_ptr<Job>> onComplete() override;
};


#endif //SLOVENC_PROJECTJOB_H
