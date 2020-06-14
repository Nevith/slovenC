//
// Created by andraz on 28/05/2020.
//

#ifndef SLOVENC_CONSTANTS_H
#define SLOVENC_CONSTANTS_H

#include <string>
#include <interpreter/exits/Exit.h>

namespace constants {
    const static std::string BOOLEAN = "bit";
    const static std::string BYTE = "zlog";
    const static std::string OBJECT = "Objekt";
    const static std::string DOUBLE = "decimalno";
    const static std::string INTEGER = "celo";
    const static std::string VOID = "praznina";
    const static std::string STRING = "niz";
    const static std::string CONSOLE = "Konzola";
    const static std::string LIST = "Seznam";
    const static std::string BREAK = "prelom";
    const static std::string CONTINUE = "naslednji";
    const static std::string CLASS = "razred";
    const static std::string EXTENDS = "vpelje";
    const static std::string IF = "ko";
    const static std::string ELSE = "sicer";
    const static std::string FOR = "za";
    const static std::string WHILE = "dokler";
    const static std::string TRY = "poskusi";
    const static std::string CATCH = "ujemi";
    const static std::string FINALLY = "konec";
    const static std::string THROW = "javi";
    const static std::string IMPORT = "uporabi";
    const static std::string PACKAGE = "paket";
    const static std::string NEW = "nov";
    const static std::string THIS = "to";
    const static std::string PRIVATE_MALE = "zakrit";
    const static std::string PRIVATE_NEUTRAL = "zakrito";
    const static std::string PRIVATE_FEMALE = "zakrita";
    const static std::string PUBLIC_MALE = "odkrit";
    const static std::string PUBLIC_NEUTRAL = "odkrito";
    const static std::string PUBLIC_FEMALE = "odkrita";
    const static std::string STATIC_MALE = "globalen";
    const static std::string STATIC_NEUTRAL = "globalno";
    const static std::string STATIC_FEMALE = "globalna";
    const static std::string RETURN = "vrni";
    const static std::string CONSTRUCTOR = "Konstruktor";
    const static std::string TRUE = "prav";
    const static std::string FALSE = "narobe";

    // TODO - Don't hard-code predefined classes, but write them in slovenC
    const static std::string TOSTRING = "vNiz";
    const static std::string PRINT = "printaj";
    const static std::string READ = "preberi";
    const static std::string RANDOM = "nakljucnoCelo";
    const static std::string ADD = "dodaj";
    const static std::string PUT = "vstavi";
    const static std::string GET = "vzemi";
    const static std::string REMOVE = "odstraniZadnjo";
    const static std::string SIZE = "velikost";
    const static std::string CONCATENATE = "dolepi";
    const static std::string PROGRAM = "Program";
    const static std::string MAIN = "zagon";
}

#endif //SLOVENC_CONSTANTS_H
