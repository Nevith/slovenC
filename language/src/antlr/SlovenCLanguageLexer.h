
// Generated from SlovenCLanguageLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace antlr {


class  SlovenCLanguageLexer : public antlr4::Lexer {
public:
  enum {
    BOOLEAN = 1, BYTE = 2, DOUBLE = 3, INT = 4, BREAK = 5, CONTINUE = 6, 
    CLASS = 7, CONST = 8, EXTENDS = 9, IF = 10, ELSE = 11, FOR = 12, WHILE = 13, 
    TRY = 14, CATCH = 15, FINALLY = 16, THROW = 17, IMPORT = 18, PACKAGE = 19, 
    NEW = 20, INSTANCEOF = 21, SUPER = 22, THIS = 23, VOID = 24, PRIVATE = 25, 
    PUBLIC = 26, STATIC = 27, RETURN = 28, CONSTRUCTOR = 29, DESTRUCTOR = 30, 
    IntegerLiteral = 31, FloatingPointLiteral = 32, TRUE = 33, FALSE = 34, 
    CharacterLiteral = 35, StringLiteral = 36, NULLLITERAL = 37, LPAREN = 38, 
    RPAREN = 39, LBRACE = 40, RBRACE = 41, LBRACK = 42, RBRACK = 43, SEMI = 44, 
    COMMA = 45, DOT = 46, ASSIGN = 47, GT = 48, LT = 49, BANG = 50, TILDE = 51, 
    QUESTION = 52, COLON = 53, EQUAL = 54, LE = 55, GE = 56, NOTEQUAL = 57, 
    AND = 58, OR = 59, INC = 60, DEC = 61, ADD = 62, SUB = 63, MUL = 64, 
    DIV = 65, BITAND = 66, BITOR = 67, CARET = 68, MOD = 69, ARROW = 70, 
    COLONCOLON = 71, ADD_ASSIGN = 72, SUB_ASSIGN = 73, MUL_ASSIGN = 74, 
    DIV_ASSIGN = 75, AND_ASSIGN = 76, OR_ASSIGN = 77, XOR_ASSIGN = 78, MOD_ASSIGN = 79, 
    LSHIFT_ASSIGN = 80, RSHIFT_ASSIGN = 81, URSHIFT_ASSIGN = 82, AT = 83, 
    ELLIPSIS = 84, WS = 85, COMMENT = 86, LINE_COMMENT = 87, Identifier = 88, 
    ILLEGAL_TOKEN = 89
  };

  enum {
    WHITESPACE = 2, COMMENTS = 3
  };

  SlovenCLanguageLexer(antlr4::CharStream *input);
  ~SlovenCLanguageLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

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
