//
// Created by Andraz on 31/03/2020.
//

#ifndef SLOVENC_THROWSTATEMENT_H
#define SLOVENC_THROWSTATEMENT_H


#include <model/statements/ExpressionStatement.h>

class ThrowStatement : public ExpressionStatement {
public:
    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};


#endif //SLOVENC_THROWSTATEMENT_H
