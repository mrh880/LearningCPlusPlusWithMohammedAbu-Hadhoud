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

    cout << "How many month you want to take to pay: ";
    int MonthsToPay = ReadShortNumber();

    int Result = TotalMonths(LoanAmount, MonthsToPay);

    cout << "You need To pay " << Result << " Every Month.";
}