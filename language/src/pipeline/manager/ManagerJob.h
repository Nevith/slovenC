//
// Created by andraz on 29/04/2020.
//

#ifndef SLOVENC_MANAGERJOB_H
#define SLOVENC_MANAGERJOB_H


#include <async/Job.h>
#include <model/symbols/main/FileSymbol.h>

template<typename T>
class ManagerJob : public Job {
private:
    std::shared_ptr<ManagerJob<T>> self;

protected:
    std::vector<std::shared_ptr<FileSymbol>> files;
    std::map<std::shared_ptr<FileSymbol>, std::shared_ptr<T>> fileResultMap;
    std::map<std::shared_ptr<FileSymbol>, bool> fileCompleteMap;

public:
    ManagerJob(std::vector<std::shared_ptr<FileSymbol>> files);

    const std::shared_ptr<ManagerJob<T>> &getSelf() const;

    void setSelf(const std::shared_ptr<ManagerJob<T>> &self);

    void run() override;

    std::vector<std::shared_ptr<Job>> JobDone(std::shared_ptr<FileSymbol> fileSymbol, std::shared_ptr<T> result);

    virtual std::vector<std::shared_ptr<Job>> jobsFinished() = 0;
};

template<typename T>
ManagerJob<T>::ManagerJob(std::vector<std::shared_ptr<FileSymbol>> files)  : files(files) {

}

template<typename T>
const std::shared_ptr<ManagerJob<T>> &ManagerJob<T>::getSelf() const {
    return self;
}

template<typename T>
void ManagerJob<T>::setSelf(const std::shared_ptr<ManagerJob<T>> &self) {
    ManagerJob<T>::self = self;
}

template<typename T>
void ManagerJob<T>::run() {
    for (auto file : files) {
        fileCompleteMap[file] = false;
    }
}

template<typename T>
std::vector<std::shared_ptr<Job>>
ManagerJob<T>::JobDone(std::shared_ptr<FileSymbol> fileSymbol, std::shared_ptr<T> result) {
    fileCompleteMap[fileSymbol] = true;
    fileResultMap[fileSymbol] = result;

    for (const auto[key, value] : fileCompleteMap) {
        if (!value) {
            return std::vector<std::shared_ptr<Job>>();
        }
    }

    auto jobs = jobsFinished();
    setSelf(nullptr); // MEM leak cleanup...
    return jobs;
}


#endif //SLOVENC_MANAGERJOB_H
