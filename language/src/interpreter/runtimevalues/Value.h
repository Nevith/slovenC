//
// Created by andraz on 28/05/2020.
//

#ifndef SLOVENC_VALUE_H
#define SLOVENC_VALUE_H

#include "model/Model.h"

class Value {
private:
    std::shared_ptr<TypeSymbol> type;
    std::shared_ptr<void> value;

public:

    Value();

    Value(bool boolean);

    Value(int integer);

    Value(double floatingPoint);

    Value(std::string string);

    Value(const Value &other);

    Value(const std::shared_ptr<void> &value, const std::shared_ptr<TypeSymbol> &type);

    void setValue(const std::shared_ptr<void> &value, const std::shared_ptr<TypeSymbol> &type);

    const std::shared_ptr<TypeSymbol> &getType() const;

    const std::shared_ptr<void> &getValue() const;

    bool operator==(const Value &rhs) const;

    bool operator!=(const Value &rhs) const;

    bool operator<(const Value &rhs) const;

    bool operator>(const Value &rhs) const;

    bool operator<=(const Value &rhs) const;

    bool operator>=(const Value &rhs) const;

    Value operator+(const Value &rhs) const;

    Value operator-(const Value &rhs) const;

    Value operator*(const Value &rhs) const;

    Value operator/(const Value &rhs) const;
};


#endif //SLOVENC_VALUE_H
