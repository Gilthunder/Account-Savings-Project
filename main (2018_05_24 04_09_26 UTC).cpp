//Jose Gil Santaella Colon cecs.2203-21
//Lab.10
/*This is a program that asks the user to
 open a savings account and computes the
 deposits, withdrawal and the remaining balance */

#include <iostream>
#include "SavingsAccount.h"//includes class savings account's file
#include <cstring>

using namespace std;

int main()
{
    char another ='y';
    int dollar, cent;

    string line;
    line.assign(50, '-');

        //Prompts the user to input initial deposit to open account.

        cout <<"Open a Savings account" <<endl;

        cout << line << endl;

        cout<<"Input the initial dollars: "<<endl;
        cin>>dollar;
        cout<<"Input the initial cents: "<<endl;
        cin>>cent;

        //Object of Savings Account
        SavingsAccount bank1(dollar,cent);

        cout << line << endl;

       //Promps the user to make a deposit
        cout<<"Would you like to make a deposit? Y/N"<<endl;
        cin >>another;

        cout << line << endl;

        while (another == 'Y'|| another == 'y')
        {

        cout << "Input Dollars to Deposit:"<<endl;
        cin >> dollar;
        cout << "Input Cents to Deposit:"<<endl;
        cin >> cent;
        bank1.setDeposit(dollar, cent);//calls for the setDeposit member function
        bank1.DisplayBalance(); //Calls for the display member function  and outputs the balance

        cout<<"Would you like to make another deposit? Y/N"<<endl;
        cin >>another;
        }

        cout << line << endl;

        //prompts the user to make a withdrawal
        cout<<"Would you like to make a withdrawal? Y/N"<<endl;
        cin >>another;

        cout << line << endl;

        while (another == 'Y'|| another == 'y')
        {
            cout<<"Input the dollars to be withdrawn: ";
            cin>>dollar;
            cout<<"Input the cents to be withdrawn: ";
            cin>>cent;
            bank1.setWithdrawal(dollar,cent);//calls for member function and withdraws the amount inputted and then computes remaining amount
            bank1.DisplayBalance();
            cout<<"Would you like to make another withdrawal? Y/N"<<endl;
            cin >>another;
        }

    cout << line << endl;
    cout << "Balance: ";
    bank1.DisplayBalance();//Same as line 51


    return 0;
}
