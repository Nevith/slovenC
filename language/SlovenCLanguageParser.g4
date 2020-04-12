/*
[The "BSD licence"]
Copyright (c) 2013 Terence Parr, Sam Harwell
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. The name of the author may not be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/** A Java 1.7 grammar for ANTLR v4 derived from ANTLR v3 Java grammar.
*  Uses ANTLR v4's left-recursive expression notation.
*  It parses ECJ, Netbeans, JDK etc...
*
*  Sam Harwell cleaned this up significantly and updated to 1.7!
*
*  You can test with
*
*  $ antlr4 Java.g4
*  $ javac *.java
*  $ grun Java compilationUnit *.java
*/
parser grammar SlovenCLanguageParser;

options {
   tokenVocab=SlovenCLanguageLexer;
}

parseWhole
    : compilationUnit EOF
    ;

literal
        : IntegerLiteral                                      #LiteralInteger
        | FloatingPointLiteral                                #LiteralFloatingPoint
        | TRUE                                                #LiteralBoolean
        | FALSE                                               #LiteralBoolean
        | StringLiteral                                       #LiteralString
        | NULLLITERAL                                         #LiteralNULLLITERAL
        ;

/*
 * Productions from Â§4 (Types, Values, and Variables)
 */

type
        : id=(INT | DOUBLE | BOOLEAN)             #PrimitiveType
        | classType                               #ReferenceType
        ;

/*
 *      | classOrInterfaceType DOT annotation* Identifier typeArguments?
 *      to
 *      | classType DOT annotation* Identifier typeArguments?
 */
classType
        : Identifier               #ClassTypeUnqual
        | classType DOT Identifier #ClassTypeQual
        ;

modifier
        : PUBLIC
        | PRIVATE
        | STATIC
        ;

/*
 * Productions from Â§6 (Names)
 */

fileName
        : Identifier                                          #FileNameUnqual
        | fileName DOT Identifier                             #FileNameQual
        ;

/*
 * Productions from Â§7 (Packages)
 */

compilationUnit
        : importDeclarations typeDeclarations
        ;

importDeclarations
        : importDeclaration*
        ;

importDeclaration
        : IMPORT fileName SEMI
        ;

typeDeclarations
        : typeDeclaration*
        ;

typeDeclaration
        : classDeclaration
        | SEMI
        ;

/*
 * Productions from Â§8 (Classes)
 */

classDeclaration
        : (modifiers+=modifier)* CLASS (Identifier inheritance classBody)?  #NormalClassDeclaration
        ;

inheritance
        : superclass?
        ;

superclass
        : EXTENDS classTypeList
        ;

classTypeList
        : classType (COMMA classType)*
        ;

classBody
        : LBRACE classBodyDeclaration* RBRACE
        ;

classBodyDeclaration
        : fieldDeclaration
        | methodDeclaration
        | constructorDeclaration
        | classDeclaration
        | SEMI
        ;

fieldDeclaration
        : (modifiers+=modifier)* type fieldDeclarator SEMI? { if ($SEMI == NULL) notifyErrorListeners("Missing ';'"); }
        ;

fieldDeclarator
        : Identifier (ASSIGN expression)?
        ;

variableDeclarator
        : Identifier (ASSIGN expression)?
        ;

methodDeclaration
        : (modifiers+=modifier)* methodHeader methodBody
        ;

methodHeader
        : result methodDeclarator
        ;

result
        : type
        | VOID
        ;

methodDeclarator
        : Identifier (LPAREN formalParameterList? RPAREN)? { if ($LPAREN == NULL) notifyErrorListeners("Missing '('"); }
        ;

formalParameterList
        : formalParameter (COMMA formalParameter)*
        ;

formalParameter
        : (modifiers+=modifier)* type Identifier
        ;

methodBody
        : LBRACE blockStatement* RBRACE
        | SEMI
        ;

constructorDeclaration
        : (modifiers+=modifier)* constructorDeclarator constructorBody
        ;

constructorDeclarator
        : CONSTRUCTOR (LPAREN formalParameterList? RPAREN)?  { if ($LPAREN == NULL) notifyErrorListeners("Missing '('"); }
        ;

constructorBody
        : LBRACE blockStatement* RBRACE
        ;

/*
 * Productions from Â§14 (Blocks and Statements)
 */

block
        : LBRACE blockStatement*  RBRACE
        ;

blockStatement
        : localVariableDeclarationStatement
        | statement
        ;

localVariableDeclarationStatement
        : localVariableDeclaration SEMI
        | localVariableDeclaration { notifyErrorListeners("Missing ';'"); }
        ;

localVariableDeclaration
        : type variableDeclarator
        ;

statement
        : block_
        | ifThenStatement
        | basicForStatement
        | whileStatement
        | returnStatement
        | throwStatement
        | breakStatement
        | continueStatement
        | emptyStatement
        | expressionStatement
        ;

 block_
        : block
        ;

ifThenStatement
        : IF LPAREN condition RPAREN statement elseStatement?
        ;

basicForStatement
        : FOR LPAREN localVariableDeclaration* SEMI condition? SEMI forUpdate? RPAREN statement
        ;

whileStatement
        : WHILE LPAREN condition RPAREN statement
        ;

returnStatement
        : RETURN expression? SEMI
        ;

throwStatement
        : THROW expression SEMI
        ;

breakStatement
        : BREAK SEMI
        ;

continueStatement
        : CONTINUE SEMI
        ;

emptyStatement
        : SEMI
        ;

expressionStatement
        : expression SEMI
        ;

condition
        : expression
        ;

elseStatement
        : ELSE statement
        ;

forUpdate
        : expressionList
        ;

/*
 * Productions from Â§15 (Expressions)
 */

expression
        : expression bop=DOT Identifier LPAREN expressionList? RPAREN       #DottedCallExpression
        | expression bop=DOT Identifier                                     #DottedExpression
        | Identifier LPAREN expressionList? RPAREN                          #CallExpression
        | THIS LPAREN expressionList? RPAREN                                #ThisCallExpression
        | expression postfix=(INC | DEC)                                    #PostIncrementDecrementExpression
        | prefix=BANG expression                                            #NegateExpression
        | expression bop=(MUL|DIV|MOD) expression                           #MultiplicativeExpression
        | expression bop=(ADD|SUB) expression                               #AdditiveExpression
        | expression bop=(LE | GE | GT | LT) expression                     #RelationalExpression
        | expression bop=(EQUAL | NOTEQUAL) expression                      #CompareExpression
        | expression bop=AND expression                                     #ConditionalAndExpression
        | expression bop=OR expression                                      #ConditionalOrExpression
        | <assoc=right> expression ASSIGN expression #AssignmentExpression
        | primary                                                           #PrimaryExpression
        | expression bop=DOT {notifyErrorListeners("Invalid dotted expression.");}  #InvalidDottedExpression
        ;

primary
        : LPAREN expression RPAREN                      #ParenthesizedExpression
        | THIS                                          #This
        | literal                                       #PrimaryLiteral
        | Identifier                                    #PrimaryIdentifier
        ;

expressionList
        : expression (COMMA expression)*
        ;