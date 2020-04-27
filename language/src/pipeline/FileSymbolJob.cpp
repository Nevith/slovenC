//
// Created by Andraz on 17/03/2020.
//

#include "FileSymbolJob.h"


using namespace antlr;
using namespace antlr4;


FileSymbolJob::FileSymbolJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol,
                             std::shared_ptr<LinkerManagerJob> managerJob)
        : project(project), fileSymbol(fileSymbol), managerJob(managerJob) {}

void FileSymbolJob::run() {
    std::ifstream stream;
    stream.open(fileSymbol->getAbsolutePath());

    ANTLRInputStream input(stream);
    SlovenCLanguageLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SlovenCLanguageParser parser(&tokens);
    SlovenCLanguageParser::ParseWholeContext *rootContext = parser.parseWhole();

    auto builder = Builder(std::make_shared<CurrentState>(fileSymbol));
    tree::ParseTreeWalker::DEFAULT.walk(&builder, rootContext);
}

std::vector<std::shared_ptr<Job>> FileSymbolJob::onComplete() {
    auto result = std::vector<std::shared_ptr<Job>>();
    result.push_back(std::make_shared<LinkerJob>(project, fileSymbol, managerJob));
    return result;
}
