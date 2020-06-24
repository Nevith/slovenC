//
// Created by andraz on 08/06/2020.
//

#ifndef SLOVENC_EXIT_H
#define SLOVENC_EXIT_H


#include <exception>
#include <interpreter/SlovenCRuntimeException.h>
#include "model/Constants.h"
#include "string"

class Exit : public SlovenCRuntimeException {
public:
    Exit(std::string message);
};


#endif //SLOVENC_EXIT_H
