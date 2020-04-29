#include <iostream>
#include <string>
#include <async/JobManager.h>
#include <pipeline/single/ProjectJob.h>


int main(int, const char **) {
    std::string absolutePath = "E:\\Projects\\Faks\\Diplomska naloga\\slovenC\\test";

    JobManager jobManager;

    auto project = std::make_shared<Project>(absolutePath);
    jobManager.queueJob(std::make_shared<ProjectJob>(project));
    jobManager.wait();
    auto test = project.get();
    return 0;
}
