
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
    PUBLIC = 26, STATIC = 27, RETURN = 28, CONSTRUCTOR = 29, IntegerLiteral = 30, 
    FloatingPointLiteral = 31, TRUE = 32, FALSE = 33, CharacterLiteral = 34, 
    StringLiteral = 35, NULLLITERAL = 36, LPAREN = 37, RPAREN = 38, LBRACE = 39, 
    RBRACE = 40, LBRACK = 41, RBRACK = 42, SEMI = 43, COMMA = 44, DOT = 45, 
    ASSIGN = 46, GT = 47, LT = 48, BANG = 49, TILDE = 50, QUESTION = 51, 
    COLON = 52, EQUAL = 53, LE = 54, GE = 55, NOTEQUAL = 56, AND = 57, OR = 58, 
    INC = 59, DEC = 60, ADD = 61, SUB = 62, MUL = 63, DIV = 64, BITAND = 65, 
    BITOR = 66, CARET = 67, MOD = 68, ARROW = 69, COLONCOLON = 70, ADD_ASSIGN = 71, 
    SUB_ASSIGN = 72, MUL_ASSIGN = 73, DIV_ASSIGN = 74, AND_ASSIGN = 75, 
    OR_ASSIGN = 76, XOR_ASSIGN = 77, MOD_ASSIGN = 78, LSHIFT_ASSIGN = 79, 
    RSHIFT_ASSIGN = 80, URSHIFT_ASSIGN = 81, AT = 82, ELLIPSIS = 83, WS = 84, 
    COMMENT = 85, LINE_COMMENT = 86, Identifier = 87, ILLEGAL_TOKEN = 88
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
