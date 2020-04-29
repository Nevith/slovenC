//
// Created by Andraz on 17/03/2020.
//

#ifndef SLOVENC_BUILDERJOB_H
#define SLOVENC_BUILDERJOB_H


#include <memory>
#include <project/Project.h>
#include <async/Job.h>
#include <utility>
#include <iostream>
#include <antlr4-common.h>
#include <antlr4-runtime.h>
#include <builder/Builder.h>
#include <pipeline/manager/ManagerJob.h>
#include "antlr/SlovenCLanguageLexer.h"
#include "antlr/SlovenCLanguageParser.h"
#include "antlr/SlovenCLanguageParserBaseListener.h"
#include "antlr/SlovenCLanguageParserListener.h"
#include "antlr/SlovenCLanguageParserVisitor.h"
#include "antlr/SlovenCLanguageParserBaseVisitor.h"
#include "LinkerJob.h"

class BuilderJob : public Job {
private:
    std::shared_ptr<Project> project;
    std::shared_ptr<FileSymbol> fileSymbol;
    std::shared_ptr<ManagerJob> managerJob;
public:

    BuilderJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol,
               std::shared_ptr<ManagerJob> manager);

    void run() override;

    std::vector<std::shared_ptr<Job>> onComplete() override;
};


#endif //SLOVENC_BUILDERJOB_H
