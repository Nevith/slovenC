//
// Created by andraz on 12/06/2020.
//

#ifndef SLOVENC_ABSTRACTCLASSINSTANCE_H
#define SLOVENC_ABSTRACTCLASSINSTANCE_H


#include <model/symbols/main/ClassSymbol.h>

class AbstractClassInstance {
protected:
    virtual void initFields(const std::shared_ptr<ClassSymbol> &classType) = 0;

public:
    virtual bool compare(std::shared_ptr<AbstractClassInstance> other) = 0;
};


#endif //SLOVENC_ABSTRACTCLASSINSTANCE_H
