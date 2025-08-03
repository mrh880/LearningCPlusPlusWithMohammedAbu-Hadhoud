#include <iostream>

using namespace std;

float ReadFloatNumber()
{
    float  Number = 0;

    cin >> Number;

    return Number;
}


void Print()
{
    cout << "How mush your bill is: ";
    float Bill = ReadFloatNumber();

    float TotalBill = 0;

    TotalBill = Bill * 1.1;
    TotalBill = TotalBill * 1.16;

    cout << "Your Total Bill is " << TotalBill << endl;
}