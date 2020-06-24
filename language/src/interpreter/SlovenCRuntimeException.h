//
// Created by andraz on 04/06/2020.
//

#ifndef SLOVENC_SLOVENCRUNTIMEEXCEPTION_H
#define SLOVENC_SLOVENCRUNTIMEEXCEPTION_H


#include <exception>
#include <string>

class SlovenCRuntimeException : public std::exception {
    std::string msg;

public:
    SlovenCRuntimeException(const char *const message);

    SlovenCRuntimeException(std::string  message);

    virtual char const*
    what() const throw();

};


#endif //SLOVENC_SLOVENCRUNTIMEEXCEPTION_H
