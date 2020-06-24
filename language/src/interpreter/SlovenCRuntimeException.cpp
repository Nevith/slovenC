//
// Created by andraz on 04/06/2020.
//

#include "SlovenCRuntimeException.h"

#include <utility>

SlovenCRuntimeException::SlovenCRuntimeException(const char *const message) : std::exception(), msg(message) {
}

SlovenCRuntimeException::SlovenCRuntimeException(std::string message) : exception(), msg(std::move(message)) {

}

const char *SlovenCRuntimeException::what() const throw() {
    return msg.c_str();
}
