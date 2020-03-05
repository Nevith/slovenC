#include <iostream>
#include <string>

#include "antlr4-runtime.h"
#include "antlr/SlovenCLanguageLexer.h"
#include "antlr/SlovenCLanguageParser.h"

using namespace antlr;
using namespace antlr4;

int main(int, const char **) {

    std::cout << "Hello world!" << std::endl;

    ANTLRInputStream input(u8"🍴 = 🍐 + \"😎\";(((x * π))) * µ + ∰; a + (x * (y ? 0 : 1) + z);");
    SlovenCLanguageLexer lexer(&input);
	CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    SlovenCLanguageParser parser(&tokens);
    SlovenCLanguageParser::ParseWholeContext* context = parser.parseWhole();
    
    std::cout << context->toStringTree(&parser) << std::endl << std::endl;

    return 0;
}
