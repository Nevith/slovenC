//
// Created by Andraz on 31/03/2020.
//

#ifndef SLOVENC_BREAKSTATEMENT_H
#define SLOVENC_BREAKSTATEMENT_H


#include <model/statements/EmptyStatement.h>

class BreakStatement : public EmptyStatement {
public:
    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};


#endif //SLOVENC_BREAKSTATEMENT_H
