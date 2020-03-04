@echo off

set LOCATION=lib/antlr-4.8-complete.jar
java -jar %LOCATION% -Dlanguage=Cpp -listener -visitor -o antlr/ -package antlr SlovenCLanguageLexer.g4 SlovenCLanguageParser.g4

