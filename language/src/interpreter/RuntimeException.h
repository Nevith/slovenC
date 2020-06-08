//
// Created by andraz on 04/06/2020.
//

#ifndef SLOVENC_RUNTIMEEXCEPTION_H
#define SLOVENC_RUNTIMEEXCEPTION_H


#include <exception>
#include <string>

class RuntimeException : public std::exception {

public:
    RuntimeException(const char *const message);

};


#endif //SLOVENC_RUNTIMEEXCEPTION_H
