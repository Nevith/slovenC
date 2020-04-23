//
// Created by andraz on 16/04/2020.
//

#include "ModelVisitor.h"

template<typename T>
T ModelVisitor<T>::visit(std::shared_ptr<Visitable> visitable) {
    return nullptr;
}