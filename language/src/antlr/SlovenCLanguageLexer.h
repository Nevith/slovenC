
// Generated from SlovenCLanguageLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace antlr {


class  SlovenCLanguageLexer : public antlr4::Lexer {
public:
  enum {
    BOOLEAN = 1, BYTE = 2, DOUBLE = 3, INT = 4, VOID = 5, BREAK = 6, CONTINUE = 7, 
    CLASS = 8, EXTENDS = 9, IF = 10, ELSE = 11, FOR = 12, WHILE = 13, TRY = 14, 
    CATCH = 15, FINALLY = 16, THROW = 17, IMPORT = 18, PACKAGE = 19, NEW = 20, 
    THIS = 21, PRIVATE = 22, PUBLIC = 23, STATIC = 24, RETURN = 25, CONSTRUCTOR = 26, 
    IntegerLiteral = 27, FloatingPointLiteral = 28, TRUE = 29, FALSE = 30, 
    CharacterLiteral = 31, StringLiteral = 32, NULLLITERAL = 33, LPAREN = 34, 
    RPAREN = 35, LBRACE = 36, RBRACE = 37, LBRACK = 38, RBRACK = 39, SEMI = 40, 
    COMMA = 41, DOT = 42, ASSIGN = 43, GT = 44, LT = 45, BANG = 46, TILDE = 47, 
    QUESTION = 48, COLON = 49, EQUAL = 50, LE = 51, GE = 52, NOTEQUAL = 53, 
    AND = 54, OR = 55, INC = 56, DEC = 57, ADD = 58, SUB = 59, MUL = 60, 
    DIV = 61, BITAND = 62, BITOR = 63, CARET = 64, MOD = 65, ARROW = 66, 
    COLONCOLON = 67, ADD_ASSIGN = 68, SUB_ASSIGN = 69, MUL_ASSIGN = 70, 
    DIV_ASSIGN = 71, AND_ASSIGN = 72, OR_ASSIGN = 73, XOR_ASSIGN = 74, MOD_ASSIGN = 75, 
    LSHIFT_ASSIGN = 76, RSHIFT_ASSIGN = 77, URSHIFT_ASSIGN = 78, AT = 79, 
    ELLIPSIS = 80, WS = 81, COMMENT = 82, LINE_COMMENT = 83, Identifier = 84, 
    ILLEGAL_TOKEN = 85
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
