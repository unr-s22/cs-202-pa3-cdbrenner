#include <iostream>
#include <vector>
#include "Money.h"
#pragma once

class Account
{
    private:
       bool m_status = false;
       std::vector<Money> withdraw;
       std::vector<Money> deposit;
       Money m_balance;

    public:
        Account(Money);
        void makeDeposit(Money);
        void makeWithdrawls(Money);
        Money updateBalance();
        friend std::ostream &operator << (std::ostream &strm, Account &obj);
};