#include <iostream>

using namespace std;

float ReadFloatNumber()
{
    float  Number = 0;

    cin >> Number;

    return Number;
}


float Reminder(float  TotalOfBill, float TotalOfCashPaid)
{
    return TotalOfCashPaid - TotalOfBill;
}


void Print()
{
    cout << "Hom mush your Total Bill: "; 
    float TotalBill = ReadFloatNumber();
    
    cout << "How =mush the Cash Paid: ";
    float CashPaid = ReadFloatNumber();

    if(CashPaid < TotalBill)
    {
        float CashStillHaveToBePaid = TotalBill - CashPaid; 
        cout << "You STILL HAVE TO PAY " << CashStillHaveToBePaid << endl;
    }

    else if (CashPaid == TotalBill)
    cout << "Thanks the customer have paid the whole amount of Bill\n";

    else 
    cout << "The Total Amount must be paid to the costumer is " << CashPaid - TotalBill << endl;
}