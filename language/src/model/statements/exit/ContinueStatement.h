//
// Created by Andraz on 31/03/2020.
//

#ifndef SLOVENC_CONTINUESTATEMENT_H
#define SLOVENC_CONTINUESTATEMENT_H


#include <model/statements/EmptyStatement.h>

class ContinueStatement : public EmptyStatement {
public:
    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};


#endif //SLOVENC_CONTINUESTATEMENT_H
