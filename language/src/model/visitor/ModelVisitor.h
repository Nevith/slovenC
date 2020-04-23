//
// Created by andraz on 16/04/2020.
//

#ifndef SLOVENC_MODELVISITOR_H
#define SLOVENC_MODELVISITOR_H

#include <memory>
#include <model/Visitable.h>
#include "AbstractModelVisitor.h"

template<typename T>
class ModelVisitor: public AbstractModelVisitor {

    virtual void visit(std::shared_ptr<Visitable> visitable);

};


#endif //SLOVENC_MODELVISITOR_H
