/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _METHODSYMBOL_H
#define _METHODSYMBOL_H

#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "model/symbols/base/Member.h"
#include "model/symbols/variables/ParameterSymbol.h"

#include <vector>
#include <model/expressions/dotted/TypeReferenceExpression.h>

class ParameterSymbol;
class MethodSymbol : public Member, public FullyQualifiedSymbol {
private:
    const bool isConstructor;
    std::shared_ptr<TypeReferenceExpression> result;
    std::vector<std::shared_ptr<ParameterSymbol>> parameters;
public:
    MethodSymbol(std::string name, const bool isConstructor);

    const bool getIsConstructor() const;

    const std::shared_ptr<TypeReferenceExpression> &getResult() const;

    void setResult(const std::shared_ptr<TypeReferenceExpression> &result);
};

#endif //_METHODSYMBOL_H