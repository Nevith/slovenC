/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _MEMBERSYMBOL_H
#define _MEMBERSYMBOL_H


class MemberSymbol {
private:
    short modifiers = 0;

    const static short STATIC_FLAG = 31; // 0000000000011111
    const static short PUBLIC_FLAG = 992; // 0000001111100000
    const static short PRIVATE_FLAG = 31744; // 0111110000000000

public:
    void setStatic();

    void setPublic();

    void setPrivate();

    bool isStatic();

    bool isPublic();

    bool isPrivate();
};

#endif //_MEMBERSYMBOL_H