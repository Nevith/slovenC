//
// Created by Andraz on 17/03/2020.
//

#include "FileSymbolJob.h"

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

using namespace antlr;
using namespace antlr4;


FileSymbolJob::FileSymbolJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol)
        : project(project), fileSymbol(fileSymbol) {}

void FileSymbolJob::run() {
    std::ifstream stream;
    stream.open(fileSymbol->getAbsolutePath());

    ANTLRInputStream input(stream);
    SlovenCLanguageLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SlovenCLanguageParser parser(&tokens);
    SlovenCLanguageParser::ParseWholeContext *rootContext = parser.parseWhole();

    auto builder = Builder();
    tree::ParseTreeWalker::DEFAULT.walk(&builder, rootContext);
}

std::vector<std::shared_ptr<Job>> FileSymbolJob::onComplete() {
    return std::vector<std::shared_ptr<Job>>();
}
