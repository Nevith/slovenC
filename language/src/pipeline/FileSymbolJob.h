//
// Created by Andraz on 17/03/2020.
//

#ifndef SLOVENC_FILESYMBOLJOB_H
#define SLOVENC_FILESYMBOLJOB_H


#include <memory>
#include <project/Project.h>
#include <async/Job.h>
#include <utility>
#include <iostream>
#include <antlr4-common.h>
#include <antlr4-runtime.h>
#include <builder/Builder.h>
#include "antlr/SlovenCLanguageLexer.h"
#include "antlr/SlovenCLanguageParser.h"
#include "antlr/SlovenCLanguageParserBaseListener.h"
#include "antlr/SlovenCLanguageParserListener.h"
#include "antlr/SlovenCLanguageParserVisitor.h"
#include "antlr/SlovenCLanguageParserBaseVisitor.h"
#include "LinkerJob.h"

class LinkerManagerJob;

class FileSymbolJob : public Job {
private:
    std::shared_ptr<Project> project;
    std::shared_ptr<FileSymbol> fileSymbol;
    std::shared_ptr<LinkerManagerJob> managerJob;
public:

    FileSymbolJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol,
                  std::shared_ptr<LinkerManagerJob> manager);

    void run() override;

    std::vector<std::shared_ptr<Job>> onComplete() override;
};


#endif //SLOVENC_FILESYMBOLJOB_H
