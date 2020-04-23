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

class BlockStatement;

class MethodSymbol : public Member, public FullyQualifiedSymbol {
private:
    const bool isConstructor;
    std::shared_ptr<TypeReferenceExpression> result;
    std::vector<std::shared_ptr<ParameterSymbol>> parameters;
    std::shared_ptr<BlockStatement> scope;
public:
    MethodSymbol(std::string name, const bool isConstructor);

    const bool getIsConstructor() const;

    const std::shared_ptr<TypeReferenceExpression> &getResult() const;

    void setResult(const std::shared_ptr<TypeReferenceExpression> &result);

    const std::vector<std::shared_ptr<ParameterSymbol>> &getParameters() const;

    void addParameter(const std::shared_ptr<ParameterSymbol> &parameter);

    const std::shared_ptr<BlockStatement> getScope() const;

    void setScope(const std::shared_ptr<BlockStatement> &scope);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_METHODSYMBOL_H