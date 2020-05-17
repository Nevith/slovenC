//
// Created by Andraz on 27/03/2020.
//

#include "PackageOrFileReferenceExpression.h"

PackageOrFileReferenceExpression::PackageOrFileReferenceExpression(std::string name) : IdentifierExpression(name) {

}

void PackageOrFileReferenceExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitPackageOrFileReferenceExpression(TypeUtils::cast<PackageOrFileReferenceExpression>(visitable));
}