//
// Created by andraz on 29/04/2020.
//

#ifndef SLOVENC_MANAGERJOB_H
#define SLOVENC_MANAGERJOB_H


#include <async/Job.h>
#include <model/symbols/main/FileSymbol.h>

class ManagerJob: public Job {
private:
    std::shared_ptr<ManagerJob> self;

protected:
    std::vector<std::shared_ptr<FileSymbol>> files;
    std::map<std::shared_ptr<FileSymbol>, bool> fileResultMap;

public:
    ManagerJob(std::vector<std::shared_ptr<FileSymbol>> files);

    const std::shared_ptr<ManagerJob> &getSelf() const;

    void setSelf(const std::shared_ptr<ManagerJob> &self);

    void run() override;

    virtual std::vector<std::shared_ptr<Job>> JobDone(std::shared_ptr<FileSymbol> fileSymbol) = 0;
};


#endif //SLOVENC_MANAGERJOB_H
