//
// Created by andraz on 28/05/2020.
//

#include "ClassInstance.h"

ClassInstance::ClassInstance(const std::shared_ptr<ClassSymbol> &classType) : classType(classType), fields(),
                                                                              fieldValues() {
    initFields(classType);
}

void ClassInstance::initFields(const std::shared_ptr<ClassSymbol> &classType) {
    for (auto field : classType->getDeclaredFields()) {
        fields.push_back(field);
        auto fieldType = TypeUtils::cast<TypeSymbol>(field->getType()->getResolve());
        if (fieldType == PredefinedSymbol::BOOLEAN) {
            auto fieldValue = Value(false);
            fieldValues[field] = fieldValue;
        } else if (fieldType == PredefinedSymbol::INT) {
            auto fieldValue = Value(0);
            fieldValues[field] = fieldValue;
        } else if (fieldType == PredefinedSymbol::DOUBLE) {
            auto fieldValue = Value(0.0);
            fieldValues[field] = fieldValue;
        } else if (fieldType == PredefinedSymbol::STRING) {
            auto fieldValue = Value("");
            fieldValues[field] = fieldValue;
        } else if (fieldType == PredefinedSymbol::LIST) {
            auto fieldValue = Value(std::vector<Value>());
            fieldValues[field] = fieldValue;
        } else {
            auto fieldValue = Value();
            fieldValue.setValue(std::make_shared<ClassInstance>(TypeUtils::cast<ClassSymbol>(fieldType)), fieldType);
            fieldValues[field] = fieldValue;
        }
    }
    for (auto superClass : classType->getSuperClasses()) {
        initFields(TypeUtils::cast<ClassSymbol>(superClass->getResolve()));
    }
}

const std::shared_ptr<ClassSymbol> &ClassInstance::getClassType() const {
    return classType;
}

const std::vector<std::shared_ptr<FieldSymbol>> &ClassInstance::getFields() const {
    return fields;
}

bool ClassInstance::setFieldValue(std::shared_ptr<FieldSymbol> field, Value value) {
    auto it = fieldValues.find(field);
    if (it == fieldValues.end()) {
        throw RuntimeException(value.getType()->getFullyQualifiedName() + " nima polja: '" + field->getName() + "'");
    }
    fieldValues[field] = value;
    return false;
}

Value ClassInstance::getFieldValue(std::shared_ptr<FieldSymbol> field) {
    auto it = fieldValues.find(field);
    if (it == fieldValues.end()) {
        throw RuntimeException(classType->getFullyQualifiedName() + " nima polja: '" + field->getName() + "'");
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

bool ClassInstance::compare(std::shared_ptr<AbstractClassInstance> other) {
    auto rhs = TypeUtils::cast<ClassInstance>(other);
    if (!rhs) {
        return false;
    } else return classType == classType && fields == fields && fieldValues == fieldValues;
}
