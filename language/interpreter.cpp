//
// Created by andraz on 23/05/2020.
//

#include <iostream>
#include <string>
#include <async/JobManager.h>
#include <pipeline/single/ProjectJob.h>
#include <interpreter/Interpreter.h>

void printHelp(std::string name) {
    std::cout << name << " <first argument>" << std::endl;
    std::cout << "<first argument> - absolute path for the root project directory" << std::endl;
}

int main(int argc, const char **argv) {
    if (argc != 2) {
        for (int i = 0; i < argc; ++i) {
            std::cout << argv[i] << std::endl;
        }
        printHelp(argv[0]);
        return 0;
    }

    std::string inputAbsolutePath;

    std::cout << "Input specified as" << argv[1] << std::endl;
    inputAbsolutePath = argv[1];

    JobManager jobManager;
    auto project = std::make_shared<Project>(inputAbsolutePath);
    jobManager.queueJob(std::make_shared<ProjectJob>(project));
    jobManager.wait();

    std::cout << "Interpreting:" << std::endl;

    Interpreter interpreter(project);
    bool result = interpreter.interpret();

    if (result) {
        std::cout << "Successfully finished interpretation" << std::endl;
    } else {
        std::cout << "Interpretation finished with an error" << std::endl;
    }
    return 0;
}
