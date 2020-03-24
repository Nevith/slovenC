#include <iostream>
#include <string>
#include <async/JobManager.h>
#include <pipeline/ProjectJob.h>


int main(int, const char **) {
    std::string absolutePath = "E:\\Projects\\Faks\\Diplomska naloga\\slovenC\\test";

    JobManager jobManager;

    jobManager.queueJob(std::make_shared<ProjectJob>(absolutePath));
    jobManager.wait();
    return 0;
}
