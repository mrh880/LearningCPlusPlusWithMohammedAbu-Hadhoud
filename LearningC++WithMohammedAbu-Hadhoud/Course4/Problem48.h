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
    cout << "You want to take an amount of money? How many months you want to pay? let's know now !\n";
    PrintingAline(94);
}

float AmountToPay(int LoanAmount, int MonthsToPay)
{
    return (float) LoanAmount / MonthsToPay;
}

void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(30);
    int LoanAmount = ReadIntegerNumber("Enter Loan Amount: ");
    PrintingAline(30);
    PrintingAline(30);
    int MonthsToPay = ReadIntegerNumber("Enter how many months you want to pay: ");
    PrintingAline(30);
    cout << "You must pay " << AmountToPay(LoanAmount, MonthsToPay) << " every Months\n";
}