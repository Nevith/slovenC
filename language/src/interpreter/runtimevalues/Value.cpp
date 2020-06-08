//
// Created by andraz on 28/05/2020.
//

#include "Value.h"


Value::Value() : type(PredefinedSymbol::VOID) {

}

Value::Value(bool boolean) : value(std::make_shared<bool>(boolean)), type(PredefinedSymbol::BOOLEAN) {

}

Value::Value(int integer) : value(std::make_shared<int>(integer)), type(PredefinedSymbol::INT) {

}

Value::Value(double floatingPoint) : value(std::make_shared<double>(floatingPoint)), type(PredefinedSymbol::DOUBLE) {

}

Value::Value(std::string string) : value(std::make_shared<std::string>(string)), type(PredefinedSymbol::STRING) {

}


Value::Value(const Value &other) : value(other.value), type(other.type) {

}


Value::Value(const std::shared_ptr<void> &value, const std::shared_ptr<TypeSymbol> &type) : value(value), type(type) {

}

void Value::setValue(const std::shared_ptr<void> &value, const std::shared_ptr<TypeSymbol> &type) {
    Value::value = value;
    Value::type = type;
}

const std::shared_ptr<TypeSymbol> &Value::getType() const {
    return type;
}

const std::shared_ptr<void> &Value::getValue() const {
    return value;
}

bool Value::operator==(const Value &rhs) const {
    return type == rhs.type &&
           value == rhs.value;
}

bool Value::operator!=(const Value &rhs) const {
    return !(rhs == *this);
}

bool Value::operator<(const Value &rhs) const {
    if (type < rhs.type)
        return true;
    if (rhs.type < type)
        return false;
    return value < rhs.value;
}

bool Value::operator>(const Value &rhs) const {
    return rhs < *this;
}

bool Value::operator<=(const Value &rhs) const {
    return !(rhs < *this);
}

bool Value::operator>=(const Value &rhs) const {
    return !(*this < rhs);
}

Value Value::operator+(const Value &rhs) const {
    if (type == PredefinedSymbol::INT) {
        if (rhs.type == PredefinedSymbol::INT) {
            auto newValue = std::make_shared<int>(*(int *) value.get() + *(int *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::INT);
        } else if (rhs.type == PredefinedSymbol::DOUBLE) {
            auto newValue = std::make_shared<int>(*(int *) value.get() + *(double *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::INT);
        }
    }
    if (type == PredefinedSymbol::DOUBLE) {
        if (rhs.type == PredefinedSymbol::INT) {
            auto newValue = std::make_shared<double>(*(double *) value.get() + *(int *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::DOUBLE);
        } else if (rhs.type == PredefinedSymbol::DOUBLE) {
            auto newValue = std::make_shared<double>(*(double *) value.get() + *(double *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::DOUBLE);
        }
    }
    return Value(); // todo - throw exception - invalid operation!
}

Value Value::operator-(const Value &rhs) const {
    if (type == PredefinedSymbol::INT) {
        if (rhs.type == PredefinedSymbol::INT) {
            auto newValue = std::make_shared<int>(*(int *) value.get() - *(int *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::INT);
        } else if (rhs.type == PredefinedSymbol::DOUBLE) {
            auto newValue = std::make_shared<int>(*(int *) value.get() - *(double *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::INT);
        }
    }
    if (type == PredefinedSymbol::DOUBLE) {
        if (rhs.type == PredefinedSymbol::INT) {
            auto newValue = std::make_shared<double>(*(double *) value.get() - *(int *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::DOUBLE);
        } else if (rhs.type == PredefinedSymbol::DOUBLE) {
            auto newValue = std::make_shared<double>(*(double *) value.get() - *(double *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::DOUBLE);
        }
    }
    return Value(); // todo - throw exception - invalid operation!
}

Value Value::operator*(const Value &rhs) const {
    if (type == PredefinedSymbol::INT) {
        if (rhs.type == PredefinedSymbol::INT) {
            auto newValue = std::make_shared<int>(*(int *) value.get() * *(int *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::INT);
        } else if (rhs.type == PredefinedSymbol::DOUBLE) {
            auto newValue = std::make_shared<int>(*(int *) value.get() * *(double *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::INT);
        }
    }
    if (type == PredefinedSymbol::DOUBLE) {
        if (rhs.type == PredefinedSymbol::INT) {
            auto newValue = std::make_shared<double>(*(double *) value.get() * *(int *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::DOUBLE);
        } else if (rhs.type == PredefinedSymbol::DOUBLE) {
            auto newValue = std::make_shared<double>(*(double *) value.get() * *(double *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::DOUBLE);
        }
    }
    return Value(); // todo - throw exception - invalid operation!
}

Value Value::operator/(const Value &rhs) const {
    if (type == PredefinedSymbol::INT) {
        if (rhs.type == PredefinedSymbol::INT) {
            auto newValue = std::make_shared<int>(*(int *) value.get() / *(int *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::INT);
        } else if (rhs.type == PredefinedSymbol::DOUBLE) {
            auto newValue = std::make_shared<int>(*(int *) value.get() / *(double *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::INT);
        }
    }
    if (type == PredefinedSymbol::DOUBLE) {
        if (rhs.type == PredefinedSymbol::INT) {
            auto newValue = std::make_shared<double>(*(double *) value.get() / *(int *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::DOUBLE);
        } else if (rhs.type == PredefinedSymbol::DOUBLE) {
            auto newValue = std::make_shared<double>(*(double *) value.get() / *(double *) rhs.value.get());
            return Value(newValue, PredefinedSymbol::DOUBLE);
        }
    }
    return Value(); // todo - throw exception - invalid operation!
}