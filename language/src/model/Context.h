//
// Created by andraz on 08/05/2020.
//

#ifndef SLOVENC_CONTEXT_H
#define SLOVENC_CONTEXT_H


#include <string>

class Context {
private:
    int offset;
    int end;
    int length;
    int column;
    int row;
    std::string text;

public:
    int getOffset() const;

    void setOffset(int offset);

    int getAnEnd() const;

    void setAnEnd(int anEnd);

    int getLength() const;

    void setLength(int length);

    int getColumn() const;

    void setColumn(int column);

    int getRow() const;

    void setRow(int row);

    const std::string &getText() const;

    void setText(const std::string &text);

};


#endif //SLOVENC_CONTEXT_H
