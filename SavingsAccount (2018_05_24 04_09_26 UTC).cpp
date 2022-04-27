//Jose Gil Santaella Colon cecs.2203-21
//Lab.10
//SavingsAccount Implementation
#include "SavingsAccount.h"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount()
{
    dollars = 0;
    cents = 0;
}
SavingsAccount::SavingsAccount(int dol,int cen)
{
    dollars = dol;
    cents = cen;
}

void SavingsAccount::setDeposit(int dedol, int decen)
{
       dollars+=dedol;
       cents+=decen;

       //Normalize cents and dollars
       int extra=cents/100;
       dollars+=extra;
       cents=cents-extra*100;



}
void SavingsAccount::setWithdrawal(int wdol, int wcen)
{
    int extra;

       if(wcen>100)
       {
           extra=wcen%100;
           wdol+=extra;
           wcen-=(wcen/100);
       }
       if(wdol>dollars)
       {
           cout<<"Insufficient funds\n";
           return;
       }
       //Normalize cents and dollars
       dollars-=wdol;
       cents-=wcen;

       if(cents<0)
       {
           dollars--;
           cents+=100;
       }
}
void SavingsAccount::DisplayBalance()
{
    cout <<"Dollars: "<<dollars<<" Cents: "<<cents<<endl;
}
