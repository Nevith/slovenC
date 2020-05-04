
// Generated from SlovenCLanguageParser.g4 by ANTLR 4.8


#include "SlovenCLanguageParserListener.h"
#include "SlovenCLanguageParserVisitor.h"

#include "SlovenCLanguageParser.h"


using namespace antlrcpp;
using namespace antlr;
using namespace antlr4;

SlovenCLanguageParser::SlovenCLanguageParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SlovenCLanguageParser::~SlovenCLanguageParser() {
  delete _interpreter;
}

std::string SlovenCLanguageParser::getGrammarFileName() const {
  return "SlovenCLanguageParser.g4";
}

const std::vector<std::string>& SlovenCLanguageParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SlovenCLanguageParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ParseWholeContext ------------------------------------------------------------------

SlovenCLanguageParser::ParseWholeContext::ParseWholeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::CompilationUnitContext* SlovenCLanguageParser::ParseWholeContext::compilationUnit() {
  return getRuleContext<SlovenCLanguageParser::CompilationUnitContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::ParseWholeContext::EOF() {
  return getToken(SlovenCLanguageParser::EOF, 0);
}


size_t SlovenCLanguageParser::ParseWholeContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleParseWhole;
}

void SlovenCLanguageParser::ParseWholeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParseWhole(this);
}

void SlovenCLanguageParser::ParseWholeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParseWhole(this);
}


antlrcpp::Any SlovenCLanguageParser::ParseWholeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitParseWhole(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ParseWholeContext* SlovenCLanguageParser::parseWhole() {
  ParseWholeContext *_localctx = _tracker.createInstance<ParseWholeContext>(_ctx, getState());
  enterRule(_localctx, 0, SlovenCLanguageParser::RuleParseWhole);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    compilationUnit();
    setState(103);
    match(SlovenCLanguageParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

SlovenCLanguageParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlovenCLanguageParser::LiteralContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleLiteral;
}

void SlovenCLanguageParser::LiteralContext::copyFrom(LiteralContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LiteralIntegerContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::LiteralIntegerContext::IntegerLiteral() {
  return getToken(SlovenCLanguageParser::IntegerLiteral, 0);
}

SlovenCLanguageParser::LiteralIntegerContext::LiteralIntegerContext(LiteralContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::LiteralIntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralInteger(this);
}
void SlovenCLanguageParser::LiteralIntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralInteger(this);
}

antlrcpp::Any SlovenCLanguageParser::LiteralIntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitLiteralInteger(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralStringContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::LiteralStringContext::StringLiteral() {
  return getToken(SlovenCLanguageParser::StringLiteral, 0);
}

SlovenCLanguageParser::LiteralStringContext::LiteralStringContext(LiteralContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::LiteralStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralString(this);
}
void SlovenCLanguageParser::LiteralStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralString(this);
}

antlrcpp::Any SlovenCLanguageParser::LiteralStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitLiteralString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralFloatingPointContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::LiteralFloatingPointContext::FloatingPointLiteral() {
  return getToken(SlovenCLanguageParser::FloatingPointLiteral, 0);
}

SlovenCLanguageParser::LiteralFloatingPointContext::LiteralFloatingPointContext(LiteralContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::LiteralFloatingPointContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralFloatingPoint(this);
}
void SlovenCLanguageParser::LiteralFloatingPointContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralFloatingPoint(this);
}

antlrcpp::Any SlovenCLanguageParser::LiteralFloatingPointContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitLiteralFloatingPoint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralBooleanContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::LiteralBooleanContext::TRUE() {
  return getToken(SlovenCLanguageParser::TRUE, 0);
}

tree::TerminalNode* SlovenCLanguageParser::LiteralBooleanContext::FALSE() {
  return getToken(SlovenCLanguageParser::FALSE, 0);
}

SlovenCLanguageParser::LiteralBooleanContext::LiteralBooleanContext(LiteralContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::LiteralBooleanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralBoolean(this);
}
void SlovenCLanguageParser::LiteralBooleanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralBoolean(this);
}

antlrcpp::Any SlovenCLanguageParser::LiteralBooleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitLiteralBoolean(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralNULLLITERALContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::LiteralNULLLITERALContext::NULLLITERAL() {
  return getToken(SlovenCLanguageParser::NULLLITERAL, 0);
}

SlovenCLanguageParser::LiteralNULLLITERALContext::LiteralNULLLITERALContext(LiteralContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::LiteralNULLLITERALContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralNULLLITERAL(this);
}
void SlovenCLanguageParser::LiteralNULLLITERALContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralNULLLITERAL(this);
}

antlrcpp::Any SlovenCLanguageParser::LiteralNULLLITERALContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitLiteralNULLLITERAL(this);
  else
    return visitor->visitChildren(this);
}
SlovenCLanguageParser::LiteralContext* SlovenCLanguageParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 2, SlovenCLanguageParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SlovenCLanguageParser::IntegerLiteral: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<SlovenCLanguageParser::LiteralIntegerContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(105);
        match(SlovenCLanguageParser::IntegerLiteral);
        break;
      }

      case SlovenCLanguageParser::FloatingPointLiteral: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<SlovenCLanguageParser::LiteralFloatingPointContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(106);
        match(SlovenCLanguageParser::FloatingPointLiteral);
        break;
      }

      case SlovenCLanguageParser::TRUE: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<SlovenCLanguageParser::LiteralBooleanContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(107);
        match(SlovenCLanguageParser::TRUE);
        break;
      }

      case SlovenCLanguageParser::FALSE: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<SlovenCLanguageParser::LiteralBooleanContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(108);
        match(SlovenCLanguageParser::FALSE);
        break;
      }

      case SlovenCLanguageParser::StringLiteral: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<SlovenCLanguageParser::LiteralStringContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(109);
        match(SlovenCLanguageParser::StringLiteral);
        break;
      }

      case SlovenCLanguageParser::NULLLITERAL: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<SlovenCLanguageParser::LiteralNULLLITERALContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(110);
        match(SlovenCLanguageParser::NULLLITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

SlovenCLanguageParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlovenCLanguageParser::TypeContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleType;
}

void SlovenCLanguageParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::PrimitiveTypeContext::INT() {
  return getToken(SlovenCLanguageParser::INT, 0);
}

tree::TerminalNode* SlovenCLanguageParser::PrimitiveTypeContext::DOUBLE() {
  return getToken(SlovenCLanguageParser::DOUBLE, 0);
}

tree::TerminalNode* SlovenCLanguageParser::PrimitiveTypeContext::BOOLEAN() {
  return getToken(SlovenCLanguageParser::BOOLEAN, 0);
}

SlovenCLanguageParser::PrimitiveTypeContext::PrimitiveTypeContext(TypeContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveType(this);
}
void SlovenCLanguageParser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveType(this);
}

antlrcpp::Any SlovenCLanguageParser::PrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReferenceTypeContext ------------------------------------------------------------------

SlovenCLanguageParser::ClassTypeContext* SlovenCLanguageParser::ReferenceTypeContext::classType() {
  return getRuleContext<SlovenCLanguageParser::ClassTypeContext>(0);
}

SlovenCLanguageParser::ReferenceTypeContext::ReferenceTypeContext(TypeContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::ReferenceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReferenceType(this);
}
void SlovenCLanguageParser::ReferenceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReferenceType(this);
}

antlrcpp::Any SlovenCLanguageParser::ReferenceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitReferenceType(this);
  else
    return visitor->visitChildren(this);
}
SlovenCLanguageParser::TypeContext* SlovenCLanguageParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 4, SlovenCLanguageParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SlovenCLanguageParser::BOOLEAN:
      case SlovenCLanguageParser::DOUBLE:
      case SlovenCLanguageParser::INT: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<SlovenCLanguageParser::PrimitiveTypeContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(113);
        dynamic_cast<PrimitiveTypeContext *>(_localctx)->id = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::BOOLEAN)
          | (1ULL << SlovenCLanguageParser::DOUBLE)
          | (1ULL << SlovenCLanguageParser::INT))) != 0))) {
          dynamic_cast<PrimitiveTypeContext *>(_localctx)->id = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case SlovenCLanguageParser::Identifier: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<SlovenCLanguageParser::ReferenceTypeContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(114);
        classType(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassTypeContext ------------------------------------------------------------------

SlovenCLanguageParser::ClassTypeContext::ClassTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlovenCLanguageParser::ClassTypeContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleClassType;
}

void SlovenCLanguageParser::ClassTypeContext::copyFrom(ClassTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ClassTypeQualContext ------------------------------------------------------------------

SlovenCLanguageParser::ClassTypeContext* SlovenCLanguageParser::ClassTypeQualContext::classType() {
  return getRuleContext<SlovenCLanguageParser::ClassTypeContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::ClassTypeQualContext::DOT() {
  return getToken(SlovenCLanguageParser::DOT, 0);
}

tree::TerminalNode* SlovenCLanguageParser::ClassTypeQualContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

SlovenCLanguageParser::ClassTypeQualContext::ClassTypeQualContext(ClassTypeContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::ClassTypeQualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassTypeQual(this);
}
void SlovenCLanguageParser::ClassTypeQualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassTypeQual(this);
}

antlrcpp::Any SlovenCLanguageParser::ClassTypeQualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitClassTypeQual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ClassTypeUnqualContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::ClassTypeUnqualContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

SlovenCLanguageParser::ClassTypeUnqualContext::ClassTypeUnqualContext(ClassTypeContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::ClassTypeUnqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassTypeUnqual(this);
}
void SlovenCLanguageParser::ClassTypeUnqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassTypeUnqual(this);
}

antlrcpp::Any SlovenCLanguageParser::ClassTypeUnqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitClassTypeUnqual(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ClassTypeContext* SlovenCLanguageParser::classType() {
   return classType(0);
}

SlovenCLanguageParser::ClassTypeContext* SlovenCLanguageParser::classType(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SlovenCLanguageParser::ClassTypeContext *_localctx = _tracker.createInstance<ClassTypeContext>(_ctx, parentState);
  SlovenCLanguageParser::ClassTypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, SlovenCLanguageParser::RuleClassType, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ClassTypeUnqualContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(118);
    match(SlovenCLanguageParser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(125);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ClassTypeQualContext>(_tracker.createInstance<ClassTypeContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleClassType);
        setState(120);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(121);
        match(SlovenCLanguageParser::DOT);
        setState(122);
        match(SlovenCLanguageParser::Identifier); 
      }
      setState(127);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ModifierContext ------------------------------------------------------------------

SlovenCLanguageParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::ModifierContext::PUBLIC() {
  return getToken(SlovenCLanguageParser::PUBLIC, 0);
}

tree::TerminalNode* SlovenCLanguageParser::ModifierContext::PRIVATE() {
  return getToken(SlovenCLanguageParser::PRIVATE, 0);
}

tree::TerminalNode* SlovenCLanguageParser::ModifierContext::STATIC() {
  return getToken(SlovenCLanguageParser::STATIC, 0);
}


size_t SlovenCLanguageParser::ModifierContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleModifier;
}

void SlovenCLanguageParser::ModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifier(this);
}

void SlovenCLanguageParser::ModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifier(this);
}


antlrcpp::Any SlovenCLanguageParser::ModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitModifier(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ModifierContext* SlovenCLanguageParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 8, SlovenCLanguageParser::RuleModifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::PRIVATE)
      | (1ULL << SlovenCLanguageParser::PUBLIC)
      | (1ULL << SlovenCLanguageParser::STATIC))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileNameContext ------------------------------------------------------------------

SlovenCLanguageParser::FileNameContext::FileNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlovenCLanguageParser::FileNameContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleFileName;
}

void SlovenCLanguageParser::FileNameContext::copyFrom(FileNameContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FileNameQualContext ------------------------------------------------------------------

SlovenCLanguageParser::FileNameContext* SlovenCLanguageParser::FileNameQualContext::fileName() {
  return getRuleContext<SlovenCLanguageParser::FileNameContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::FileNameQualContext::DOT() {
  return getToken(SlovenCLanguageParser::DOT, 0);
}

tree::TerminalNode* SlovenCLanguageParser::FileNameQualContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

SlovenCLanguageParser::FileNameQualContext::FileNameQualContext(FileNameContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::FileNameQualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileNameQual(this);
}
void SlovenCLanguageParser::FileNameQualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileNameQual(this);
}

antlrcpp::Any SlovenCLanguageParser::FileNameQualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitFileNameQual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FileNameUnqualContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::FileNameUnqualContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

SlovenCLanguageParser::FileNameUnqualContext::FileNameUnqualContext(FileNameContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::FileNameUnqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileNameUnqual(this);
}
void SlovenCLanguageParser::FileNameUnqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileNameUnqual(this);
}

antlrcpp::Any SlovenCLanguageParser::FileNameUnqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitFileNameUnqual(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::FileNameContext* SlovenCLanguageParser::fileName() {
   return fileName(0);
}

SlovenCLanguageParser::FileNameContext* SlovenCLanguageParser::fileName(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SlovenCLanguageParser::FileNameContext *_localctx = _tracker.createInstance<FileNameContext>(_ctx, parentState);
  SlovenCLanguageParser::FileNameContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, SlovenCLanguageParser::RuleFileName, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<FileNameUnqualContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(131);
    match(SlovenCLanguageParser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(138);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<FileNameQualContext>(_tracker.createInstance<FileNameContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleFileName);
        setState(133);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(134);
        match(SlovenCLanguageParser::DOT);
        setState(135);
        match(SlovenCLanguageParser::Identifier); 
      }
      setState(140);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CompilationUnitContext ------------------------------------------------------------------

SlovenCLanguageParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::ImportDeclarationsContext* SlovenCLanguageParser::CompilationUnitContext::importDeclarations() {
  return getRuleContext<SlovenCLanguageParser::ImportDeclarationsContext>(0);
}

SlovenCLanguageParser::TypeDeclarationsContext* SlovenCLanguageParser::CompilationUnitContext::typeDeclarations() {
  return getRuleContext<SlovenCLanguageParser::TypeDeclarationsContext>(0);
}


size_t SlovenCLanguageParser::CompilationUnitContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleCompilationUnit;
}

void SlovenCLanguageParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void SlovenCLanguageParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any SlovenCLanguageParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::CompilationUnitContext* SlovenCLanguageParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 12, SlovenCLanguageParser::RuleCompilationUnit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    importDeclarations();
    setState(142);
    typeDeclarations();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDeclarationsContext ------------------------------------------------------------------

SlovenCLanguageParser::ImportDeclarationsContext::ImportDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SlovenCLanguageParser::ImportDeclarationContext *> SlovenCLanguageParser::ImportDeclarationsContext::importDeclaration() {
  return getRuleContexts<SlovenCLanguageParser::ImportDeclarationContext>();
}

SlovenCLanguageParser::ImportDeclarationContext* SlovenCLanguageParser::ImportDeclarationsContext::importDeclaration(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ImportDeclarationContext>(i);
}


size_t SlovenCLanguageParser::ImportDeclarationsContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleImportDeclarations;
}

void SlovenCLanguageParser::ImportDeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportDeclarations(this);
}

void SlovenCLanguageParser::ImportDeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportDeclarations(this);
}


antlrcpp::Any SlovenCLanguageParser::ImportDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImportDeclarations(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ImportDeclarationsContext* SlovenCLanguageParser::importDeclarations() {
  ImportDeclarationsContext *_localctx = _tracker.createInstance<ImportDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 14, SlovenCLanguageParser::RuleImportDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SlovenCLanguageParser::IMPORT) {
      setState(144);
      importDeclaration();
      setState(149);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDeclarationContext ------------------------------------------------------------------

SlovenCLanguageParser::ImportDeclarationContext::ImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::ImportDeclarationContext::IMPORT() {
  return getToken(SlovenCLanguageParser::IMPORT, 0);
}

SlovenCLanguageParser::FileNameContext* SlovenCLanguageParser::ImportDeclarationContext::fileName() {
  return getRuleContext<SlovenCLanguageParser::FileNameContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::ImportDeclarationContext::SEMI() {
  return getToken(SlovenCLanguageParser::SEMI, 0);
}


size_t SlovenCLanguageParser::ImportDeclarationContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleImportDeclaration;
}

void SlovenCLanguageParser::ImportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportDeclaration(this);
}

void SlovenCLanguageParser::ImportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportDeclaration(this);
}


antlrcpp::Any SlovenCLanguageParser::ImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitImportDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ImportDeclarationContext* SlovenCLanguageParser::importDeclaration() {
  ImportDeclarationContext *_localctx = _tracker.createInstance<ImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, SlovenCLanguageParser::RuleImportDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(SlovenCLanguageParser::IMPORT);
    setState(151);
    fileName(0);
    setState(152);
    match(SlovenCLanguageParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationsContext ------------------------------------------------------------------

SlovenCLanguageParser::TypeDeclarationsContext::TypeDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SlovenCLanguageParser::TypeDeclarationContext *> SlovenCLanguageParser::TypeDeclarationsContext::typeDeclaration() {
  return getRuleContexts<SlovenCLanguageParser::TypeDeclarationContext>();
}

SlovenCLanguageParser::TypeDeclarationContext* SlovenCLanguageParser::TypeDeclarationsContext::typeDeclaration(size_t i) {
  return getRuleContext<SlovenCLanguageParser::TypeDeclarationContext>(i);
}


size_t SlovenCLanguageParser::TypeDeclarationsContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleTypeDeclarations;
}

void SlovenCLanguageParser::TypeDeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclarations(this);
}

void SlovenCLanguageParser::TypeDeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclarations(this);
}


antlrcpp::Any SlovenCLanguageParser::TypeDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitTypeDeclarations(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::TypeDeclarationsContext* SlovenCLanguageParser::typeDeclarations() {
  TypeDeclarationsContext *_localctx = _tracker.createInstance<TypeDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 18, SlovenCLanguageParser::RuleTypeDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::CLASS)
      | (1ULL << SlovenCLanguageParser::PRIVATE)
      | (1ULL << SlovenCLanguageParser::PUBLIC)
      | (1ULL << SlovenCLanguageParser::STATIC)
      | (1ULL << SlovenCLanguageParser::SEMI))) != 0)) {
      setState(154);
      typeDeclaration();
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

SlovenCLanguageParser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::ClassDeclarationContext* SlovenCLanguageParser::TypeDeclarationContext::classDeclaration() {
  return getRuleContext<SlovenCLanguageParser::ClassDeclarationContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::TypeDeclarationContext::SEMI() {
  return getToken(SlovenCLanguageParser::SEMI, 0);
}


size_t SlovenCLanguageParser::TypeDeclarationContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleTypeDeclaration;
}

void SlovenCLanguageParser::TypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclaration(this);
}

void SlovenCLanguageParser::TypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclaration(this);
}


antlrcpp::Any SlovenCLanguageParser::TypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::TypeDeclarationContext* SlovenCLanguageParser::typeDeclaration() {
  TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, SlovenCLanguageParser::RuleTypeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SlovenCLanguageParser::CLASS:
      case SlovenCLanguageParser::PRIVATE:
      case SlovenCLanguageParser::PUBLIC:
      case SlovenCLanguageParser::STATIC: {
        enterOuterAlt(_localctx, 1);
        setState(160);
        classDeclaration();
        break;
      }

      case SlovenCLanguageParser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(161);
        match(SlovenCLanguageParser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

SlovenCLanguageParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlovenCLanguageParser::ClassDeclarationContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleClassDeclaration;
}

void SlovenCLanguageParser::ClassDeclarationContext::copyFrom(ClassDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NormalClassDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::NormalClassDeclarationContext::CLASS() {
  return getToken(SlovenCLanguageParser::CLASS, 0);
}

tree::TerminalNode* SlovenCLanguageParser::NormalClassDeclarationContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

SlovenCLanguageParser::InheritanceContext* SlovenCLanguageParser::NormalClassDeclarationContext::inheritance() {
  return getRuleContext<SlovenCLanguageParser::InheritanceContext>(0);
}

SlovenCLanguageParser::ClassBodyContext* SlovenCLanguageParser::NormalClassDeclarationContext::classBody() {
  return getRuleContext<SlovenCLanguageParser::ClassBodyContext>(0);
}

std::vector<SlovenCLanguageParser::ModifierContext *> SlovenCLanguageParser::NormalClassDeclarationContext::modifier() {
  return getRuleContexts<SlovenCLanguageParser::ModifierContext>();
}

SlovenCLanguageParser::ModifierContext* SlovenCLanguageParser::NormalClassDeclarationContext::modifier(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ModifierContext>(i);
}

SlovenCLanguageParser::NormalClassDeclarationContext::NormalClassDeclarationContext(ClassDeclarationContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::NormalClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNormalClassDeclaration(this);
}
void SlovenCLanguageParser::NormalClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNormalClassDeclaration(this);
}

antlrcpp::Any SlovenCLanguageParser::NormalClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitNormalClassDeclaration(this);
  else
    return visitor->visitChildren(this);
}
SlovenCLanguageParser::ClassDeclarationContext* SlovenCLanguageParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 22, SlovenCLanguageParser::RuleClassDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<ClassDeclarationContext *>(_tracker.createInstance<SlovenCLanguageParser::NormalClassDeclarationContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::PRIVATE)
      | (1ULL << SlovenCLanguageParser::PUBLIC)
      | (1ULL << SlovenCLanguageParser::STATIC))) != 0)) {
      setState(164);
      dynamic_cast<NormalClassDeclarationContext *>(_localctx)->modifierContext = modifier();
      dynamic_cast<NormalClassDeclarationContext *>(_localctx)->modifiers.push_back(dynamic_cast<NormalClassDeclarationContext *>(_localctx)->modifierContext);
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(170);
    match(SlovenCLanguageParser::CLASS);
    setState(175);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(171);
      match(SlovenCLanguageParser::Identifier);
      setState(172);
      inheritance();
      setState(173);
      classBody();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InheritanceContext ------------------------------------------------------------------

SlovenCLanguageParser::InheritanceContext::InheritanceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::SuperclassContext* SlovenCLanguageParser::InheritanceContext::superclass() {
  return getRuleContext<SlovenCLanguageParser::SuperclassContext>(0);
}


size_t SlovenCLanguageParser::InheritanceContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleInheritance;
}

void SlovenCLanguageParser::InheritanceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInheritance(this);
}

void SlovenCLanguageParser::InheritanceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInheritance(this);
}


antlrcpp::Any SlovenCLanguageParser::InheritanceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitInheritance(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::InheritanceContext* SlovenCLanguageParser::inheritance() {
  InheritanceContext *_localctx = _tracker.createInstance<InheritanceContext>(_ctx, getState());
  enterRule(_localctx, 24, SlovenCLanguageParser::RuleInheritance);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SlovenCLanguageParser::EXTENDS) {
      setState(177);
      superclass();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuperclassContext ------------------------------------------------------------------

SlovenCLanguageParser::SuperclassContext::SuperclassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::SuperclassContext::EXTENDS() {
  return getToken(SlovenCLanguageParser::EXTENDS, 0);
}

SlovenCLanguageParser::ClassTypeListContext* SlovenCLanguageParser::SuperclassContext::classTypeList() {
  return getRuleContext<SlovenCLanguageParser::ClassTypeListContext>(0);
}


size_t SlovenCLanguageParser::SuperclassContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleSuperclass;
}

void SlovenCLanguageParser::SuperclassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuperclass(this);
}

void SlovenCLanguageParser::SuperclassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuperclass(this);
}


antlrcpp::Any SlovenCLanguageParser::SuperclassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitSuperclass(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::SuperclassContext* SlovenCLanguageParser::superclass() {
  SuperclassContext *_localctx = _tracker.createInstance<SuperclassContext>(_ctx, getState());
  enterRule(_localctx, 26, SlovenCLanguageParser::RuleSuperclass);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(SlovenCLanguageParser::EXTENDS);
    setState(181);
    classTypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassTypeListContext ------------------------------------------------------------------

SlovenCLanguageParser::ClassTypeListContext::ClassTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SlovenCLanguageParser::ClassTypeContext *> SlovenCLanguageParser::ClassTypeListContext::classType() {
  return getRuleContexts<SlovenCLanguageParser::ClassTypeContext>();
}

SlovenCLanguageParser::ClassTypeContext* SlovenCLanguageParser::ClassTypeListContext::classType(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ClassTypeContext>(i);
}

std::vector<tree::TerminalNode *> SlovenCLanguageParser::ClassTypeListContext::COMMA() {
  return getTokens(SlovenCLanguageParser::COMMA);
}

tree::TerminalNode* SlovenCLanguageParser::ClassTypeListContext::COMMA(size_t i) {
  return getToken(SlovenCLanguageParser::COMMA, i);
}


size_t SlovenCLanguageParser::ClassTypeListContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleClassTypeList;
}

void SlovenCLanguageParser::ClassTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassTypeList(this);
}

void SlovenCLanguageParser::ClassTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassTypeList(this);
}


antlrcpp::Any SlovenCLanguageParser::ClassTypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitClassTypeList(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ClassTypeListContext* SlovenCLanguageParser::classTypeList() {
  ClassTypeListContext *_localctx = _tracker.createInstance<ClassTypeListContext>(_ctx, getState());
  enterRule(_localctx, 28, SlovenCLanguageParser::RuleClassTypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    classType(0);
    setState(188);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SlovenCLanguageParser::COMMA) {
      setState(184);
      match(SlovenCLanguageParser::COMMA);
      setState(185);
      classType(0);
      setState(190);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

SlovenCLanguageParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::ClassBodyContext::LBRACE() {
  return getToken(SlovenCLanguageParser::LBRACE, 0);
}

tree::TerminalNode* SlovenCLanguageParser::ClassBodyContext::RBRACE() {
  return getToken(SlovenCLanguageParser::RBRACE, 0);
}

std::vector<SlovenCLanguageParser::ClassBodyDeclarationContext *> SlovenCLanguageParser::ClassBodyContext::classBodyDeclaration() {
  return getRuleContexts<SlovenCLanguageParser::ClassBodyDeclarationContext>();
}

SlovenCLanguageParser::ClassBodyDeclarationContext* SlovenCLanguageParser::ClassBodyContext::classBodyDeclaration(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ClassBodyDeclarationContext>(i);
}


size_t SlovenCLanguageParser::ClassBodyContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleClassBody;
}

void SlovenCLanguageParser::ClassBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBody(this);
}

void SlovenCLanguageParser::ClassBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBody(this);
}


antlrcpp::Any SlovenCLanguageParser::ClassBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitClassBody(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ClassBodyContext* SlovenCLanguageParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 30, SlovenCLanguageParser::RuleClassBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    match(SlovenCLanguageParser::LBRACE);
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::BOOLEAN)
      | (1ULL << SlovenCLanguageParser::DOUBLE)
      | (1ULL << SlovenCLanguageParser::INT)
      | (1ULL << SlovenCLanguageParser::VOID)
      | (1ULL << SlovenCLanguageParser::CLASS)
      | (1ULL << SlovenCLanguageParser::PRIVATE)
      | (1ULL << SlovenCLanguageParser::PUBLIC)
      | (1ULL << SlovenCLanguageParser::STATIC)
      | (1ULL << SlovenCLanguageParser::CONSTRUCTOR)
      | (1ULL << SlovenCLanguageParser::SEMI))) != 0) || _la == SlovenCLanguageParser::Identifier) {
      setState(192);
      classBodyDeclaration();
      setState(197);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(198);
    match(SlovenCLanguageParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyDeclarationContext ------------------------------------------------------------------

SlovenCLanguageParser::ClassBodyDeclarationContext::ClassBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::FieldDeclarationContext* SlovenCLanguageParser::ClassBodyDeclarationContext::fieldDeclaration() {
  return getRuleContext<SlovenCLanguageParser::FieldDeclarationContext>(0);
}

SlovenCLanguageParser::MethodDeclarationContext* SlovenCLanguageParser::ClassBodyDeclarationContext::methodDeclaration() {
  return getRuleContext<SlovenCLanguageParser::MethodDeclarationContext>(0);
}

SlovenCLanguageParser::ConstructorDeclarationContext* SlovenCLanguageParser::ClassBodyDeclarationContext::constructorDeclaration() {
  return getRuleContext<SlovenCLanguageParser::ConstructorDeclarationContext>(0);
}

SlovenCLanguageParser::ClassDeclarationContext* SlovenCLanguageParser::ClassBodyDeclarationContext::classDeclaration() {
  return getRuleContext<SlovenCLanguageParser::ClassDeclarationContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::ClassBodyDeclarationContext::SEMI() {
  return getToken(SlovenCLanguageParser::SEMI, 0);
}


size_t SlovenCLanguageParser::ClassBodyDeclarationContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleClassBodyDeclaration;
}

void SlovenCLanguageParser::ClassBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBodyDeclaration(this);
}

void SlovenCLanguageParser::ClassBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBodyDeclaration(this);
}


antlrcpp::Any SlovenCLanguageParser::ClassBodyDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitClassBodyDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ClassBodyDeclarationContext* SlovenCLanguageParser::classBodyDeclaration() {
  ClassBodyDeclarationContext *_localctx = _tracker.createInstance<ClassBodyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 32, SlovenCLanguageParser::RuleClassBodyDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(205);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(200);
      fieldDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(201);
      methodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(202);
      constructorDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(203);
      classDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(204);
      match(SlovenCLanguageParser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclarationContext ------------------------------------------------------------------

SlovenCLanguageParser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::TypeContext* SlovenCLanguageParser::FieldDeclarationContext::type() {
  return getRuleContext<SlovenCLanguageParser::TypeContext>(0);
}

SlovenCLanguageParser::FieldDeclaratorContext* SlovenCLanguageParser::FieldDeclarationContext::fieldDeclarator() {
  return getRuleContext<SlovenCLanguageParser::FieldDeclaratorContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::FieldDeclarationContext::SEMI() {
  return getToken(SlovenCLanguageParser::SEMI, 0);
}

std::vector<SlovenCLanguageParser::ModifierContext *> SlovenCLanguageParser::FieldDeclarationContext::modifier() {
  return getRuleContexts<SlovenCLanguageParser::ModifierContext>();
}

SlovenCLanguageParser::ModifierContext* SlovenCLanguageParser::FieldDeclarationContext::modifier(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ModifierContext>(i);
}


size_t SlovenCLanguageParser::FieldDeclarationContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleFieldDeclaration;
}

void SlovenCLanguageParser::FieldDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDeclaration(this);
}

void SlovenCLanguageParser::FieldDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDeclaration(this);
}


antlrcpp::Any SlovenCLanguageParser::FieldDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitFieldDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::FieldDeclarationContext* SlovenCLanguageParser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 34, SlovenCLanguageParser::RuleFieldDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::PRIVATE)
      | (1ULL << SlovenCLanguageParser::PUBLIC)
      | (1ULL << SlovenCLanguageParser::STATIC))) != 0)) {
      setState(207);
      dynamic_cast<FieldDeclarationContext *>(_localctx)->modifierContext = modifier();
      dynamic_cast<FieldDeclarationContext *>(_localctx)->modifiers.push_back(dynamic_cast<FieldDeclarationContext *>(_localctx)->modifierContext);
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(213);
    type();
    setState(214);
    fieldDeclarator();
    setState(216);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(215);
      dynamic_cast<FieldDeclarationContext *>(_localctx)->semiToken = match(SlovenCLanguageParser::SEMI);
      break;
    }

    }
     if (dynamic_cast<FieldDeclarationContext *>(_localctx)->semiToken == NULL) notifyErrorListeners("Missing ';'"); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclaratorContext ------------------------------------------------------------------

SlovenCLanguageParser::FieldDeclaratorContext::FieldDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::FieldDeclaratorContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

tree::TerminalNode* SlovenCLanguageParser::FieldDeclaratorContext::ASSIGN() {
  return getToken(SlovenCLanguageParser::ASSIGN, 0);
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::FieldDeclaratorContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}


size_t SlovenCLanguageParser::FieldDeclaratorContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleFieldDeclarator;
}

void SlovenCLanguageParser::FieldDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDeclarator(this);
}

void SlovenCLanguageParser::FieldDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDeclarator(this);
}


antlrcpp::Any SlovenCLanguageParser::FieldDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitFieldDeclarator(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::FieldDeclaratorContext* SlovenCLanguageParser::fieldDeclarator() {
  FieldDeclaratorContext *_localctx = _tracker.createInstance<FieldDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 36, SlovenCLanguageParser::RuleFieldDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(SlovenCLanguageParser::Identifier);
    setState(223);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SlovenCLanguageParser::ASSIGN) {
      setState(221);
      match(SlovenCLanguageParser::ASSIGN);
      setState(222);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorContext ------------------------------------------------------------------

SlovenCLanguageParser::VariableDeclaratorContext::VariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::VariableDeclaratorContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

tree::TerminalNode* SlovenCLanguageParser::VariableDeclaratorContext::ASSIGN() {
  return getToken(SlovenCLanguageParser::ASSIGN, 0);
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::VariableDeclaratorContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}


size_t SlovenCLanguageParser::VariableDeclaratorContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleVariableDeclarator;
}

void SlovenCLanguageParser::VariableDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarator(this);
}

void SlovenCLanguageParser::VariableDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarator(this);
}


antlrcpp::Any SlovenCLanguageParser::VariableDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarator(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::VariableDeclaratorContext* SlovenCLanguageParser::variableDeclarator() {
  VariableDeclaratorContext *_localctx = _tracker.createInstance<VariableDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 38, SlovenCLanguageParser::RuleVariableDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(SlovenCLanguageParser::Identifier);
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SlovenCLanguageParser::ASSIGN) {
      setState(226);
      match(SlovenCLanguageParser::ASSIGN);
      setState(227);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclarationContext ------------------------------------------------------------------

SlovenCLanguageParser::MethodDeclarationContext::MethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::MethodHeaderContext* SlovenCLanguageParser::MethodDeclarationContext::methodHeader() {
  return getRuleContext<SlovenCLanguageParser::MethodHeaderContext>(0);
}

SlovenCLanguageParser::MethodBodyContext* SlovenCLanguageParser::MethodDeclarationContext::methodBody() {
  return getRuleContext<SlovenCLanguageParser::MethodBodyContext>(0);
}

std::vector<SlovenCLanguageParser::ModifierContext *> SlovenCLanguageParser::MethodDeclarationContext::modifier() {
  return getRuleContexts<SlovenCLanguageParser::ModifierContext>();
}

SlovenCLanguageParser::ModifierContext* SlovenCLanguageParser::MethodDeclarationContext::modifier(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ModifierContext>(i);
}


size_t SlovenCLanguageParser::MethodDeclarationContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleMethodDeclaration;
}

void SlovenCLanguageParser::MethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDeclaration(this);
}

void SlovenCLanguageParser::MethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDeclaration(this);
}


antlrcpp::Any SlovenCLanguageParser::MethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::MethodDeclarationContext* SlovenCLanguageParser::methodDeclaration() {
  MethodDeclarationContext *_localctx = _tracker.createInstance<MethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 40, SlovenCLanguageParser::RuleMethodDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::PRIVATE)
      | (1ULL << SlovenCLanguageParser::PUBLIC)
      | (1ULL << SlovenCLanguageParser::STATIC))) != 0)) {
      setState(230);
      dynamic_cast<MethodDeclarationContext *>(_localctx)->modifierContext = modifier();
      dynamic_cast<MethodDeclarationContext *>(_localctx)->modifiers.push_back(dynamic_cast<MethodDeclarationContext *>(_localctx)->modifierContext);
      setState(235);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(236);
    methodHeader();
    setState(237);
    methodBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodHeaderContext ------------------------------------------------------------------

SlovenCLanguageParser::MethodHeaderContext::MethodHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::ResultContext* SlovenCLanguageParser::MethodHeaderContext::result() {
  return getRuleContext<SlovenCLanguageParser::ResultContext>(0);
}

SlovenCLanguageParser::MethodDeclaratorContext* SlovenCLanguageParser::MethodHeaderContext::methodDeclarator() {
  return getRuleContext<SlovenCLanguageParser::MethodDeclaratorContext>(0);
}


size_t SlovenCLanguageParser::MethodHeaderContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleMethodHeader;
}

void SlovenCLanguageParser::MethodHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodHeader(this);
}

void SlovenCLanguageParser::MethodHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodHeader(this);
}


antlrcpp::Any SlovenCLanguageParser::MethodHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitMethodHeader(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::MethodHeaderContext* SlovenCLanguageParser::methodHeader() {
  MethodHeaderContext *_localctx = _tracker.createInstance<MethodHeaderContext>(_ctx, getState());
  enterRule(_localctx, 42, SlovenCLanguageParser::RuleMethodHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    result();
    setState(240);
    methodDeclarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResultContext ------------------------------------------------------------------

SlovenCLanguageParser::ResultContext::ResultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::TypeContext* SlovenCLanguageParser::ResultContext::type() {
  return getRuleContext<SlovenCLanguageParser::TypeContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::ResultContext::VOID() {
  return getToken(SlovenCLanguageParser::VOID, 0);
}


size_t SlovenCLanguageParser::ResultContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleResult;
}

void SlovenCLanguageParser::ResultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResult(this);
}

void SlovenCLanguageParser::ResultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResult(this);
}


antlrcpp::Any SlovenCLanguageParser::ResultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitResult(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ResultContext* SlovenCLanguageParser::result() {
  ResultContext *_localctx = _tracker.createInstance<ResultContext>(_ctx, getState());
  enterRule(_localctx, 44, SlovenCLanguageParser::RuleResult);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(244);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SlovenCLanguageParser::BOOLEAN:
      case SlovenCLanguageParser::DOUBLE:
      case SlovenCLanguageParser::INT:
      case SlovenCLanguageParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(242);
        type();
        break;
      }

      case SlovenCLanguageParser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(243);
        match(SlovenCLanguageParser::VOID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclaratorContext ------------------------------------------------------------------

SlovenCLanguageParser::MethodDeclaratorContext::MethodDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::MethodDeclaratorContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

tree::TerminalNode* SlovenCLanguageParser::MethodDeclaratorContext::LPAREN() {
  return getToken(SlovenCLanguageParser::LPAREN, 0);
}

tree::TerminalNode* SlovenCLanguageParser::MethodDeclaratorContext::RPAREN() {
  return getToken(SlovenCLanguageParser::RPAREN, 0);
}

SlovenCLanguageParser::FormalParameterListContext* SlovenCLanguageParser::MethodDeclaratorContext::formalParameterList() {
  return getRuleContext<SlovenCLanguageParser::FormalParameterListContext>(0);
}


size_t SlovenCLanguageParser::MethodDeclaratorContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleMethodDeclarator;
}

void SlovenCLanguageParser::MethodDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDeclarator(this);
}

void SlovenCLanguageParser::MethodDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDeclarator(this);
}


antlrcpp::Any SlovenCLanguageParser::MethodDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitMethodDeclarator(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::MethodDeclaratorContext* SlovenCLanguageParser::methodDeclarator() {
  MethodDeclaratorContext *_localctx = _tracker.createInstance<MethodDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 46, SlovenCLanguageParser::RuleMethodDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    match(SlovenCLanguageParser::Identifier);
    setState(252);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SlovenCLanguageParser::LPAREN) {
      setState(247);
      dynamic_cast<MethodDeclaratorContext *>(_localctx)->lparenToken = match(SlovenCLanguageParser::LPAREN);
      setState(249);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::BOOLEAN)
        | (1ULL << SlovenCLanguageParser::DOUBLE)
        | (1ULL << SlovenCLanguageParser::INT)
        | (1ULL << SlovenCLanguageParser::PRIVATE)
        | (1ULL << SlovenCLanguageParser::PUBLIC)
        | (1ULL << SlovenCLanguageParser::STATIC))) != 0) || _la == SlovenCLanguageParser::Identifier) {
        setState(248);
        formalParameterList();
      }
      setState(251);
      match(SlovenCLanguageParser::RPAREN);
    }
     if (dynamic_cast<MethodDeclaratorContext *>(_localctx)->lparenToken == NULL) notifyErrorListeners("Missing '('"); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

SlovenCLanguageParser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SlovenCLanguageParser::FormalParameterContext *> SlovenCLanguageParser::FormalParameterListContext::formalParameter() {
  return getRuleContexts<SlovenCLanguageParser::FormalParameterContext>();
}

SlovenCLanguageParser::FormalParameterContext* SlovenCLanguageParser::FormalParameterListContext::formalParameter(size_t i) {
  return getRuleContext<SlovenCLanguageParser::FormalParameterContext>(i);
}

std::vector<tree::TerminalNode *> SlovenCLanguageParser::FormalParameterListContext::COMMA() {
  return getTokens(SlovenCLanguageParser::COMMA);
}

tree::TerminalNode* SlovenCLanguageParser::FormalParameterListContext::COMMA(size_t i) {
  return getToken(SlovenCLanguageParser::COMMA, i);
}


size_t SlovenCLanguageParser::FormalParameterListContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleFormalParameterList;
}

void SlovenCLanguageParser::FormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterList(this);
}

void SlovenCLanguageParser::FormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterList(this);
}


antlrcpp::Any SlovenCLanguageParser::FormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::FormalParameterListContext* SlovenCLanguageParser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 48, SlovenCLanguageParser::RuleFormalParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    formalParameter();
    setState(261);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SlovenCLanguageParser::COMMA) {
      setState(257);
      match(SlovenCLanguageParser::COMMA);
      setState(258);
      formalParameter();
      setState(263);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterContext ------------------------------------------------------------------

SlovenCLanguageParser::FormalParameterContext::FormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::TypeContext* SlovenCLanguageParser::FormalParameterContext::type() {
  return getRuleContext<SlovenCLanguageParser::TypeContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::FormalParameterContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

std::vector<SlovenCLanguageParser::ModifierContext *> SlovenCLanguageParser::FormalParameterContext::modifier() {
  return getRuleContexts<SlovenCLanguageParser::ModifierContext>();
}

SlovenCLanguageParser::ModifierContext* SlovenCLanguageParser::FormalParameterContext::modifier(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ModifierContext>(i);
}


size_t SlovenCLanguageParser::FormalParameterContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleFormalParameter;
}

void SlovenCLanguageParser::FormalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameter(this);
}

void SlovenCLanguageParser::FormalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameter(this);
}


antlrcpp::Any SlovenCLanguageParser::FormalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameter(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::FormalParameterContext* SlovenCLanguageParser::formalParameter() {
  FormalParameterContext *_localctx = _tracker.createInstance<FormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 50, SlovenCLanguageParser::RuleFormalParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::PRIVATE)
      | (1ULL << SlovenCLanguageParser::PUBLIC)
      | (1ULL << SlovenCLanguageParser::STATIC))) != 0)) {
      setState(264);
      dynamic_cast<FormalParameterContext *>(_localctx)->modifierContext = modifier();
      dynamic_cast<FormalParameterContext *>(_localctx)->modifiers.push_back(dynamic_cast<FormalParameterContext *>(_localctx)->modifierContext);
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(270);
    type();
    setState(271);
    match(SlovenCLanguageParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodBodyContext ------------------------------------------------------------------

SlovenCLanguageParser::MethodBodyContext::MethodBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::MethodBodyContext::LBRACE() {
  return getToken(SlovenCLanguageParser::LBRACE, 0);
}

tree::TerminalNode* SlovenCLanguageParser::MethodBodyContext::RBRACE() {
  return getToken(SlovenCLanguageParser::RBRACE, 0);
}

std::vector<SlovenCLanguageParser::BlockStatementContext *> SlovenCLanguageParser::MethodBodyContext::blockStatement() {
  return getRuleContexts<SlovenCLanguageParser::BlockStatementContext>();
}

SlovenCLanguageParser::BlockStatementContext* SlovenCLanguageParser::MethodBodyContext::blockStatement(size_t i) {
  return getRuleContext<SlovenCLanguageParser::BlockStatementContext>(i);
}

tree::TerminalNode* SlovenCLanguageParser::MethodBodyContext::SEMI() {
  return getToken(SlovenCLanguageParser::SEMI, 0);
}


size_t SlovenCLanguageParser::MethodBodyContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleMethodBody;
}

void SlovenCLanguageParser::MethodBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodBody(this);
}

void SlovenCLanguageParser::MethodBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodBody(this);
}


antlrcpp::Any SlovenCLanguageParser::MethodBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitMethodBody(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::MethodBodyContext* SlovenCLanguageParser::methodBody() {
  MethodBodyContext *_localctx = _tracker.createInstance<MethodBodyContext>(_ctx, getState());
  enterRule(_localctx, 52, SlovenCLanguageParser::RuleMethodBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(282);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SlovenCLanguageParser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(273);
        match(SlovenCLanguageParser::LBRACE);
        setState(277);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::BOOLEAN)
          | (1ULL << SlovenCLanguageParser::DOUBLE)
          | (1ULL << SlovenCLanguageParser::INT)
          | (1ULL << SlovenCLanguageParser::BREAK)
          | (1ULL << SlovenCLanguageParser::CONTINUE)
          | (1ULL << SlovenCLanguageParser::IF)
          | (1ULL << SlovenCLanguageParser::FOR)
          | (1ULL << SlovenCLanguageParser::WHILE)
          | (1ULL << SlovenCLanguageParser::NEW)
          | (1ULL << SlovenCLanguageParser::THIS)
          | (1ULL << SlovenCLanguageParser::RETURN)
          | (1ULL << SlovenCLanguageParser::IntegerLiteral)
          | (1ULL << SlovenCLanguageParser::FloatingPointLiteral)
          | (1ULL << SlovenCLanguageParser::TRUE)
          | (1ULL << SlovenCLanguageParser::FALSE)
          | (1ULL << SlovenCLanguageParser::StringLiteral)
          | (1ULL << SlovenCLanguageParser::NULLLITERAL)
          | (1ULL << SlovenCLanguageParser::LPAREN)
          | (1ULL << SlovenCLanguageParser::LBRACE)
          | (1ULL << SlovenCLanguageParser::SEMI)
          | (1ULL << SlovenCLanguageParser::BANG))) != 0) || _la == SlovenCLanguageParser::Identifier) {
          setState(274);
          blockStatement();
          setState(279);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(280);
        match(SlovenCLanguageParser::RBRACE);
        break;
      }

      case SlovenCLanguageParser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(281);
        match(SlovenCLanguageParser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclarationContext ------------------------------------------------------------------

SlovenCLanguageParser::ConstructorDeclarationContext::ConstructorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::ConstructorDeclaratorContext* SlovenCLanguageParser::ConstructorDeclarationContext::constructorDeclarator() {
  return getRuleContext<SlovenCLanguageParser::ConstructorDeclaratorContext>(0);
}

SlovenCLanguageParser::ConstructorBodyContext* SlovenCLanguageParser::ConstructorDeclarationContext::constructorBody() {
  return getRuleContext<SlovenCLanguageParser::ConstructorBodyContext>(0);
}

std::vector<SlovenCLanguageParser::ModifierContext *> SlovenCLanguageParser::ConstructorDeclarationContext::modifier() {
  return getRuleContexts<SlovenCLanguageParser::ModifierContext>();
}

SlovenCLanguageParser::ModifierContext* SlovenCLanguageParser::ConstructorDeclarationContext::modifier(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ModifierContext>(i);
}


size_t SlovenCLanguageParser::ConstructorDeclarationContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleConstructorDeclaration;
}

void SlovenCLanguageParser::ConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDeclaration(this);
}

void SlovenCLanguageParser::ConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDeclaration(this);
}


antlrcpp::Any SlovenCLanguageParser::ConstructorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitConstructorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ConstructorDeclarationContext* SlovenCLanguageParser::constructorDeclaration() {
  ConstructorDeclarationContext *_localctx = _tracker.createInstance<ConstructorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 54, SlovenCLanguageParser::RuleConstructorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::PRIVATE)
      | (1ULL << SlovenCLanguageParser::PUBLIC)
      | (1ULL << SlovenCLanguageParser::STATIC))) != 0)) {
      setState(284);
      dynamic_cast<ConstructorDeclarationContext *>(_localctx)->modifierContext = modifier();
      dynamic_cast<ConstructorDeclarationContext *>(_localctx)->modifiers.push_back(dynamic_cast<ConstructorDeclarationContext *>(_localctx)->modifierContext);
      setState(289);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(290);
    constructorDeclarator();
    setState(291);
    constructorBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclaratorContext ------------------------------------------------------------------

SlovenCLanguageParser::ConstructorDeclaratorContext::ConstructorDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::ConstructorDeclaratorContext::CONSTRUCTOR() {
  return getToken(SlovenCLanguageParser::CONSTRUCTOR, 0);
}

tree::TerminalNode* SlovenCLanguageParser::ConstructorDeclaratorContext::LPAREN() {
  return getToken(SlovenCLanguageParser::LPAREN, 0);
}

tree::TerminalNode* SlovenCLanguageParser::ConstructorDeclaratorContext::RPAREN() {
  return getToken(SlovenCLanguageParser::RPAREN, 0);
}

SlovenCLanguageParser::FormalParameterListContext* SlovenCLanguageParser::ConstructorDeclaratorContext::formalParameterList() {
  return getRuleContext<SlovenCLanguageParser::FormalParameterListContext>(0);
}


size_t SlovenCLanguageParser::ConstructorDeclaratorContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleConstructorDeclarator;
}

void SlovenCLanguageParser::ConstructorDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDeclarator(this);
}

void SlovenCLanguageParser::ConstructorDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDeclarator(this);
}


antlrcpp::Any SlovenCLanguageParser::ConstructorDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitConstructorDeclarator(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ConstructorDeclaratorContext* SlovenCLanguageParser::constructorDeclarator() {
  ConstructorDeclaratorContext *_localctx = _tracker.createInstance<ConstructorDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 56, SlovenCLanguageParser::RuleConstructorDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    match(SlovenCLanguageParser::CONSTRUCTOR);
    setState(299);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SlovenCLanguageParser::LPAREN) {
      setState(294);
      dynamic_cast<ConstructorDeclaratorContext *>(_localctx)->lparenToken = match(SlovenCLanguageParser::LPAREN);
      setState(296);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::BOOLEAN)
        | (1ULL << SlovenCLanguageParser::DOUBLE)
        | (1ULL << SlovenCLanguageParser::INT)
        | (1ULL << SlovenCLanguageParser::PRIVATE)
        | (1ULL << SlovenCLanguageParser::PUBLIC)
        | (1ULL << SlovenCLanguageParser::STATIC))) != 0) || _la == SlovenCLanguageParser::Identifier) {
        setState(295);
        formalParameterList();
      }
      setState(298);
      match(SlovenCLanguageParser::RPAREN);
    }
     if (dynamic_cast<ConstructorDeclaratorContext *>(_localctx)->lparenToken == NULL) notifyErrorListeners("Missing '('"); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorBodyContext ------------------------------------------------------------------

SlovenCLanguageParser::ConstructorBodyContext::ConstructorBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::ConstructorBodyContext::LBRACE() {
  return getToken(SlovenCLanguageParser::LBRACE, 0);
}

tree::TerminalNode* SlovenCLanguageParser::ConstructorBodyContext::RBRACE() {
  return getToken(SlovenCLanguageParser::RBRACE, 0);
}

std::vector<SlovenCLanguageParser::BlockStatementContext *> SlovenCLanguageParser::ConstructorBodyContext::blockStatement() {
  return getRuleContexts<SlovenCLanguageParser::BlockStatementContext>();
}

SlovenCLanguageParser::BlockStatementContext* SlovenCLanguageParser::ConstructorBodyContext::blockStatement(size_t i) {
  return getRuleContext<SlovenCLanguageParser::BlockStatementContext>(i);
}


size_t SlovenCLanguageParser::ConstructorBodyContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleConstructorBody;
}

void SlovenCLanguageParser::ConstructorBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorBody(this);
}

void SlovenCLanguageParser::ConstructorBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorBody(this);
}


antlrcpp::Any SlovenCLanguageParser::ConstructorBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitConstructorBody(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ConstructorBodyContext* SlovenCLanguageParser::constructorBody() {
  ConstructorBodyContext *_localctx = _tracker.createInstance<ConstructorBodyContext>(_ctx, getState());
  enterRule(_localctx, 58, SlovenCLanguageParser::RuleConstructorBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(SlovenCLanguageParser::LBRACE);
    setState(307);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::BOOLEAN)
      | (1ULL << SlovenCLanguageParser::DOUBLE)
      | (1ULL << SlovenCLanguageParser::INT)
      | (1ULL << SlovenCLanguageParser::BREAK)
      | (1ULL << SlovenCLanguageParser::CONTINUE)
      | (1ULL << SlovenCLanguageParser::IF)
      | (1ULL << SlovenCLanguageParser::FOR)
      | (1ULL << SlovenCLanguageParser::WHILE)
      | (1ULL << SlovenCLanguageParser::NEW)
      | (1ULL << SlovenCLanguageParser::THIS)
      | (1ULL << SlovenCLanguageParser::RETURN)
      | (1ULL << SlovenCLanguageParser::IntegerLiteral)
      | (1ULL << SlovenCLanguageParser::FloatingPointLiteral)
      | (1ULL << SlovenCLanguageParser::TRUE)
      | (1ULL << SlovenCLanguageParser::FALSE)
      | (1ULL << SlovenCLanguageParser::StringLiteral)
      | (1ULL << SlovenCLanguageParser::NULLLITERAL)
      | (1ULL << SlovenCLanguageParser::LPAREN)
      | (1ULL << SlovenCLanguageParser::LBRACE)
      | (1ULL << SlovenCLanguageParser::SEMI)
      | (1ULL << SlovenCLanguageParser::BANG))) != 0) || _la == SlovenCLanguageParser::Identifier) {
      setState(304);
      blockStatement();
      setState(309);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(310);
    match(SlovenCLanguageParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SlovenCLanguageParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::BlockContext::LBRACE() {
  return getToken(SlovenCLanguageParser::LBRACE, 0);
}

tree::TerminalNode* SlovenCLanguageParser::BlockContext::RBRACE() {
  return getToken(SlovenCLanguageParser::RBRACE, 0);
}

std::vector<SlovenCLanguageParser::BlockStatementContext *> SlovenCLanguageParser::BlockContext::blockStatement() {
  return getRuleContexts<SlovenCLanguageParser::BlockStatementContext>();
}

SlovenCLanguageParser::BlockStatementContext* SlovenCLanguageParser::BlockContext::blockStatement(size_t i) {
  return getRuleContext<SlovenCLanguageParser::BlockStatementContext>(i);
}


size_t SlovenCLanguageParser::BlockContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleBlock;
}

void SlovenCLanguageParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void SlovenCLanguageParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any SlovenCLanguageParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::BlockContext* SlovenCLanguageParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 60, SlovenCLanguageParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    match(SlovenCLanguageParser::LBRACE);
    setState(316);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::BOOLEAN)
      | (1ULL << SlovenCLanguageParser::DOUBLE)
      | (1ULL << SlovenCLanguageParser::INT)
      | (1ULL << SlovenCLanguageParser::BREAK)
      | (1ULL << SlovenCLanguageParser::CONTINUE)
      | (1ULL << SlovenCLanguageParser::IF)
      | (1ULL << SlovenCLanguageParser::FOR)
      | (1ULL << SlovenCLanguageParser::WHILE)
      | (1ULL << SlovenCLanguageParser::NEW)
      | (1ULL << SlovenCLanguageParser::THIS)
      | (1ULL << SlovenCLanguageParser::RETURN)
      | (1ULL << SlovenCLanguageParser::IntegerLiteral)
      | (1ULL << SlovenCLanguageParser::FloatingPointLiteral)
      | (1ULL << SlovenCLanguageParser::TRUE)
      | (1ULL << SlovenCLanguageParser::FALSE)
      | (1ULL << SlovenCLanguageParser::StringLiteral)
      | (1ULL << SlovenCLanguageParser::NULLLITERAL)
      | (1ULL << SlovenCLanguageParser::LPAREN)
      | (1ULL << SlovenCLanguageParser::LBRACE)
      | (1ULL << SlovenCLanguageParser::SEMI)
      | (1ULL << SlovenCLanguageParser::BANG))) != 0) || _la == SlovenCLanguageParser::Identifier) {
      setState(313);
      blockStatement();
      setState(318);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(319);
    match(SlovenCLanguageParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

SlovenCLanguageParser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::LocalVariableDeclarationStatementContext* SlovenCLanguageParser::BlockStatementContext::localVariableDeclarationStatement() {
  return getRuleContext<SlovenCLanguageParser::LocalVariableDeclarationStatementContext>(0);
}

SlovenCLanguageParser::StatementContext* SlovenCLanguageParser::BlockStatementContext::statement() {
  return getRuleContext<SlovenCLanguageParser::StatementContext>(0);
}


size_t SlovenCLanguageParser::BlockStatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleBlockStatement;
}

void SlovenCLanguageParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}

void SlovenCLanguageParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::BlockStatementContext* SlovenCLanguageParser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 62, SlovenCLanguageParser::RuleBlockStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(323);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(321);
      localVariableDeclarationStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(322);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationStatementContext ------------------------------------------------------------------

SlovenCLanguageParser::LocalVariableDeclarationStatementContext::LocalVariableDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::LocalVariableDeclarationContext* SlovenCLanguageParser::LocalVariableDeclarationStatementContext::localVariableDeclaration() {
  return getRuleContext<SlovenCLanguageParser::LocalVariableDeclarationContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::LocalVariableDeclarationStatementContext::SEMI() {
  return getToken(SlovenCLanguageParser::SEMI, 0);
}


size_t SlovenCLanguageParser::LocalVariableDeclarationStatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleLocalVariableDeclarationStatement;
}

void SlovenCLanguageParser::LocalVariableDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariableDeclarationStatement(this);
}

void SlovenCLanguageParser::LocalVariableDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariableDeclarationStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::LocalVariableDeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitLocalVariableDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::LocalVariableDeclarationStatementContext* SlovenCLanguageParser::localVariableDeclarationStatement() {
  LocalVariableDeclarationStatementContext *_localctx = _tracker.createInstance<LocalVariableDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 64, SlovenCLanguageParser::RuleLocalVariableDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(331);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(325);
      localVariableDeclaration();
      setState(326);
      match(SlovenCLanguageParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(328);
      localVariableDeclaration();
       notifyErrorListeners("Missing ';'"); 
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationContext ------------------------------------------------------------------

SlovenCLanguageParser::LocalVariableDeclarationContext::LocalVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::TypeContext* SlovenCLanguageParser::LocalVariableDeclarationContext::type() {
  return getRuleContext<SlovenCLanguageParser::TypeContext>(0);
}

SlovenCLanguageParser::VariableDeclaratorContext* SlovenCLanguageParser::LocalVariableDeclarationContext::variableDeclarator() {
  return getRuleContext<SlovenCLanguageParser::VariableDeclaratorContext>(0);
}


size_t SlovenCLanguageParser::LocalVariableDeclarationContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleLocalVariableDeclaration;
}

void SlovenCLanguageParser::LocalVariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariableDeclaration(this);
}

void SlovenCLanguageParser::LocalVariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariableDeclaration(this);
}


antlrcpp::Any SlovenCLanguageParser::LocalVariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitLocalVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::LocalVariableDeclarationContext* SlovenCLanguageParser::localVariableDeclaration() {
  LocalVariableDeclarationContext *_localctx = _tracker.createInstance<LocalVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 66, SlovenCLanguageParser::RuleLocalVariableDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    type();
    setState(334);
    variableDeclarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SlovenCLanguageParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::Block_Context* SlovenCLanguageParser::StatementContext::block_() {
  return getRuleContext<SlovenCLanguageParser::Block_Context>(0);
}

SlovenCLanguageParser::IfThenStatementContext* SlovenCLanguageParser::StatementContext::ifThenStatement() {
  return getRuleContext<SlovenCLanguageParser::IfThenStatementContext>(0);
}

SlovenCLanguageParser::BasicForStatementContext* SlovenCLanguageParser::StatementContext::basicForStatement() {
  return getRuleContext<SlovenCLanguageParser::BasicForStatementContext>(0);
}

SlovenCLanguageParser::WhileStatementContext* SlovenCLanguageParser::StatementContext::whileStatement() {
  return getRuleContext<SlovenCLanguageParser::WhileStatementContext>(0);
}

SlovenCLanguageParser::ReturnStatementContext* SlovenCLanguageParser::StatementContext::returnStatement() {
  return getRuleContext<SlovenCLanguageParser::ReturnStatementContext>(0);
}

SlovenCLanguageParser::BreakStatementContext* SlovenCLanguageParser::StatementContext::breakStatement() {
  return getRuleContext<SlovenCLanguageParser::BreakStatementContext>(0);
}

SlovenCLanguageParser::ContinueStatementContext* SlovenCLanguageParser::StatementContext::continueStatement() {
  return getRuleContext<SlovenCLanguageParser::ContinueStatementContext>(0);
}

SlovenCLanguageParser::EmptyStatementContext* SlovenCLanguageParser::StatementContext::emptyStatement() {
  return getRuleContext<SlovenCLanguageParser::EmptyStatementContext>(0);
}

SlovenCLanguageParser::ExpressionStatementContext* SlovenCLanguageParser::StatementContext::expressionStatement() {
  return getRuleContext<SlovenCLanguageParser::ExpressionStatementContext>(0);
}


size_t SlovenCLanguageParser::StatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleStatement;
}

void SlovenCLanguageParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void SlovenCLanguageParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::StatementContext* SlovenCLanguageParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 68, SlovenCLanguageParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(345);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SlovenCLanguageParser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(336);
        block_();
        break;
      }

      case SlovenCLanguageParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(337);
        ifThenStatement();
        break;
      }

      case SlovenCLanguageParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(338);
        basicForStatement();
        break;
      }

      case SlovenCLanguageParser::WHILE: {
        enterOuterAlt(_localctx, 4);
        setState(339);
        whileStatement();
        break;
      }

      case SlovenCLanguageParser::RETURN: {
        enterOuterAlt(_localctx, 5);
        setState(340);
        returnStatement();
        break;
      }

      case SlovenCLanguageParser::BREAK: {
        enterOuterAlt(_localctx, 6);
        setState(341);
        breakStatement();
        break;
      }

      case SlovenCLanguageParser::CONTINUE: {
        enterOuterAlt(_localctx, 7);
        setState(342);
        continueStatement();
        break;
      }

      case SlovenCLanguageParser::SEMI: {
        enterOuterAlt(_localctx, 8);
        setState(343);
        emptyStatement();
        break;
      }

      case SlovenCLanguageParser::NEW:
      case SlovenCLanguageParser::THIS:
      case SlovenCLanguageParser::IntegerLiteral:
      case SlovenCLanguageParser::FloatingPointLiteral:
      case SlovenCLanguageParser::TRUE:
      case SlovenCLanguageParser::FALSE:
      case SlovenCLanguageParser::StringLiteral:
      case SlovenCLanguageParser::NULLLITERAL:
      case SlovenCLanguageParser::LPAREN:
      case SlovenCLanguageParser::BANG:
      case SlovenCLanguageParser::Identifier: {
        enterOuterAlt(_localctx, 9);
        setState(344);
        expressionStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Block_Context ------------------------------------------------------------------

SlovenCLanguageParser::Block_Context::Block_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::BlockContext* SlovenCLanguageParser::Block_Context::block() {
  return getRuleContext<SlovenCLanguageParser::BlockContext>(0);
}


size_t SlovenCLanguageParser::Block_Context::getRuleIndex() const {
  return SlovenCLanguageParser::RuleBlock_;
}

void SlovenCLanguageParser::Block_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock_(this);
}

void SlovenCLanguageParser::Block_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock_(this);
}


antlrcpp::Any SlovenCLanguageParser::Block_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitBlock_(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::Block_Context* SlovenCLanguageParser::block_() {
  Block_Context *_localctx = _tracker.createInstance<Block_Context>(_ctx, getState());
  enterRule(_localctx, 70, SlovenCLanguageParser::RuleBlock_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfThenStatementContext ------------------------------------------------------------------

SlovenCLanguageParser::IfThenStatementContext::IfThenStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::IfThenStatementContext::IF() {
  return getToken(SlovenCLanguageParser::IF, 0);
}

tree::TerminalNode* SlovenCLanguageParser::IfThenStatementContext::LPAREN() {
  return getToken(SlovenCLanguageParser::LPAREN, 0);
}

SlovenCLanguageParser::ConditionContext* SlovenCLanguageParser::IfThenStatementContext::condition() {
  return getRuleContext<SlovenCLanguageParser::ConditionContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::IfThenStatementContext::RPAREN() {
  return getToken(SlovenCLanguageParser::RPAREN, 0);
}

SlovenCLanguageParser::StatementContext* SlovenCLanguageParser::IfThenStatementContext::statement() {
  return getRuleContext<SlovenCLanguageParser::StatementContext>(0);
}

SlovenCLanguageParser::ElseStatementContext* SlovenCLanguageParser::IfThenStatementContext::elseStatement() {
  return getRuleContext<SlovenCLanguageParser::ElseStatementContext>(0);
}


size_t SlovenCLanguageParser::IfThenStatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleIfThenStatement;
}

void SlovenCLanguageParser::IfThenStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfThenStatement(this);
}

void SlovenCLanguageParser::IfThenStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfThenStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::IfThenStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitIfThenStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::IfThenStatementContext* SlovenCLanguageParser::ifThenStatement() {
  IfThenStatementContext *_localctx = _tracker.createInstance<IfThenStatementContext>(_ctx, getState());
  enterRule(_localctx, 72, SlovenCLanguageParser::RuleIfThenStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    match(SlovenCLanguageParser::IF);
    setState(350);
    match(SlovenCLanguageParser::LPAREN);
    setState(351);
    condition();
    setState(352);
    match(SlovenCLanguageParser::RPAREN);
    setState(353);
    statement();
    setState(355);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(354);
      elseStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicForStatementContext ------------------------------------------------------------------

SlovenCLanguageParser::BasicForStatementContext::BasicForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::BasicForStatementContext::FOR() {
  return getToken(SlovenCLanguageParser::FOR, 0);
}

tree::TerminalNode* SlovenCLanguageParser::BasicForStatementContext::LPAREN() {
  return getToken(SlovenCLanguageParser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> SlovenCLanguageParser::BasicForStatementContext::SEMI() {
  return getTokens(SlovenCLanguageParser::SEMI);
}

tree::TerminalNode* SlovenCLanguageParser::BasicForStatementContext::SEMI(size_t i) {
  return getToken(SlovenCLanguageParser::SEMI, i);
}

tree::TerminalNode* SlovenCLanguageParser::BasicForStatementContext::RPAREN() {
  return getToken(SlovenCLanguageParser::RPAREN, 0);
}

SlovenCLanguageParser::StatementContext* SlovenCLanguageParser::BasicForStatementContext::statement() {
  return getRuleContext<SlovenCLanguageParser::StatementContext>(0);
}

std::vector<SlovenCLanguageParser::LocalVariableDeclarationContext *> SlovenCLanguageParser::BasicForStatementContext::localVariableDeclaration() {
  return getRuleContexts<SlovenCLanguageParser::LocalVariableDeclarationContext>();
}

SlovenCLanguageParser::LocalVariableDeclarationContext* SlovenCLanguageParser::BasicForStatementContext::localVariableDeclaration(size_t i) {
  return getRuleContext<SlovenCLanguageParser::LocalVariableDeclarationContext>(i);
}

SlovenCLanguageParser::ConditionContext* SlovenCLanguageParser::BasicForStatementContext::condition() {
  return getRuleContext<SlovenCLanguageParser::ConditionContext>(0);
}

SlovenCLanguageParser::ForUpdateContext* SlovenCLanguageParser::BasicForStatementContext::forUpdate() {
  return getRuleContext<SlovenCLanguageParser::ForUpdateContext>(0);
}


size_t SlovenCLanguageParser::BasicForStatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleBasicForStatement;
}

void SlovenCLanguageParser::BasicForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicForStatement(this);
}

void SlovenCLanguageParser::BasicForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicForStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::BasicForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitBasicForStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::BasicForStatementContext* SlovenCLanguageParser::basicForStatement() {
  BasicForStatementContext *_localctx = _tracker.createInstance<BasicForStatementContext>(_ctx, getState());
  enterRule(_localctx, 74, SlovenCLanguageParser::RuleBasicForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    match(SlovenCLanguageParser::FOR);
    setState(358);
    match(SlovenCLanguageParser::LPAREN);
    setState(362);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::BOOLEAN)
      | (1ULL << SlovenCLanguageParser::DOUBLE)
      | (1ULL << SlovenCLanguageParser::INT))) != 0) || _la == SlovenCLanguageParser::Identifier) {
      setState(359);
      localVariableDeclaration();
      setState(364);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(365);
    match(SlovenCLanguageParser::SEMI);
    setState(367);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::NEW)
      | (1ULL << SlovenCLanguageParser::THIS)
      | (1ULL << SlovenCLanguageParser::IntegerLiteral)
      | (1ULL << SlovenCLanguageParser::FloatingPointLiteral)
      | (1ULL << SlovenCLanguageParser::TRUE)
      | (1ULL << SlovenCLanguageParser::FALSE)
      | (1ULL << SlovenCLanguageParser::StringLiteral)
      | (1ULL << SlovenCLanguageParser::NULLLITERAL)
      | (1ULL << SlovenCLanguageParser::LPAREN)
      | (1ULL << SlovenCLanguageParser::BANG))) != 0) || _la == SlovenCLanguageParser::Identifier) {
      setState(366);
      condition();
    }
    setState(369);
    match(SlovenCLanguageParser::SEMI);
    setState(371);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::NEW)
      | (1ULL << SlovenCLanguageParser::THIS)
      | (1ULL << SlovenCLanguageParser::IntegerLiteral)
      | (1ULL << SlovenCLanguageParser::FloatingPointLiteral)
      | (1ULL << SlovenCLanguageParser::TRUE)
      | (1ULL << SlovenCLanguageParser::FALSE)
      | (1ULL << SlovenCLanguageParser::StringLiteral)
      | (1ULL << SlovenCLanguageParser::NULLLITERAL)
      | (1ULL << SlovenCLanguageParser::LPAREN)
      | (1ULL << SlovenCLanguageParser::BANG))) != 0) || _la == SlovenCLanguageParser::Identifier) {
      setState(370);
      forUpdate();
    }
    setState(373);
    match(SlovenCLanguageParser::RPAREN);
    setState(374);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

SlovenCLanguageParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::WhileStatementContext::WHILE() {
  return getToken(SlovenCLanguageParser::WHILE, 0);
}

tree::TerminalNode* SlovenCLanguageParser::WhileStatementContext::LPAREN() {
  return getToken(SlovenCLanguageParser::LPAREN, 0);
}

SlovenCLanguageParser::ConditionContext* SlovenCLanguageParser::WhileStatementContext::condition() {
  return getRuleContext<SlovenCLanguageParser::ConditionContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::WhileStatementContext::RPAREN() {
  return getToken(SlovenCLanguageParser::RPAREN, 0);
}

SlovenCLanguageParser::StatementContext* SlovenCLanguageParser::WhileStatementContext::statement() {
  return getRuleContext<SlovenCLanguageParser::StatementContext>(0);
}


size_t SlovenCLanguageParser::WhileStatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleWhileStatement;
}

void SlovenCLanguageParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void SlovenCLanguageParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::WhileStatementContext* SlovenCLanguageParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 76, SlovenCLanguageParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    match(SlovenCLanguageParser::WHILE);
    setState(377);
    match(SlovenCLanguageParser::LPAREN);
    setState(378);
    condition();
    setState(379);
    match(SlovenCLanguageParser::RPAREN);
    setState(380);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

SlovenCLanguageParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::ReturnStatementContext::RETURN() {
  return getToken(SlovenCLanguageParser::RETURN, 0);
}

tree::TerminalNode* SlovenCLanguageParser::ReturnStatementContext::SEMI() {
  return getToken(SlovenCLanguageParser::SEMI, 0);
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::ReturnStatementContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}


size_t SlovenCLanguageParser::ReturnStatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleReturnStatement;
}

void SlovenCLanguageParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void SlovenCLanguageParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ReturnStatementContext* SlovenCLanguageParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 78, SlovenCLanguageParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    match(SlovenCLanguageParser::RETURN);
    setState(384);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::NEW)
      | (1ULL << SlovenCLanguageParser::THIS)
      | (1ULL << SlovenCLanguageParser::IntegerLiteral)
      | (1ULL << SlovenCLanguageParser::FloatingPointLiteral)
      | (1ULL << SlovenCLanguageParser::TRUE)
      | (1ULL << SlovenCLanguageParser::FALSE)
      | (1ULL << SlovenCLanguageParser::StringLiteral)
      | (1ULL << SlovenCLanguageParser::NULLLITERAL)
      | (1ULL << SlovenCLanguageParser::LPAREN)
      | (1ULL << SlovenCLanguageParser::BANG))) != 0) || _la == SlovenCLanguageParser::Identifier) {
      setState(383);
      expression(0);
    }
    setState(386);
    match(SlovenCLanguageParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

SlovenCLanguageParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::BreakStatementContext::BREAK() {
  return getToken(SlovenCLanguageParser::BREAK, 0);
}

tree::TerminalNode* SlovenCLanguageParser::BreakStatementContext::SEMI() {
  return getToken(SlovenCLanguageParser::SEMI, 0);
}


size_t SlovenCLanguageParser::BreakStatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleBreakStatement;
}

void SlovenCLanguageParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void SlovenCLanguageParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::BreakStatementContext* SlovenCLanguageParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 80, SlovenCLanguageParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    match(SlovenCLanguageParser::BREAK);
    setState(389);
    match(SlovenCLanguageParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

SlovenCLanguageParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::ContinueStatementContext::CONTINUE() {
  return getToken(SlovenCLanguageParser::CONTINUE, 0);
}

tree::TerminalNode* SlovenCLanguageParser::ContinueStatementContext::SEMI() {
  return getToken(SlovenCLanguageParser::SEMI, 0);
}


size_t SlovenCLanguageParser::ContinueStatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleContinueStatement;
}

void SlovenCLanguageParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void SlovenCLanguageParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ContinueStatementContext* SlovenCLanguageParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 82, SlovenCLanguageParser::RuleContinueStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    match(SlovenCLanguageParser::CONTINUE);
    setState(392);
    match(SlovenCLanguageParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

SlovenCLanguageParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::EmptyStatementContext::SEMI() {
  return getToken(SlovenCLanguageParser::SEMI, 0);
}


size_t SlovenCLanguageParser::EmptyStatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleEmptyStatement;
}

void SlovenCLanguageParser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void SlovenCLanguageParser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::EmptyStatementContext* SlovenCLanguageParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 84, SlovenCLanguageParser::RuleEmptyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    match(SlovenCLanguageParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

SlovenCLanguageParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::ExpressionStatementContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::ExpressionStatementContext::SEMI() {
  return getToken(SlovenCLanguageParser::SEMI, 0);
}


size_t SlovenCLanguageParser::ExpressionStatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleExpressionStatement;
}

void SlovenCLanguageParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void SlovenCLanguageParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ExpressionStatementContext* SlovenCLanguageParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 86, SlovenCLanguageParser::RuleExpressionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    expression(0);
    setState(397);
    match(SlovenCLanguageParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

SlovenCLanguageParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::ConditionContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}


size_t SlovenCLanguageParser::ConditionContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleCondition;
}

void SlovenCLanguageParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void SlovenCLanguageParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any SlovenCLanguageParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ConditionContext* SlovenCLanguageParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 88, SlovenCLanguageParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

SlovenCLanguageParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::ElseStatementContext::ELSE() {
  return getToken(SlovenCLanguageParser::ELSE, 0);
}

SlovenCLanguageParser::StatementContext* SlovenCLanguageParser::ElseStatementContext::statement() {
  return getRuleContext<SlovenCLanguageParser::StatementContext>(0);
}


size_t SlovenCLanguageParser::ElseStatementContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleElseStatement;
}

void SlovenCLanguageParser::ElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStatement(this);
}

void SlovenCLanguageParser::ElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStatement(this);
}


antlrcpp::Any SlovenCLanguageParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ElseStatementContext* SlovenCLanguageParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 90, SlovenCLanguageParser::RuleElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    match(SlovenCLanguageParser::ELSE);
    setState(402);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForUpdateContext ------------------------------------------------------------------

SlovenCLanguageParser::ForUpdateContext::ForUpdateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlovenCLanguageParser::ExpressionListContext* SlovenCLanguageParser::ForUpdateContext::expressionList() {
  return getRuleContext<SlovenCLanguageParser::ExpressionListContext>(0);
}


size_t SlovenCLanguageParser::ForUpdateContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleForUpdate;
}

void SlovenCLanguageParser::ForUpdateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForUpdate(this);
}

void SlovenCLanguageParser::ForUpdateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForUpdate(this);
}


antlrcpp::Any SlovenCLanguageParser::ForUpdateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitForUpdate(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ForUpdateContext* SlovenCLanguageParser::forUpdate() {
  ForUpdateContext *_localctx = _tracker.createInstance<ForUpdateContext>(_ctx, getState());
  enterRule(_localctx, 92, SlovenCLanguageParser::RuleForUpdate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    expressionList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SlovenCLanguageParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlovenCLanguageParser::ExpressionContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleExpression;
}

void SlovenCLanguageParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PostIncrementDecrementExpressionContext ------------------------------------------------------------------

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::PostIncrementDecrementExpressionContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::PostIncrementDecrementExpressionContext::INC() {
  return getToken(SlovenCLanguageParser::INC, 0);
}

tree::TerminalNode* SlovenCLanguageParser::PostIncrementDecrementExpressionContext::DEC() {
  return getToken(SlovenCLanguageParser::DEC, 0);
}

SlovenCLanguageParser::PostIncrementDecrementExpressionContext::PostIncrementDecrementExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::PostIncrementDecrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostIncrementDecrementExpression(this);
}
void SlovenCLanguageParser::PostIncrementDecrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostIncrementDecrementExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::PostIncrementDecrementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitPostIncrementDecrementExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InvalidDottedExpressionContext ------------------------------------------------------------------

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::InvalidDottedExpressionContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::InvalidDottedExpressionContext::DOT() {
  return getToken(SlovenCLanguageParser::DOT, 0);
}

SlovenCLanguageParser::InvalidDottedExpressionContext::InvalidDottedExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::InvalidDottedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInvalidDottedExpression(this);
}
void SlovenCLanguageParser::InvalidDottedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInvalidDottedExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::InvalidDottedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitInvalidDottedExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AdditiveExpressionContext ------------------------------------------------------------------

std::vector<SlovenCLanguageParser::ExpressionContext *> SlovenCLanguageParser::AdditiveExpressionContext::expression() {
  return getRuleContexts<SlovenCLanguageParser::ExpressionContext>();
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::AdditiveExpressionContext::expression(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(i);
}

tree::TerminalNode* SlovenCLanguageParser::AdditiveExpressionContext::ADD() {
  return getToken(SlovenCLanguageParser::ADD, 0);
}

tree::TerminalNode* SlovenCLanguageParser::AdditiveExpressionContext::SUB() {
  return getToken(SlovenCLanguageParser::SUB, 0);
}

SlovenCLanguageParser::AdditiveExpressionContext::AdditiveExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}
void SlovenCLanguageParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalExpressionContext ------------------------------------------------------------------

std::vector<SlovenCLanguageParser::ExpressionContext *> SlovenCLanguageParser::RelationalExpressionContext::expression() {
  return getRuleContexts<SlovenCLanguageParser::ExpressionContext>();
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::RelationalExpressionContext::expression(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(i);
}

tree::TerminalNode* SlovenCLanguageParser::RelationalExpressionContext::LE() {
  return getToken(SlovenCLanguageParser::LE, 0);
}

tree::TerminalNode* SlovenCLanguageParser::RelationalExpressionContext::GE() {
  return getToken(SlovenCLanguageParser::GE, 0);
}

tree::TerminalNode* SlovenCLanguageParser::RelationalExpressionContext::GT() {
  return getToken(SlovenCLanguageParser::GT, 0);
}

tree::TerminalNode* SlovenCLanguageParser::RelationalExpressionContext::LT() {
  return getToken(SlovenCLanguageParser::LT, 0);
}

SlovenCLanguageParser::RelationalExpressionContext::RelationalExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}
void SlovenCLanguageParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ThisCallExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::ThisCallExpressionContext::THIS() {
  return getToken(SlovenCLanguageParser::THIS, 0);
}

tree::TerminalNode* SlovenCLanguageParser::ThisCallExpressionContext::LPAREN() {
  return getToken(SlovenCLanguageParser::LPAREN, 0);
}

tree::TerminalNode* SlovenCLanguageParser::ThisCallExpressionContext::RPAREN() {
  return getToken(SlovenCLanguageParser::RPAREN, 0);
}

SlovenCLanguageParser::ExpressionListContext* SlovenCLanguageParser::ThisCallExpressionContext::expressionList() {
  return getRuleContext<SlovenCLanguageParser::ExpressionListContext>(0);
}

SlovenCLanguageParser::ThisCallExpressionContext::ThisCallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::ThisCallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThisCallExpression(this);
}
void SlovenCLanguageParser::ThisCallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThisCallExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::ThisCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitThisCallExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryExpressionContext ------------------------------------------------------------------

SlovenCLanguageParser::PrimaryContext* SlovenCLanguageParser::PrimaryExpressionContext::primary() {
  return getRuleContext<SlovenCLanguageParser::PrimaryContext>(0);
}

SlovenCLanguageParser::PrimaryExpressionContext::PrimaryExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}
void SlovenCLanguageParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstructorCallExpressionContext ------------------------------------------------------------------

SlovenCLanguageParser::CreatorExpressionContext* SlovenCLanguageParser::ConstructorCallExpressionContext::creatorExpression() {
  return getRuleContext<SlovenCLanguageParser::CreatorExpressionContext>(0);
}

SlovenCLanguageParser::ConstructorCallExpressionContext::ConstructorCallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::ConstructorCallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorCallExpression(this);
}
void SlovenCLanguageParser::ConstructorCallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorCallExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::ConstructorCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitConstructorCallExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareExpressionContext ------------------------------------------------------------------

std::vector<SlovenCLanguageParser::ExpressionContext *> SlovenCLanguageParser::CompareExpressionContext::expression() {
  return getRuleContexts<SlovenCLanguageParser::ExpressionContext>();
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::CompareExpressionContext::expression(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(i);
}

tree::TerminalNode* SlovenCLanguageParser::CompareExpressionContext::EQUAL() {
  return getToken(SlovenCLanguageParser::EQUAL, 0);
}

tree::TerminalNode* SlovenCLanguageParser::CompareExpressionContext::NOTEQUAL() {
  return getToken(SlovenCLanguageParser::NOTEQUAL, 0);
}

SlovenCLanguageParser::CompareExpressionContext::CompareExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::CompareExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareExpression(this);
}
void SlovenCLanguageParser::CompareExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::CompareExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitCompareExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegateExpressionContext ------------------------------------------------------------------

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::NegateExpressionContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::NegateExpressionContext::BANG() {
  return getToken(SlovenCLanguageParser::BANG, 0);
}

SlovenCLanguageParser::NegateExpressionContext::NegateExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::NegateExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegateExpression(this);
}
void SlovenCLanguageParser::NegateExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegateExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::NegateExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitNegateExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DottedConstructorCallExpressionContext ------------------------------------------------------------------

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::DottedConstructorCallExpressionContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}

SlovenCLanguageParser::CreatorExpressionContext* SlovenCLanguageParser::DottedConstructorCallExpressionContext::creatorExpression() {
  return getRuleContext<SlovenCLanguageParser::CreatorExpressionContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::DottedConstructorCallExpressionContext::DOT() {
  return getToken(SlovenCLanguageParser::DOT, 0);
}

SlovenCLanguageParser::DottedConstructorCallExpressionContext::DottedConstructorCallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::DottedConstructorCallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDottedConstructorCallExpression(this);
}
void SlovenCLanguageParser::DottedConstructorCallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDottedConstructorCallExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::DottedConstructorCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitDottedConstructorCallExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentExpressionContext ------------------------------------------------------------------

std::vector<SlovenCLanguageParser::ExpressionContext *> SlovenCLanguageParser::AssignmentExpressionContext::expression() {
  return getRuleContexts<SlovenCLanguageParser::ExpressionContext>();
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::AssignmentExpressionContext::expression(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(i);
}

tree::TerminalNode* SlovenCLanguageParser::AssignmentExpressionContext::ASSIGN() {
  return getToken(SlovenCLanguageParser::ASSIGN, 0);
}

SlovenCLanguageParser::AssignmentExpressionContext::AssignmentExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}
void SlovenCLanguageParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConditionalAndExpressionContext ------------------------------------------------------------------

std::vector<SlovenCLanguageParser::ExpressionContext *> SlovenCLanguageParser::ConditionalAndExpressionContext::expression() {
  return getRuleContexts<SlovenCLanguageParser::ExpressionContext>();
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::ConditionalAndExpressionContext::expression(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(i);
}

tree::TerminalNode* SlovenCLanguageParser::ConditionalAndExpressionContext::AND() {
  return getToken(SlovenCLanguageParser::AND, 0);
}

SlovenCLanguageParser::ConditionalAndExpressionContext::ConditionalAndExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::ConditionalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalAndExpression(this);
}
void SlovenCLanguageParser::ConditionalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalAndExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::ConditionalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitConditionalAndExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DottedExpressionContext ------------------------------------------------------------------

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::DottedExpressionContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::DottedExpressionContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

tree::TerminalNode* SlovenCLanguageParser::DottedExpressionContext::DOT() {
  return getToken(SlovenCLanguageParser::DOT, 0);
}

SlovenCLanguageParser::DottedExpressionContext::DottedExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::DottedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDottedExpression(this);
}
void SlovenCLanguageParser::DottedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDottedExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::DottedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitDottedExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::CallExpressionContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

tree::TerminalNode* SlovenCLanguageParser::CallExpressionContext::LPAREN() {
  return getToken(SlovenCLanguageParser::LPAREN, 0);
}

tree::TerminalNode* SlovenCLanguageParser::CallExpressionContext::RPAREN() {
  return getToken(SlovenCLanguageParser::RPAREN, 0);
}

SlovenCLanguageParser::ExpressionListContext* SlovenCLanguageParser::CallExpressionContext::expressionList() {
  return getRuleContext<SlovenCLanguageParser::ExpressionListContext>(0);
}

SlovenCLanguageParser::CallExpressionContext::CallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::CallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallExpression(this);
}
void SlovenCLanguageParser::CallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::CallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitCallExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

std::vector<SlovenCLanguageParser::ExpressionContext *> SlovenCLanguageParser::MultiplicativeExpressionContext::expression() {
  return getRuleContexts<SlovenCLanguageParser::ExpressionContext>();
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::MultiplicativeExpressionContext::expression(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(i);
}

tree::TerminalNode* SlovenCLanguageParser::MultiplicativeExpressionContext::MUL() {
  return getToken(SlovenCLanguageParser::MUL, 0);
}

tree::TerminalNode* SlovenCLanguageParser::MultiplicativeExpressionContext::DIV() {
  return getToken(SlovenCLanguageParser::DIV, 0);
}

tree::TerminalNode* SlovenCLanguageParser::MultiplicativeExpressionContext::MOD() {
  return getToken(SlovenCLanguageParser::MOD, 0);
}

SlovenCLanguageParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}
void SlovenCLanguageParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DottedCallExpressionContext ------------------------------------------------------------------

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::DottedCallExpressionContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::DottedCallExpressionContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

tree::TerminalNode* SlovenCLanguageParser::DottedCallExpressionContext::LPAREN() {
  return getToken(SlovenCLanguageParser::LPAREN, 0);
}

tree::TerminalNode* SlovenCLanguageParser::DottedCallExpressionContext::RPAREN() {
  return getToken(SlovenCLanguageParser::RPAREN, 0);
}

tree::TerminalNode* SlovenCLanguageParser::DottedCallExpressionContext::DOT() {
  return getToken(SlovenCLanguageParser::DOT, 0);
}

SlovenCLanguageParser::ExpressionListContext* SlovenCLanguageParser::DottedCallExpressionContext::expressionList() {
  return getRuleContext<SlovenCLanguageParser::ExpressionListContext>(0);
}

SlovenCLanguageParser::DottedCallExpressionContext::DottedCallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::DottedCallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDottedCallExpression(this);
}
void SlovenCLanguageParser::DottedCallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDottedCallExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::DottedCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitDottedCallExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConditionalOrExpressionContext ------------------------------------------------------------------

std::vector<SlovenCLanguageParser::ExpressionContext *> SlovenCLanguageParser::ConditionalOrExpressionContext::expression() {
  return getRuleContexts<SlovenCLanguageParser::ExpressionContext>();
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::ConditionalOrExpressionContext::expression(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(i);
}

tree::TerminalNode* SlovenCLanguageParser::ConditionalOrExpressionContext::OR() {
  return getToken(SlovenCLanguageParser::OR, 0);
}

SlovenCLanguageParser::ConditionalOrExpressionContext::ConditionalOrExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::ConditionalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalOrExpression(this);
}
void SlovenCLanguageParser::ConditionalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalOrExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::ConditionalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitConditionalOrExpression(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::expression() {
   return expression(0);
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SlovenCLanguageParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SlovenCLanguageParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 94;
  enterRecursionRule(_localctx, 94, SlovenCLanguageParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(423);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(407);
      match(SlovenCLanguageParser::Identifier);
      setState(408);
      match(SlovenCLanguageParser::LPAREN);
      setState(410);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::NEW)
        | (1ULL << SlovenCLanguageParser::THIS)
        | (1ULL << SlovenCLanguageParser::IntegerLiteral)
        | (1ULL << SlovenCLanguageParser::FloatingPointLiteral)
        | (1ULL << SlovenCLanguageParser::TRUE)
        | (1ULL << SlovenCLanguageParser::FALSE)
        | (1ULL << SlovenCLanguageParser::StringLiteral)
        | (1ULL << SlovenCLanguageParser::NULLLITERAL)
        | (1ULL << SlovenCLanguageParser::LPAREN)
        | (1ULL << SlovenCLanguageParser::BANG))) != 0) || _la == SlovenCLanguageParser::Identifier) {
        setState(409);
        expressionList();
      }
      setState(412);
      match(SlovenCLanguageParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ThisCallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(413);
      match(SlovenCLanguageParser::THIS);
      setState(414);
      match(SlovenCLanguageParser::LPAREN);
      setState(416);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::NEW)
        | (1ULL << SlovenCLanguageParser::THIS)
        | (1ULL << SlovenCLanguageParser::IntegerLiteral)
        | (1ULL << SlovenCLanguageParser::FloatingPointLiteral)
        | (1ULL << SlovenCLanguageParser::TRUE)
        | (1ULL << SlovenCLanguageParser::FALSE)
        | (1ULL << SlovenCLanguageParser::StringLiteral)
        | (1ULL << SlovenCLanguageParser::NULLLITERAL)
        | (1ULL << SlovenCLanguageParser::LPAREN)
        | (1ULL << SlovenCLanguageParser::BANG))) != 0) || _la == SlovenCLanguageParser::Identifier) {
        setState(415);
        expressionList();
      }
      setState(418);
      match(SlovenCLanguageParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ConstructorCallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(419);
      creatorExpression();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NegateExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(420);
      dynamic_cast<NegateExpressionContext *>(_localctx)->prefix = match(SlovenCLanguageParser::BANG);
      setState(421);
      expression(10);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PrimaryExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(422);
      primary();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(467);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(465);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplicativeExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(425);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(426);
          dynamic_cast<MultiplicativeExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 60) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 60)) & ((1ULL << (SlovenCLanguageParser::MUL - 60))
            | (1ULL << (SlovenCLanguageParser::DIV - 60))
            | (1ULL << (SlovenCLanguageParser::MOD - 60)))) != 0))) {
            dynamic_cast<MultiplicativeExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(427);
          expression(10);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AdditiveExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(428);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(429);
          dynamic_cast<AdditiveExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SlovenCLanguageParser::ADD

          || _la == SlovenCLanguageParser::SUB)) {
            dynamic_cast<AdditiveExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(430);
          expression(9);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelationalExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(431);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(432);
          dynamic_cast<RelationalExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::GT)
            | (1ULL << SlovenCLanguageParser::LT)
            | (1ULL << SlovenCLanguageParser::LE)
            | (1ULL << SlovenCLanguageParser::GE))) != 0))) {
            dynamic_cast<RelationalExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(433);
          expression(8);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<CompareExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(434);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(435);
          dynamic_cast<CompareExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SlovenCLanguageParser::EQUAL

          || _la == SlovenCLanguageParser::NOTEQUAL)) {
            dynamic_cast<CompareExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(436);
          expression(7);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ConditionalAndExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(437);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(438);
          dynamic_cast<ConditionalAndExpressionContext *>(_localctx)->bop = match(SlovenCLanguageParser::AND);
          setState(439);
          expression(6);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ConditionalOrExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(440);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(441);
          dynamic_cast<ConditionalOrExpressionContext *>(_localctx)->bop = match(SlovenCLanguageParser::OR);
          setState(442);
          expression(5);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<AssignmentExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(443);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(444);
          match(SlovenCLanguageParser::ASSIGN);
          setState(445);
          expression(3);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<DottedCallExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(446);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(447);
          dynamic_cast<DottedCallExpressionContext *>(_localctx)->bop = match(SlovenCLanguageParser::DOT);
          setState(448);
          match(SlovenCLanguageParser::Identifier);
          setState(449);
          match(SlovenCLanguageParser::LPAREN);
          setState(451);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::NEW)
            | (1ULL << SlovenCLanguageParser::THIS)
            | (1ULL << SlovenCLanguageParser::IntegerLiteral)
            | (1ULL << SlovenCLanguageParser::FloatingPointLiteral)
            | (1ULL << SlovenCLanguageParser::TRUE)
            | (1ULL << SlovenCLanguageParser::FALSE)
            | (1ULL << SlovenCLanguageParser::StringLiteral)
            | (1ULL << SlovenCLanguageParser::NULLLITERAL)
            | (1ULL << SlovenCLanguageParser::LPAREN)
            | (1ULL << SlovenCLanguageParser::BANG))) != 0) || _la == SlovenCLanguageParser::Identifier) {
            setState(450);
            expressionList();
          }
          setState(453);
          match(SlovenCLanguageParser::RPAREN);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<DottedExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(454);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(455);
          dynamic_cast<DottedExpressionContext *>(_localctx)->bop = match(SlovenCLanguageParser::DOT);
          setState(456);
          match(SlovenCLanguageParser::Identifier);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<DottedConstructorCallExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(457);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(458);
          dynamic_cast<DottedConstructorCallExpressionContext *>(_localctx)->bop = match(SlovenCLanguageParser::DOT);
          setState(459);
          creatorExpression();
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<PostIncrementDecrementExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(460);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(461);
          dynamic_cast<PostIncrementDecrementExpressionContext *>(_localctx)->postfix = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SlovenCLanguageParser::INC

          || _la == SlovenCLanguageParser::DEC)) {
            dynamic_cast<PostIncrementDecrementExpressionContext *>(_localctx)->postfix = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<InvalidDottedExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(462);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(463);
          dynamic_cast<InvalidDottedExpressionContext *>(_localctx)->bop = match(SlovenCLanguageParser::DOT);
          notifyErrorListeners("Invalid dotted expression.");
          break;
        }

        } 
      }
      setState(469);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CreatorExpressionContext ------------------------------------------------------------------

SlovenCLanguageParser::CreatorExpressionContext::CreatorExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlovenCLanguageParser::CreatorExpressionContext::NEW() {
  return getToken(SlovenCLanguageParser::NEW, 0);
}

tree::TerminalNode* SlovenCLanguageParser::CreatorExpressionContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

tree::TerminalNode* SlovenCLanguageParser::CreatorExpressionContext::LPAREN() {
  return getToken(SlovenCLanguageParser::LPAREN, 0);
}

tree::TerminalNode* SlovenCLanguageParser::CreatorExpressionContext::RPAREN() {
  return getToken(SlovenCLanguageParser::RPAREN, 0);
}

SlovenCLanguageParser::ExpressionListContext* SlovenCLanguageParser::CreatorExpressionContext::expressionList() {
  return getRuleContext<SlovenCLanguageParser::ExpressionListContext>(0);
}


size_t SlovenCLanguageParser::CreatorExpressionContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleCreatorExpression;
}

void SlovenCLanguageParser::CreatorExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreatorExpression(this);
}

void SlovenCLanguageParser::CreatorExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreatorExpression(this);
}


antlrcpp::Any SlovenCLanguageParser::CreatorExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitCreatorExpression(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::CreatorExpressionContext* SlovenCLanguageParser::creatorExpression() {
  CreatorExpressionContext *_localctx = _tracker.createInstance<CreatorExpressionContext>(_ctx, getState());
  enterRule(_localctx, 96, SlovenCLanguageParser::RuleCreatorExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    match(SlovenCLanguageParser::NEW);
    setState(471);
    match(SlovenCLanguageParser::Identifier);
    setState(477);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(472);
      dynamic_cast<CreatorExpressionContext *>(_localctx)->lparenToken = match(SlovenCLanguageParser::LPAREN);
      setState(474);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SlovenCLanguageParser::NEW)
        | (1ULL << SlovenCLanguageParser::THIS)
        | (1ULL << SlovenCLanguageParser::IntegerLiteral)
        | (1ULL << SlovenCLanguageParser::FloatingPointLiteral)
        | (1ULL << SlovenCLanguageParser::TRUE)
        | (1ULL << SlovenCLanguageParser::FALSE)
        | (1ULL << SlovenCLanguageParser::StringLiteral)
        | (1ULL << SlovenCLanguageParser::NULLLITERAL)
        | (1ULL << SlovenCLanguageParser::LPAREN)
        | (1ULL << SlovenCLanguageParser::BANG))) != 0) || _la == SlovenCLanguageParser::Identifier) {
        setState(473);
        expressionList();
      }
      setState(476);
      match(SlovenCLanguageParser::RPAREN);
      break;
    }

    }
     if (dynamic_cast<CreatorExpressionContext *>(_localctx)->lparenToken == NULL) notifyErrorListeners("Missing '('"); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

SlovenCLanguageParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlovenCLanguageParser::PrimaryContext::getRuleIndex() const {
  return SlovenCLanguageParser::RulePrimary;
}

void SlovenCLanguageParser::PrimaryContext::copyFrom(PrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParenthesizedExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::ParenthesizedExpressionContext::LPAREN() {
  return getToken(SlovenCLanguageParser::LPAREN, 0);
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::ParenthesizedExpressionContext::expression() {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(0);
}

tree::TerminalNode* SlovenCLanguageParser::ParenthesizedExpressionContext::RPAREN() {
  return getToken(SlovenCLanguageParser::RPAREN, 0);
}

SlovenCLanguageParser::ParenthesizedExpressionContext::ParenthesizedExpressionContext(PrimaryContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::ParenthesizedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedExpression(this);
}
void SlovenCLanguageParser::ParenthesizedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedExpression(this);
}

antlrcpp::Any SlovenCLanguageParser::ParenthesizedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitParenthesizedExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryIdentifierContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::PrimaryIdentifierContext::Identifier() {
  return getToken(SlovenCLanguageParser::Identifier, 0);
}

SlovenCLanguageParser::PrimaryIdentifierContext::PrimaryIdentifierContext(PrimaryContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::PrimaryIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryIdentifier(this);
}
void SlovenCLanguageParser::PrimaryIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryIdentifier(this);
}

antlrcpp::Any SlovenCLanguageParser::PrimaryIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryLiteralContext ------------------------------------------------------------------

SlovenCLanguageParser::LiteralContext* SlovenCLanguageParser::PrimaryLiteralContext::literal() {
  return getRuleContext<SlovenCLanguageParser::LiteralContext>(0);
}

SlovenCLanguageParser::PrimaryLiteralContext::PrimaryLiteralContext(PrimaryContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::PrimaryLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryLiteral(this);
}
void SlovenCLanguageParser::PrimaryLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryLiteral(this);
}

antlrcpp::Any SlovenCLanguageParser::PrimaryLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ThisContext ------------------------------------------------------------------

tree::TerminalNode* SlovenCLanguageParser::ThisContext::THIS() {
  return getToken(SlovenCLanguageParser::THIS, 0);
}

SlovenCLanguageParser::ThisContext::ThisContext(PrimaryContext *ctx) { copyFrom(ctx); }

void SlovenCLanguageParser::ThisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThis(this);
}
void SlovenCLanguageParser::ThisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThis(this);
}

antlrcpp::Any SlovenCLanguageParser::ThisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitThis(this);
  else
    return visitor->visitChildren(this);
}
SlovenCLanguageParser::PrimaryContext* SlovenCLanguageParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 98, SlovenCLanguageParser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(488);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SlovenCLanguageParser::LPAREN: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<SlovenCLanguageParser::ParenthesizedExpressionContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(481);
        match(SlovenCLanguageParser::LPAREN);
        setState(482);
        expression(0);
        setState(483);
        match(SlovenCLanguageParser::RPAREN);
        break;
      }

      case SlovenCLanguageParser::THIS: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<SlovenCLanguageParser::ThisContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(485);
        match(SlovenCLanguageParser::THIS);
        break;
      }

      case SlovenCLanguageParser::IntegerLiteral:
      case SlovenCLanguageParser::FloatingPointLiteral:
      case SlovenCLanguageParser::TRUE:
      case SlovenCLanguageParser::FALSE:
      case SlovenCLanguageParser::StringLiteral:
      case SlovenCLanguageParser::NULLLITERAL: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<SlovenCLanguageParser::PrimaryLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(486);
        literal();
        break;
      }

      case SlovenCLanguageParser::Identifier: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<SlovenCLanguageParser::PrimaryIdentifierContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(487);
        match(SlovenCLanguageParser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

SlovenCLanguageParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SlovenCLanguageParser::ExpressionContext *> SlovenCLanguageParser::ExpressionListContext::expression() {
  return getRuleContexts<SlovenCLanguageParser::ExpressionContext>();
}

SlovenCLanguageParser::ExpressionContext* SlovenCLanguageParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<SlovenCLanguageParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> SlovenCLanguageParser::ExpressionListContext::COMMA() {
  return getTokens(SlovenCLanguageParser::COMMA);
}

tree::TerminalNode* SlovenCLanguageParser::ExpressionListContext::COMMA(size_t i) {
  return getToken(SlovenCLanguageParser::COMMA, i);
}


size_t SlovenCLanguageParser::ExpressionListContext::getRuleIndex() const {
  return SlovenCLanguageParser::RuleExpressionList;
}

void SlovenCLanguageParser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void SlovenCLanguageParser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SlovenCLanguageParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any SlovenCLanguageParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlovenCLanguageParserVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

SlovenCLanguageParser::ExpressionListContext* SlovenCLanguageParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 100, SlovenCLanguageParser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(490);
    expression(0);
    setState(495);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SlovenCLanguageParser::COMMA) {
      setState(491);
      match(SlovenCLanguageParser::COMMA);
      setState(492);
      expression(0);
      setState(497);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SlovenCLanguageParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return classTypeSempred(dynamic_cast<ClassTypeContext *>(context), predicateIndex);
    case 5: return fileNameSempred(dynamic_cast<FileNameContext *>(context), predicateIndex);
    case 47: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SlovenCLanguageParser::classTypeSempred(ClassTypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SlovenCLanguageParser::fileNameSempred(FileNameContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SlovenCLanguageParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 5);
    case 7: return precpred(_ctx, 4);
    case 8: return precpred(_ctx, 3);
    case 9: return precpred(_ctx, 17);
    case 10: return precpred(_ctx, 16);
    case 11: return precpred(_ctx, 12);
    case 12: return precpred(_ctx, 11);
    case 13: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SlovenCLanguageParser::_decisionToDFA;
atn::PredictionContextCache SlovenCLanguageParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SlovenCLanguageParser::_atn;
std::vector<uint16_t> SlovenCLanguageParser::_serializedATN;

std::vector<std::string> SlovenCLanguageParser::_ruleNames = {
  "parseWhole", "literal", "type", "classType", "modifier", "fileName", 
  "compilationUnit", "importDeclarations", "importDeclaration", "typeDeclarations", 
  "typeDeclaration", "classDeclaration", "inheritance", "superclass", "classTypeList", 
  "classBody", "classBodyDeclaration", "fieldDeclaration", "fieldDeclarator", 
  "variableDeclarator", "methodDeclaration", "methodHeader", "result", "methodDeclarator", 
  "formalParameterList", "formalParameter", "methodBody", "constructorDeclaration", 
  "constructorDeclarator", "constructorBody", "block", "blockStatement", 
  "localVariableDeclarationStatement", "localVariableDeclaration", "statement", 
  "block_", "ifThenStatement", "basicForStatement", "whileStatement", "returnStatement", 
  "breakStatement", "continueStatement", "emptyStatement", "expressionStatement", 
  "condition", "elseStatement", "forUpdate", "expression", "creatorExpression", 
  "primary", "expressionList"
};

std::vector<std::string> SlovenCLanguageParser::_literalNames = {
  "", "'bit'", "'zlog'", "'decimalno'", "'celo'", "'praznost'", "'prelom'", 
  "'naslednji'", "'razred'", "'vpelje'", "'ko'", "'sicer'", "'za'", "'dokler'", 
  "'poskusi'", "'ujemi'", "'konec'", "'javi'", "'uporabi'", "'paket'", "'nov'", 
  "'to'", "", "", "", "'vrni'", "'Konstruktor'", "", "", "'prav'", "'narobe'", 
  "", "", "'noben'", "'('", "')'", "'{'", "'}'", "'['", "']'", "';'", "','", 
  "'.'", "'='", "'>'", "'<'", "'!'", "'~'", "'?'", "':'", "'=='", "'<='", 
  "'>='", "'!='", "'&&'", "'||'", "'++'", "'--'", "'+'", "'-'", "'*'", "'/'", 
  "'&'", "'|'", "'^'", "'%'", "'->'", "'::'", "'+='", "'-='", "'*='", "'/='", 
  "'&='", "'|='", "'^='", "'%='", "'<<='", "'>>='", "'>>>='", "'@'", "'...'"
};

std::vector<std::string> SlovenCLanguageParser::_symbolicNames = {
  "", "BOOLEAN", "BYTE", "DOUBLE", "INT", "VOID", "BREAK", "CONTINUE", "CLASS", 
  "EXTENDS", "IF", "ELSE", "FOR", "WHILE", "TRY", "CATCH", "FINALLY", "THROW", 
  "IMPORT", "PACKAGE", "NEW", "THIS", "PRIVATE", "PUBLIC", "STATIC", "RETURN", 
  "CONSTRUCTOR", "IntegerLiteral", "FloatingPointLiteral", "TRUE", "FALSE", 
  "CharacterLiteral", "StringLiteral", "NULLLITERAL", "LPAREN", "RPAREN", 
  "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMI", "COMMA", "DOT", "ASSIGN", 
  "GT", "LT", "BANG", "TILDE", "QUESTION", "COLON", "EQUAL", "LE", "GE", 
  "NOTEQUAL", "AND", "OR", "INC", "DEC", "ADD", "SUB", "MUL", "DIV", "BITAND", 
  "BITOR", "CARET", "MOD", "ARROW", "COLONCOLON", "ADD_ASSIGN", "SUB_ASSIGN", 
  "MUL_ASSIGN", "DIV_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "MOD_ASSIGN", 
  "LSHIFT_ASSIGN", "RSHIFT_ASSIGN", "URSHIFT_ASSIGN", "AT", "ELLIPSIS", 
  "WS", "COMMENT", "LINE_COMMENT", "Identifier", "ILLEGAL_TOKEN"
};

dfa::Vocabulary SlovenCLanguageParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SlovenCLanguageParser::_tokenNames;

SlovenCLanguageParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x57, 0x1f5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x72, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x76, 0xa, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 
    0x7e, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x81, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
    0x8b, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x8e, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x7, 0x9, 0x94, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x97, 
    0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x7, 0xb, 
    0x9e, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xa1, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x5, 0xc, 0xa5, 0xa, 0xc, 0x3, 0xd, 0x7, 0xd, 0xa8, 0xa, 0xd, 0xc, 0xd, 
    0xe, 0xd, 0xab, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x5, 0xd, 0xb2, 0xa, 0xd, 0x3, 0xe, 0x5, 0xe, 0xb5, 0xa, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 
    0xbd, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xc0, 0xb, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x7, 0x11, 0xc4, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xc7, 0xb, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0xd0, 0xa, 0x12, 0x3, 0x13, 0x7, 0x13, 0xd3, 0xa, 0x13, 
    0xc, 0x13, 0xe, 0x13, 0xd6, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x5, 0x13, 0xdb, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0xe2, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0xe7, 0xa, 0x15, 0x3, 0x16, 0x7, 0x16, 0xea, 0xa, 0x16, 0xc, 
    0x16, 0xe, 0x16, 0xed, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0xf7, 0xa, 
    0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xfc, 0xa, 0x19, 0x3, 
    0x19, 0x5, 0x19, 0xff, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x106, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 
    0x109, 0xb, 0x1a, 0x3, 0x1b, 0x7, 0x1b, 0x10c, 0xa, 0x1b, 0xc, 0x1b, 
    0xe, 0x1b, 0x10f, 0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x7, 0x1c, 0x116, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x119, 
    0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x11d, 0xa, 0x1c, 0x3, 0x1d, 
    0x7, 0x1d, 0x120, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x123, 0xb, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 
    0x1e, 0x12b, 0xa, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x12e, 0xa, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x134, 0xa, 0x1f, 
    0xc, 0x1f, 0xe, 0x1f, 0x137, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x7, 0x20, 0x13d, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x140, 
    0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x146, 
    0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x5, 0x22, 0x14e, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x15c, 0xa, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x5, 0x26, 0x166, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x7, 0x27, 0x16b, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x16e, 0xb, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x172, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x5, 0x27, 0x176, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 
    0x29, 0x5, 0x29, 0x183, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x5, 0x31, 0x19d, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x1a3, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x1aa, 0xa, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 
    0x1c6, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x7, 0x31, 0x1d4, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x1d7, 0xb, 
    0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x1dd, 
    0xa, 0x32, 0x3, 0x32, 0x5, 0x32, 0x1e0, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x5, 0x33, 0x1eb, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x7, 0x34, 0x1f0, 0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 0x1f3, 0xb, 0x34, 
    0x3, 0x34, 0x2, 0x5, 0x8, 0xc, 0x60, 0x35, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
    0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
    0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x2, 0x9, 
    0x4, 0x2, 0x3, 0x3, 0x5, 0x6, 0x3, 0x2, 0x18, 0x1a, 0x4, 0x2, 0x3e, 
    0x3f, 0x43, 0x43, 0x3, 0x2, 0x3c, 0x3d, 0x4, 0x2, 0x2e, 0x2f, 0x35, 
    0x36, 0x4, 0x2, 0x34, 0x34, 0x37, 0x37, 0x3, 0x2, 0x3a, 0x3b, 0x2, 0x20e, 
    0x2, 0x68, 0x3, 0x2, 0x2, 0x2, 0x4, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x77, 0x3, 0x2, 0x2, 0x2, 0xa, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x84, 0x3, 0x2, 0x2, 0x2, 0xe, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x95, 0x3, 0x2, 0x2, 0x2, 0x12, 0x98, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0x16, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa9, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb6, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x20, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x24, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xde, 0x3, 0x2, 0x2, 0x2, 0x28, 0xe3, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0x30, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x32, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x36, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x121, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x127, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x131, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x13a, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x145, 0x3, 0x2, 0x2, 0x2, 0x42, 0x14d, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x46, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x15d, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x167, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x50, 0x180, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x186, 0x3, 0x2, 0x2, 0x2, 0x54, 0x189, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x58, 0x18e, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x191, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x193, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x196, 0x3, 0x2, 0x2, 0x2, 0x60, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x1d8, 0x3, 0x2, 0x2, 0x2, 0x64, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1ec, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x5, 0xe, 0x8, 0x2, 0x69, 0x6a, 0x7, 
    0x2, 0x2, 0x3, 0x6a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x72, 0x7, 0x1d, 
    0x2, 0x2, 0x6c, 0x72, 0x7, 0x1e, 0x2, 0x2, 0x6d, 0x72, 0x7, 0x1f, 0x2, 
    0x2, 0x6e, 0x72, 0x7, 0x20, 0x2, 0x2, 0x6f, 0x72, 0x7, 0x22, 0x2, 0x2, 
    0x70, 0x72, 0x7, 0x23, 0x2, 0x2, 0x71, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x5, 0x3, 0x2, 0x2, 0x2, 0x73, 0x76, 0x9, 0x2, 
    0x2, 0x2, 0x74, 0x76, 0x5, 0x8, 0x5, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x78, 0x8, 0x5, 0x1, 0x2, 0x78, 0x79, 0x7, 0x56, 0x2, 0x2, 0x79, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0xc, 0x3, 0x2, 0x2, 0x7b, 0x7c, 
    0x7, 0x2c, 0x2, 0x2, 0x7c, 0x7e, 0x7, 0x56, 0x2, 0x2, 0x7d, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x9, 0x3, 0x2, 0x2, 
    0x83, 0xb, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x8, 0x7, 0x1, 0x2, 0x85, 
    0x86, 0x7, 0x56, 0x2, 0x2, 0x86, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 
    0xc, 0x3, 0x2, 0x2, 0x88, 0x89, 0x7, 0x2c, 0x2, 0x2, 0x89, 0x8b, 0x7, 
    0x56, 0x2, 0x2, 0x8a, 0x87, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8e, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x8d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8f, 0x90, 0x5, 0x10, 0x9, 0x2, 0x90, 0x91, 0x5, 0x14, 0xb, 0x2, 0x91, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x92, 0x94, 0x5, 0x12, 0xa, 0x2, 0x93, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x97, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x7, 0x14, 0x2, 
    0x2, 0x99, 0x9a, 0x5, 0xc, 0x7, 0x2, 0x9a, 0x9b, 0x7, 0x2a, 0x2, 0x2, 
    0x9b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9e, 0x5, 0x16, 0xc, 0x2, 0x9d, 
    0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa5, 0x5, 0x18, 
    0xd, 0x2, 0xa3, 0xa5, 0x7, 0x2a, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa8, 0x5, 0xa, 0x6, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0xab, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0xac, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xb1, 0x7, 0xa, 0x2, 0x2, 0xad, 0xae, 0x7, 0x56, 
    0x2, 0x2, 0xae, 0xaf, 0x5, 0x1a, 0xe, 0x2, 0xaf, 0xb0, 0x5, 0x20, 0x11, 
    0x2, 0xb0, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0xb5, 0x5, 0x1c, 0xf, 0x2, 0xb4, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0xb5, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 
    0xb, 0x2, 0x2, 0xb7, 0xb8, 0x5, 0x1e, 0x10, 0x2, 0xb8, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0xb9, 0xbe, 0x5, 0x8, 0x5, 0x2, 0xba, 0xbb, 0x7, 0x2b, 0x2, 
    0x2, 0xbb, 0xbd, 0x5, 0x8, 0x5, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 
    0xbd, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0xc5, 0x7, 0x26, 0x2, 0x2, 0xc2, 0xc4, 0x5, 
    0x22, 0x12, 0x2, 0xc3, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 
    0x2, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xc6, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0xc8, 0xc9, 0x7, 0x27, 0x2, 0x2, 0xc9, 0x21, 0x3, 0x2, 0x2, 0x2, 0xca, 
    0xd0, 0x5, 0x24, 0x13, 0x2, 0xcb, 0xd0, 0x5, 0x2a, 0x16, 0x2, 0xcc, 
    0xd0, 0x5, 0x38, 0x1d, 0x2, 0xcd, 0xd0, 0x5, 0x18, 0xd, 0x2, 0xce, 0xd0, 
    0x7, 0x2a, 0x2, 0x2, 0xcf, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0xcf, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xd3, 0x5, 0xa, 0x6, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x6, 0x4, 0x2, 0xd8, 0xda, 0x5, 
    0x26, 0x14, 0x2, 0xd9, 0xdb, 0x7, 0x2a, 0x2, 0x2, 0xda, 0xd9, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0xdd, 0x8, 0x13, 0x1, 0x2, 0xdd, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0xe1, 0x7, 0x56, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x2d, 0x2, 0x2, 0xe0, 
    0xe2, 0x5, 0x60, 0x31, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 
    0x3, 0x2, 0x2, 0x2, 0xe2, 0x27, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe6, 0x7, 
    0x56, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0x2d, 0x2, 0x2, 0xe5, 0xe7, 0x5, 0x60, 
    0x31, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0x29, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 0x5, 0xa, 0x6, 0x2, 
    0xe9, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xed, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x5, 
    0x2c, 0x17, 0x2, 0xef, 0xf0, 0x5, 0x36, 0x1c, 0x2, 0xf0, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0xf1, 0xf2, 0x5, 0x2e, 0x18, 0x2, 0xf2, 0xf3, 0x5, 0x30, 
    0x19, 0x2, 0xf3, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf7, 0x5, 0x6, 0x4, 
    0x2, 0xf5, 0xf7, 0x7, 0x7, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 
    0xf6, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf7, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xf8, 
    0xfe, 0x7, 0x56, 0x2, 0x2, 0xf9, 0xfb, 0x7, 0x24, 0x2, 0x2, 0xfa, 0xfc, 
    0x5, 0x32, 0x1a, 0x2, 0xfb, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x3, 
    0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xff, 0x7, 0x25, 
    0x2, 0x2, 0xfe, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 
    0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x8, 0x19, 0x1, 
    0x2, 0x101, 0x31, 0x3, 0x2, 0x2, 0x2, 0x102, 0x107, 0x5, 0x34, 0x1b, 
    0x2, 0x103, 0x104, 0x7, 0x2b, 0x2, 0x2, 0x104, 0x106, 0x5, 0x34, 0x1b, 
    0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 0x106, 0x109, 0x3, 0x2, 0x2, 
    0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 
    0x2, 0x108, 0x33, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x10c, 0x5, 0xa, 0x6, 0x2, 0x10b, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 
    0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 0x3, 0x2, 0x2, 0x2, 
    0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x5, 0x6, 0x4, 0x2, 
    0x111, 0x112, 0x7, 0x56, 0x2, 0x2, 0x112, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x113, 0x117, 0x7, 0x26, 0x2, 0x2, 0x114, 0x116, 0x5, 0x40, 0x21, 0x2, 
    0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 
    0x118, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 
    0x11a, 0x11d, 0x7, 0x27, 0x2, 0x2, 0x11b, 0x11d, 0x7, 0x2a, 0x2, 0x2, 
    0x11c, 0x113, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11b, 0x3, 0x2, 0x2, 0x2, 
    0x11d, 0x37, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x120, 0x5, 0xa, 0x6, 0x2, 0x11f, 
    0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 0x3, 0x2, 0x2, 0x2, 0x121, 
    0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 0x2, 0x2, 0x122, 
    0x124, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x125, 0x5, 0x3a, 0x1e, 0x2, 0x125, 0x126, 0x5, 0x3c, 0x1f, 0x2, 0x126, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x127, 0x12d, 0x7, 0x1c, 0x2, 0x2, 0x128, 
    0x12a, 0x7, 0x24, 0x2, 0x2, 0x129, 0x12b, 0x5, 0x32, 0x1a, 0x2, 0x12a, 
    0x129, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 
    0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12e, 0x7, 0x25, 0x2, 0x2, 0x12d, 
    0x128, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x8, 0x1e, 0x1, 0x2, 0x130, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x131, 0x135, 0x7, 0x26, 0x2, 0x2, 0x132, 
    0x134, 0x5, 0x40, 0x21, 0x2, 0x133, 0x132, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x137, 0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 
    0x136, 0x3, 0x2, 0x2, 0x2, 0x136, 0x138, 0x3, 0x2, 0x2, 0x2, 0x137, 
    0x135, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x7, 0x27, 0x2, 0x2, 0x139, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13e, 0x7, 0x26, 0x2, 0x2, 0x13b, 
    0x13d, 0x5, 0x40, 0x21, 0x2, 0x13c, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 
    0x140, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x13f, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x141, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x13e, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x7, 0x27, 0x2, 0x2, 0x142, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x143, 0x146, 0x5, 0x42, 0x22, 0x2, 0x144, 
    0x146, 0x5, 0x46, 0x24, 0x2, 0x145, 0x143, 0x3, 0x2, 0x2, 0x2, 0x145, 
    0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x41, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 
    0x5, 0x44, 0x23, 0x2, 0x148, 0x149, 0x7, 0x2a, 0x2, 0x2, 0x149, 0x14e, 
    0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x5, 0x44, 0x23, 0x2, 0x14b, 0x14c, 
    0x8, 0x22, 0x1, 0x2, 0x14c, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x147, 
    0x3, 0x2, 0x2, 0x2, 0x14d, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x14f, 0x150, 0x5, 0x6, 0x4, 0x2, 0x150, 0x151, 0x5, 
    0x28, 0x15, 0x2, 0x151, 0x45, 0x3, 0x2, 0x2, 0x2, 0x152, 0x15c, 0x5, 
    0x48, 0x25, 0x2, 0x153, 0x15c, 0x5, 0x4a, 0x26, 0x2, 0x154, 0x15c, 0x5, 
    0x4c, 0x27, 0x2, 0x155, 0x15c, 0x5, 0x4e, 0x28, 0x2, 0x156, 0x15c, 0x5, 
    0x50, 0x29, 0x2, 0x157, 0x15c, 0x5, 0x52, 0x2a, 0x2, 0x158, 0x15c, 0x5, 
    0x54, 0x2b, 0x2, 0x159, 0x15c, 0x5, 0x56, 0x2c, 0x2, 0x15a, 0x15c, 0x5, 
    0x58, 0x2d, 0x2, 0x15b, 0x152, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x153, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x154, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x155, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x156, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x15e, 0x5, 0x3e, 0x20, 0x2, 0x15e, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x15f, 0x160, 0x7, 0xc, 0x2, 0x2, 0x160, 0x161, 0x7, 0x24, 
    0x2, 0x2, 0x161, 0x162, 0x5, 0x5a, 0x2e, 0x2, 0x162, 0x163, 0x7, 0x25, 
    0x2, 0x2, 0x163, 0x165, 0x5, 0x46, 0x24, 0x2, 0x164, 0x166, 0x5, 0x5c, 
    0x2f, 0x2, 0x165, 0x164, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x7, 0xe, 0x2, 
    0x2, 0x168, 0x16c, 0x7, 0x24, 0x2, 0x2, 0x169, 0x16b, 0x5, 0x44, 0x23, 
    0x2, 0x16a, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16e, 0x3, 0x2, 0x2, 
    0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x3, 0x2, 0x2, 
    0x2, 0x16d, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x16f, 0x171, 0x7, 0x2a, 0x2, 0x2, 0x170, 0x172, 0x5, 0x5a, 0x2e, 
    0x2, 0x171, 0x170, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x3, 0x2, 0x2, 
    0x2, 0x172, 0x173, 0x3, 0x2, 0x2, 0x2, 0x173, 0x175, 0x7, 0x2a, 0x2, 
    0x2, 0x174, 0x176, 0x5, 0x5e, 0x30, 0x2, 0x175, 0x174, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 
    0x2, 0x177, 0x178, 0x7, 0x25, 0x2, 0x2, 0x178, 0x179, 0x5, 0x46, 0x24, 
    0x2, 0x179, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0xf, 0x2, 0x2, 
    0x17b, 0x17c, 0x7, 0x24, 0x2, 0x2, 0x17c, 0x17d, 0x5, 0x5a, 0x2e, 0x2, 
    0x17d, 0x17e, 0x7, 0x25, 0x2, 0x2, 0x17e, 0x17f, 0x5, 0x46, 0x24, 0x2, 
    0x17f, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x180, 0x182, 0x7, 0x1b, 0x2, 0x2, 
    0x181, 0x183, 0x5, 0x60, 0x31, 0x2, 0x182, 0x181, 0x3, 0x2, 0x2, 0x2, 
    0x182, 0x183, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x3, 0x2, 0x2, 0x2, 
    0x184, 0x185, 0x7, 0x2a, 0x2, 0x2, 0x185, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x186, 0x187, 0x7, 0x8, 0x2, 0x2, 0x187, 0x188, 0x7, 0x2a, 0x2, 0x2, 
    0x188, 0x53, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x7, 0x9, 0x2, 0x2, 0x18a, 
    0x18b, 0x7, 0x2a, 0x2, 0x2, 0x18b, 0x55, 0x3, 0x2, 0x2, 0x2, 0x18c, 
    0x18d, 0x7, 0x2a, 0x2, 0x2, 0x18d, 0x57, 0x3, 0x2, 0x2, 0x2, 0x18e, 
    0x18f, 0x5, 0x60, 0x31, 0x2, 0x18f, 0x190, 0x7, 0x2a, 0x2, 0x2, 0x190, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x5, 0x60, 0x31, 0x2, 0x192, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x7, 0xd, 0x2, 0x2, 0x194, 0x195, 
    0x5, 0x46, 0x24, 0x2, 0x195, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 
    0x5, 0x66, 0x34, 0x2, 0x197, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 
    0x8, 0x31, 0x1, 0x2, 0x199, 0x19a, 0x7, 0x56, 0x2, 0x2, 0x19a, 0x19c, 
    0x7, 0x24, 0x2, 0x2, 0x19b, 0x19d, 0x5, 0x66, 0x34, 0x2, 0x19c, 0x19b, 
    0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 
    0x3, 0x2, 0x2, 0x2, 0x19e, 0x1aa, 0x7, 0x25, 0x2, 0x2, 0x19f, 0x1a0, 
    0x7, 0x17, 0x2, 0x2, 0x1a0, 0x1a2, 0x7, 0x24, 0x2, 0x2, 0x1a1, 0x1a3, 
    0x5, 0x66, 0x34, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 
    0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1aa, 
    0x7, 0x25, 0x2, 0x2, 0x1a5, 0x1aa, 0x5, 0x62, 0x32, 0x2, 0x1a6, 0x1a7, 
    0x7, 0x30, 0x2, 0x2, 0x1a7, 0x1aa, 0x5, 0x60, 0x31, 0xc, 0x1a8, 0x1aa, 
    0x5, 0x64, 0x33, 0x2, 0x1a9, 0x198, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x19f, 
    0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a6, 
    0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1d5, 
    0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0xc, 0xb, 0x2, 0x2, 0x1ac, 0x1ad, 
    0x9, 0x4, 0x2, 0x2, 0x1ad, 0x1d4, 0x5, 0x60, 0x31, 0xc, 0x1ae, 0x1af, 
    0xc, 0xa, 0x2, 0x2, 0x1af, 0x1b0, 0x9, 0x5, 0x2, 0x2, 0x1b0, 0x1d4, 
    0x5, 0x60, 0x31, 0xb, 0x1b1, 0x1b2, 0xc, 0x9, 0x2, 0x2, 0x1b2, 0x1b3, 
    0x9, 0x6, 0x2, 0x2, 0x1b3, 0x1d4, 0x5, 0x60, 0x31, 0xa, 0x1b4, 0x1b5, 
    0xc, 0x8, 0x2, 0x2, 0x1b5, 0x1b6, 0x9, 0x7, 0x2, 0x2, 0x1b6, 0x1d4, 
    0x5, 0x60, 0x31, 0x9, 0x1b7, 0x1b8, 0xc, 0x7, 0x2, 0x2, 0x1b8, 0x1b9, 
    0x7, 0x38, 0x2, 0x2, 0x1b9, 0x1d4, 0x5, 0x60, 0x31, 0x8, 0x1ba, 0x1bb, 
    0xc, 0x6, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x39, 0x2, 0x2, 0x1bc, 0x1d4, 
    0x5, 0x60, 0x31, 0x7, 0x1bd, 0x1be, 0xc, 0x5, 0x2, 0x2, 0x1be, 0x1bf, 
    0x7, 0x2d, 0x2, 0x2, 0x1bf, 0x1d4, 0x5, 0x60, 0x31, 0x5, 0x1c0, 0x1c1, 
    0xc, 0x13, 0x2, 0x2, 0x1c1, 0x1c2, 0x7, 0x2c, 0x2, 0x2, 0x1c2, 0x1c3, 
    0x7, 0x56, 0x2, 0x2, 0x1c3, 0x1c5, 0x7, 0x24, 0x2, 0x2, 0x1c4, 0x1c6, 
    0x5, 0x66, 0x34, 0x2, 0x1c5, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 
    0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1d4, 
    0x7, 0x25, 0x2, 0x2, 0x1c8, 0x1c9, 0xc, 0x12, 0x2, 0x2, 0x1c9, 0x1ca, 
    0x7, 0x2c, 0x2, 0x2, 0x1ca, 0x1d4, 0x7, 0x56, 0x2, 0x2, 0x1cb, 0x1cc, 
    0xc, 0xe, 0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x2c, 0x2, 0x2, 0x1cd, 0x1d4, 
    0x5, 0x62, 0x32, 0x2, 0x1ce, 0x1cf, 0xc, 0xd, 0x2, 0x2, 0x1cf, 0x1d4, 
    0x9, 0x8, 0x2, 0x2, 0x1d0, 0x1d1, 0xc, 0x3, 0x2, 0x2, 0x1d1, 0x1d2, 
    0x7, 0x2c, 0x2, 0x2, 0x1d2, 0x1d4, 0x8, 0x31, 0x1, 0x2, 0x1d3, 0x1ab, 
    0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1b1, 
    0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1b7, 
    0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1bd, 
    0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1c8, 
    0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1ce, 
    0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d7, 
    0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 
    0x3, 0x2, 0x2, 0x2, 0x1d6, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d5, 0x3, 
    0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 0x16, 0x2, 0x2, 0x1d9, 0x1df, 0x7, 
    0x56, 0x2, 0x2, 0x1da, 0x1dc, 0x7, 0x24, 0x2, 0x2, 0x1db, 0x1dd, 0x5, 
    0x66, 0x34, 0x2, 0x1dc, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 
    0x2, 0x2, 0x2, 0x1dd, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e0, 0x7, 
    0x25, 0x2, 0x2, 0x1df, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 
    0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x8, 
    0x32, 0x1, 0x2, 0x1e2, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x7, 
    0x24, 0x2, 0x2, 0x1e4, 0x1e5, 0x5, 0x60, 0x31, 0x2, 0x1e5, 0x1e6, 0x7, 
    0x25, 0x2, 0x2, 0x1e6, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1eb, 0x7, 
    0x17, 0x2, 0x2, 0x1e8, 0x1eb, 0x5, 0x4, 0x3, 0x2, 0x1e9, 0x1eb, 0x7, 
    0x56, 0x2, 0x2, 0x1ea, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1e7, 0x3, 
    0x2, 0x2, 0x2, 0x1ea, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1e9, 0x3, 
    0x2, 0x2, 0x2, 0x1eb, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1f1, 0x5, 0x60, 
    0x31, 0x2, 0x1ed, 0x1ee, 0x7, 0x2b, 0x2, 0x2, 0x1ee, 0x1f0, 0x5, 0x60, 
    0x31, 0x2, 0x1ef, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f3, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 
    0x2, 0x2, 0x1f2, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 0x2, 
    0x2, 0x32, 0x71, 0x75, 0x7f, 0x8c, 0x95, 0x9f, 0xa4, 0xa9, 0xb1, 0xb4, 
    0xbe, 0xc5, 0xcf, 0xd4, 0xda, 0xe1, 0xe6, 0xeb, 0xf6, 0xfb, 0xfe, 0x107, 
    0x10d, 0x117, 0x11c, 0x121, 0x12a, 0x12d, 0x135, 0x13e, 0x145, 0x14d, 
    0x15b, 0x165, 0x16c, 0x171, 0x175, 0x182, 0x19c, 0x1a2, 0x1a9, 0x1c5, 
    0x1d3, 0x1d5, 0x1dc, 0x1df, 0x1ea, 0x1f1, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SlovenCLanguageParser::Initializer SlovenCLanguageParser::_init;
