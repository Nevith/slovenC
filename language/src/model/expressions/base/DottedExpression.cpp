/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "DottedExpression.h"

/**
 * DottedExpression implementation
 */
DottedExpression::DottedExpression(std::string name): name(name) {

}

std::string DottedExpression::getName() const {
    return name;
}