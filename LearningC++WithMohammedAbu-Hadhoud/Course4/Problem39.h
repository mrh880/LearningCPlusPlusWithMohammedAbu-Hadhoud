#include <iostream>

using namespace std;

float ReadPositiveNumber(const string& Message)
{
    float Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(Number <= 0);

    return Number;
}

float Remainder(float TotalBill, float CashPaid)
{
    return CashPaid - TotalBill;
}

void GreetingMessage()
{
    cout << "******************************************************************\n";
    cout << "Did you pay for a bill, how much is back for your, let's know now!\n";
    cout << "******************************************************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    cout << "***********************************\n";
    float TotalBill = ReadPositiveNumber("Enter total bill: ");
    float CashPaid = ReadPositiveNumber("Enter how much cash was paid: ");
    cout << "***********************************\n";
    cout << "***********************************\n";
    cout << "Remainder is " << Remainder(TotalBill, CashPaid) << endl;
    cout << "***********************************\n";
}