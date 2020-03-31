
// Generated from SlovenCLanguageLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace antlr {


    class SlovenCLanguageLexer : public antlr4::Lexer {
    public:
        enum {
            BOOLEAN = 1, BYTE = 2, DOUBLE = 3, INT = 4, VOID = 5, BREAK = 6, CONTINUE = 7,
            CLASS = 8, EXTENDS = 9, IF = 10, ELSE = 11, FOR = 12, WHILE = 13, TRY = 14,
            CATCH = 15, FINALLY = 16, THROW = 17, IMPORT = 18, PACKAGE = 19, NEW = 20,
            INSTANCEOF = 21, THIS = 22, PRIVATE = 23, PUBLIC = 24, STATIC = 25,
            RETURN = 26, CONSTRUCTOR = 27, IntegerLiteral = 28, FloatingPointLiteral = 29,
            TRUE = 30, FALSE = 31, CharacterLiteral = 32, StringLiteral = 33, NULLLITERAL = 34,
            LPAREN = 35, RPAREN = 36, LBRACE = 37, RBRACE = 38, LBRACK = 39, RBRACK = 40,
            SEMI = 41, COMMA = 42, DOT = 43, ASSIGN = 44, GT = 45, LT = 46, BANG = 47,
            TILDE = 48, QUESTION = 49, COLON = 50, EQUAL = 51, LE = 52, GE = 53,
            NOTEQUAL = 54, AND = 55, OR = 56, INC = 57, DEC = 58, ADD = 59, SUB = 60,
            MUL = 61, DIV = 62, BITAND = 63, BITOR = 64, CARET = 65, MOD = 66, ARROW = 67,
            COLONCOLON = 68, ADD_ASSIGN = 69, SUB_ASSIGN = 70, MUL_ASSIGN = 71,
            DIV_ASSIGN = 72, AND_ASSIGN = 73, OR_ASSIGN = 74, XOR_ASSIGN = 75, MOD_ASSIGN = 76,
            LSHIFT_ASSIGN = 77, RSHIFT_ASSIGN = 78, URSHIFT_ASSIGN = 79, AT = 80,
            ELLIPSIS = 81, WS = 82, COMMENT = 83, LINE_COMMENT = 84, Identifier = 85,
            ILLEGAL_TOKEN = 86
        };

        enum {
            WHITESPACE = 2, COMMENTS = 3
        };

        SlovenCLanguageLexer(antlr4::CharStream *input);

        ~SlovenCLanguageLexer();

        virtual std::string getGrammarFileName() const override;

        virtual const std::vector<std::string> &getRuleNames() const override;

        virtual const std::vector<std::string> &getChannelNames() const override;

        virtual const std::vector<std::string> &getModeNames() const override;

        virtual const std::vector<std::string> &getTokenNames() const override; // deprecated, use vocabulary instead
        virtual antlr4::dfa::Vocabulary &getVocabulary() const override;

        virtual const std::vector<uint16_t> getSerializedATN() const override;

        virtual const antlr4::atn::ATN &getATN() const override;

    private:
        static std::vector<antlr4::dfa::DFA> _decisionToDFA;
        static antlr4::atn::PredictionContextCache _sharedContextCache;
        static std::vector<std::string> _ruleNames;
        static std::vector<std::string> _tokenNames;
        static std::vector<std::string> _channelNames;
        static std::vector<std::string> _modeNames;

        static std::vector<std::string> _literalNames;
        static std::vector<std::string> _symbolicNames;
        static antlr4::dfa::Vocabulary _vocabulary;
        static antlr4::atn::ATN _atn;
        static std::vector<uint16_t> _serializedATN;


        // Individual action functions triggered by action() above.

        // Individual semantic predicate functions triggered by sempred() above.

        struct Initializer {
            Initializer();
        };

        static Initializer _init;
    };

}  // namespace antlr
