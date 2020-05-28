//
// Created by Andraz on 17/03/2020.
//

#include "BuilderJob.h"


using namespace antlr;
using namespace antlr4;


BuilderJob::BuilderJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol,
                       std::shared_ptr<ManagerJob<FileSymbol>> managerJob)
        : project(project), fileSymbol(fileSymbol), managerJob(managerJob) {}

void BuilderJob::run() {
    std::ifstream stream;
    stream.open(fileSymbol->getAbsolutePath());

    if (isCanceled()) {
        return;
    }

    ANTLRInputStream input(stream);
    SlovenCLanguageLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SlovenCLanguageParser parser(&tokens);
    SlovenCLanguageParser::ParseWholeContext *rootContext = parser.parseWhole();

    if (isCanceled()) {
        return;
    }

    auto builder = Builder(std::make_shared<CurrentState>(fileSymbol));
    tree::ParseTreeWalker::DEFAULT.walk(&builder, rootContext);
}

std::vector<std::shared_ptr<Job>> BuilderJob::onComplete() {
    return managerJob->JobDone(fileSymbol, fileSymbol);
}
