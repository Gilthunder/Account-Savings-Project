//Jose Gil Santaella Colon cecs.2203-21
//Lab.10
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H


class SavingsAccount
{
    //Member data
    private:
        int dollars;
        int cents;

    public:
        SavingsAccount();
        SavingsAccount(int,int);
        void setDeposit(int,int);
        void setWithdrawal(int,int);
        void DisplayBalance();




};

#endif // SAVINGSACCOUNT_H
