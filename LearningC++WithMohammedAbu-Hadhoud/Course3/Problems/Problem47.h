#include <iostream>

using namespace std;

int ReadShortNumber()
{
    int Number = 0;

    cin >> Number;

    return Number; 
}

int TotalMonths(int Number1 , int Number2)
{
    return Number1 / Number2;
}


void Print()
{
    cout << "How much money do you want: ";
    int LoanAmount = ReadShortNumber();

    cout << "How much you can pay every month: ";
    int MonthlyInstallment = ReadShortNumber();

    short Result = TotalMonths(LoanAmount, MonthlyInstallment);

    cout << "You need " << Result << " month to settle the loan.";


}