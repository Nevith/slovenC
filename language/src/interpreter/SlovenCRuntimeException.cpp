//
// Created by andraz on 04/06/2020.
//

#include "SlovenCRuntimeException.h"

SlovenCRuntimeException::SlovenCRuntimeException(const char *const message) : exception(message) {}

SlovenCRuntimeException::SlovenCRuntimeException(std::string message) : exception(message.c_str()) {

}
