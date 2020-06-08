//
// Created by andraz on 28/05/2020.
//

#include "ClassInstance.h"

ClassInstance::ClassInstance(const std::shared_ptr<ClassSymbol> &classType) : classType(classType), fields(), fieldValues() {
    // todo - collect fields
    // todo - init fields
}

const std::shared_ptr<ClassSymbol> &ClassInstance::getClassType() const {
    return classType;
}

const std::vector<std::shared_ptr<FileSymbol>> &ClassInstance::getFields() const {
    return fields;
}

bool ClassInstance::setFieldValue(std::shared_ptr<FileSymbol> field, Value value) {
    auto it = fieldValues.find(field);
    if (it == fieldValues.end()) {
        return false; // todo Throw runtime error - class "classType" has no field "field"
    }
    fieldValues[field] = value;
    return false;
}

Value ClassInstance::getFieldValue(std::shared_ptr<FileSymbol> field) {
    auto it = fieldValues.find(field);
    if (it == fieldValues.end()) {
        return Value(nullptr, InvalidSymbol::INVALID); // todo Throw runtime error - class "classType" has no field "field"
    }
    return it->second;
}

bool ClassInstance::operator==(const ClassInstance &rhs) const {
    return classType == rhs.classType &&
           fields == rhs.fields &&
           fieldValues == rhs.fieldValues;
}

bool ClassInstance::operator!=(const ClassInstance &rhs) const {
    return !(rhs == *this);
}
