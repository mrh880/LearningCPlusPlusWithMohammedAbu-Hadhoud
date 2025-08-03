#include <iostream>

using namespace std;

int ReadIntegerNumber(const string& Message)
{
    int Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(Number <= 0);

    return Number;
}

float TotalMonthsToPay(int LoanAmount, int MonthlyPayment)
{
    return (float) LoanAmount / MonthlyPayment; 
}

void ClearingScreenAndGettingGreenColor()
{
    system("cls");
    system("color 0A");
}

void PrintingAline(short lengthOfLine)
{
    for(short loop = 0; loop < lengthOfLine; loop++)
    cout << "*";
    cout << "\n";
}

void GreetingMessage()
{
    PrintingAline(94);
    cout << "You want to take an amount of money? How much you can pay every month? let's know now !\n";
    PrintingAline(94);
}


void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(25);
    int LoanAmount = ReadIntegerNumber("Enter Loan Amount: ");
    int MonthlyPayment = ReadIntegerNumber("Enter Monthly Payment: ");
    PrintingAline(26);
    PrintingAline(22);
    cout << "You need " << TotalMonthsToPay(LoanAmount, MonthlyPayment) << " Months\n";
    PrintingAline(22);
}