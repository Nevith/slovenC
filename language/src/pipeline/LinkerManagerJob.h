//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_LINKERMANAGERJOB_H
#define SLOVENC_LINKERMANAGERJOB_H


#include <async/Job.h>
#include <model/symbols/main/FileSymbol.h>

class LinkerManagerJob: public Job {
private:
    std::vector<std::shared_ptr<FileSymbol>> files;


public:
    void run() override;

    std::vector<std::shared_ptr<Job>> onComplete() override;
};


#endif //SLOVENC_LINKERMANAGERJOB_H
