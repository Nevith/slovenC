//
// Created by andraz on 08/05/2020.
//

#include "Context.h"

int Context::getOffset() const {
    return offset;
}

void Context::setOffset(int offset) {
    Context::offset = offset;
}

int Context::getLength() const {
    return length;
}

void Context::setLength(int length) {
    Context::length = length;
}

int Context::getColumn() const {
    return column;
}

void Context::setColumn(int column) {
    Context::column = column;
}

int Context::getRow() const {
    return row;
}

void Context::setRow(int row) {
    Context::row = row;
}

const std::string &Context::getText() const {
    return text;
}

void Context::setText(const std::string &text) {
    Context::text = text;
}
