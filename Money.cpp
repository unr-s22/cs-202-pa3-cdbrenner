#include "Money.h"

Money::Money(int dollars, int cents)
{
    m_cents = (100*dollars + cents);
}

std::ostream &operator << (std::ostream &strm, const Money &obj)
{
    int dollars = obj.m_cents/100;
    int cents = obj.m_cents%100;

    if(obj.m_cents >= 0 && cents < 10)
    {
        if (cents != 0)
            strm << "$" << dollars << ".0" << cents;
        else
            strm << "$" << dollars << ".00";
    }

    else if(obj.m_cents > 0)
    {
        if (cents != 0)
            strm << "$" << dollars << "." << cents;
        else
            strm << "$" << dollars << ".00";
    }

    else if(obj.m_cents < 0 && cents > -10)
        if (cents != 0)
            strm << "- $" << abs(dollars) << ".0" << abs(cents);
        else
            strm << "- $" << abs(dollars) << ".00";

    else
        if (cents != 0)
            strm << "- $" << abs(dollars) << "." << abs(cents);
        else
            strm << "- $" << abs(dollars) << ".00";

    return strm;
}

Money::Money() {}

Money Money::operator + (const Money &right)
{
    Money temp;
    temp.m_cents = m_cents + right.m_cents;
    return temp;
}

Money Money::operator - (const Money &right)
{
    Money temp;
    temp.m_cents = m_cents - right.m_cents;
    return temp;
}

bool Money::operator > (const Money &right)
{
    bool status;

    if (m_cents > right.m_cents)
    {
        status = true;
        return status;
    }
    else
        status = false;
        return status;
}

bool Money::operator < (const Money &right)
{
    bool status;

    if (m_cents < right.m_cents)
    {
        status = true;
        return status;
    }
    else
        status = false;
        return status;
}

bool Money::operator <= (const Money &right)
{
    bool status;

    if (m_cents <= right.m_cents)
    {
        status = true;
        return status;
    }
    else
        status = false;
        return status;
}

bool Money::operator >= (const Money &right)
{
    bool status;

    if (m_cents >= right.m_cents)
    {
        status = true;
        return status;
    }
    else
        status = false;
        return status;
}

bool Money::operator == (const Money &right)
{
    bool status;

    if (m_cents == right.m_cents)
    {
        status = true;
        return status;
    }
    else
        status = false;
        return status;
}

bool Money::operator != (const Money &right)
{
    bool status;

    if (m_cents != right.m_cents)
    {
        status = true;
        return status;
    }
    else
        status = false;
        return status;
}
