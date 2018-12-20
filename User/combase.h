#ifndef COMBASE_H
#define COMBASE_H


class combase
{
public:
    combase();

    void setIsHexSend(bool isHexSend){m_isHexSend = isHexSend;}
    void setIsHexDisplay(bool isHexDisplay){m_isHexDisplay = isHexDisplay;}

    bool m_isHexSend;
    bool m_isHexDisplay;
};

#endif // COMBASE_H
