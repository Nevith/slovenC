//
// Created by andraz on 28/05/2020.
//

#ifndef SLOVENC_CLASSINSTANCE_H
#define SLOVENC_CLASSINSTANCE_H

#include "Value.h"

class ClassInstance {
private:

    std::shared_ptr<ClassSymbol> classType;

    std::vector<std::shared_ptr<FileSymbol>> fields;

    std::map<std::shared_ptr<FileSymbol>, Value> fieldValues;

public:

    ClassInstance(const std::shared_ptr<ClassSymbol> &classType);

    const std::shared_ptr<ClassSymbol> &getClassType() const;

    const std::vector<std::shared_ptr<FileSymbol>> &getFields() const;

    bool setFieldValue(std::shared_ptr<FileSymbol> field, Value value);

    Value getFieldValue(std::shared_ptr<FileSymbol> field);

    bool operator==(const ClassInstance &rhs) const;

    bool operator!=(const ClassInstance &rhs) const;
};


#endif //SLOVENC_CLASSINSTANCE_H
