#include <iostream>
#pragma once

class Money
{
    private:
        int m_cents = 0;

    public:
        Money(int, int);
        Money();

        bool operator > (const Money &right);
        bool operator < (const Money &right);
        bool operator <= (const Money &right);
        bool operator >= (const Money &right);
        bool operator != (const Money &right);
        bool operator == (const Money &right);

        Money operator + (const Money &right);
        Money operator - (const Money &right);

        friend std::ostream &operator << (std::ostream &strm, const Money &obj);
};
