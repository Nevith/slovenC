/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FIELDSYMBOL_H
#define _FIELDSYMBOL_H

#include "model/symbols/base/Variable.h"
#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "model/symbols/base/Member.h"


class FieldSymbol : public Variable, public Member, public FullyQualifiedSymbol {
private:
    std::shared_ptr<Expression> initialValue;
public:
    FieldSymbol(const std::string &name);

    const std::shared_ptr<Expression> &getInitialValue() const;

    void setInitialValue(const std::shared_ptr<Expression> &initialValue);
};

#endif //_FIELDSYMBOL_H