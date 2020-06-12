//
// Created by andraz on 28/05/2020.
//

#ifndef SLOVENC_CLASSINSTANCE_H
#define SLOVENC_CLASSINSTANCE_H

#include "Value.h"
#include "AbstractClassInstance.h"

class ClassInstance : public AbstractClassInstance {
private:

    std::shared_ptr<ClassSymbol> classType;

    std::vector<std::shared_ptr<FieldSymbol>> fields;

    std::map<std::shared_ptr<FieldSymbol>, Value> fieldValues;

    void initFields(const std::shared_ptr<ClassSymbol> &classType);

public:

    ClassInstance(const std::shared_ptr<ClassSymbol> &classType);

    const std::shared_ptr<ClassSymbol> &getClassType() const;

    const std::vector<std::shared_ptr<FieldSymbol>> &getFields() const;

    bool setFieldValue(std::shared_ptr<FieldSymbol> field, Value value);

    Value getFieldValue(std::shared_ptr<FieldSymbol> field);

    bool operator==(const ClassInstance &rhs) const;

    bool operator!=(const ClassInstance &rhs) const;

    bool compare(std::shared_ptr<AbstractClassInstance> other) override;
};


#endif //SLOVENC_CLASSINSTANCE_H
