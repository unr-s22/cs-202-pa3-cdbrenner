#include "Money.h"
#include "Account.h"

int main()
{
    Money m1(300,23);
    Account a1(m1);
    
    std::cout << a1 << std::endl;

    Money m2(200,00);
    Money m3(300,24);
    Money m4(501,22);

    a1.makeDeposit(m2);
    a1.makeDeposit(m3);
    a1.makeDeposit(m4);

    std::cout << a1 << std::endl;

    Money m5(300,10);
    Money m6(201,34);

    a1.makeWithdrawls(m5);
    a1.makeWithdrawls(m6);

    std::cout << a1 << std::endl << std::endl;

    Money m7(200,00);

    std::cout << "******************************************" << std::endl;
    std::cout << "PROOF OF RELATIONAL OPERATOR OVERLOADS:" << std::endl;
    std::cout << "******************************************" << std::endl;
    std::cout << "A = " << m1 << "; B = " << m2 << "; C = " << m7 << std::endl;
    std::cout << "******************************************" << std::endl;
    
    std::cout << "A > B: ";
    if(m1 > m2)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    
    std::cout << "B > A: ";
    if(m2 > m1)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    
    std::cout << "B > C: ";
    if(m2 > m7)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "*************" << std::endl;

    std::cout << "A < B: ";
    if(m1 < m2)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "B < A: ";
    if(m2 < m1)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "B < C: ";
    if(m2 < m7)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "*************" << std::endl;

    std::cout << "A >= B: ";
    if(m1 >= m2)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "B >= A: ";
    if(m2 >= m1)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "B >= C: ";
    if(m2 >= m7)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "*************" << std::endl;

    std::cout << "A <= B: ";
    if(m1 <= m2)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "B <= A: ";
    if(m2 <= m1)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "B <= C: ";
    if(m2 <= m7)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "*************" << std::endl;

    std::cout << "A == B: ";
    if(m1 == m2)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "B == A: ";
    if(m2 == m1)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "B == C: ";
    if(m2 == m7)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "*************" << std::endl;

    std::cout << "A != B: ";
    if(m1 != m2)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "B != A: ";
    if(m2 != m1)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "B != C: ";
    if(m2 != m7)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "*************" << std::endl;



}
