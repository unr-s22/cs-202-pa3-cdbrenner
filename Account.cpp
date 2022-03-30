#include "Account.h"


Account::Account(Money money)
{
    m_balance = money;
    deposit.push_back(m_balance);
}

void Account::makeDeposit(Money money)
{
    deposit.push_back(money);
    m_status = true;
}

void Account::makeWithdrawls(Money money)
{
    withdraw.push_back(money);
    m_status = true;
}

Money Account::updateBalance()
{
    m_status = false;

    Money deposits;
    for(int i = 0; i < deposit.size(); i++)
    {
        deposits = deposits + deposit[i];
    }

    Money withdrawls;
    for(int i = 0; i < withdraw.size(); i++)
    {
        withdrawls = withdrawls + withdraw[i];
    }

    m_balance = deposits - withdrawls;

    return m_balance;
}

std::ostream &operator << (std::ostream &strm, Account &obj)
{
    
    if (obj.m_status == false)
    {
        std::cout << "Account Details" << std::endl;
        std::cout << "-------------------------" << std::endl;
        std::cout << "Current Balance: " << obj.m_balance << std::endl;
        std::cout << "-------------------------" << std::endl;
        std::cout << "Number of Deposits: " << obj.deposit.size() - 1 << std::endl;
        std::cout << "-------------------------" << std::endl;
        for(int i = 1; i < obj.deposit.size(); i++)
        {
            std::cout << "(" << i << ") " << obj.deposit[i] << std::endl;
        }
        std::cout << "-------------------------" << std::endl;
        std::cout << "Number of Withdrawls: " << obj.withdraw.size() << std::endl;
        std::cout << "-------------------------" << std::endl;
        for(int i = 0; i < obj.withdraw.size(); i++)
        {
            std::cout << "(" << i + 1 << ") " << obj.withdraw[i] << std::endl;
        }

        return strm;
    }

    else
        std::cout << "Account Details" << std::endl;
        std::cout << "-------------------------" << std::endl;
        std::cout << "Current Balance: " << obj.updateBalance() << std::endl;
        std::cout << "-------------------------" << std::endl;
        std::cout << "Number of Deposits: " << obj.deposit.size() - 1 << std::endl;
        std::cout << "-------------------------" << std::endl;
        for(int i = 1; i < obj.deposit.size(); i++)
        {
            std::cout << "(" << i << ") " << obj.deposit[i] << std::endl;
        }
        std::cout << "-------------------------" << std::endl;
        std::cout << "Number of Withdrawls: " << obj.withdraw.size() << std::endl;
        std::cout << "-------------------------" << std::endl;
        for(int i = 0; i < obj.withdraw.size(); i++)
        {
            std::cout << "(" << i + 1 << ") " << obj.withdraw[i] << std::endl;
        }
        
        return strm;
}

