#include <iostream>

using namespace std;

static short Counter = 0;

short GetShortNumber()
{
    short Number = 0;
    cout << "Enter number (" << ++Counter << "): "; 
    cin >> Number;

    return Number;
}


void PrintTheSumOf3Numbers(short Number1, short Number2, short Number3)
{
    short Sum = Number1 + Number2 + Number3;
    cout << "The sum of " << Number1 << " + " << Number2 << " + " << Number3 << " = " << Sum << endl;

    cout << endl;
}

void Print()
{
    short Number1 = GetShortNumber();
    short Number2 = GetShortNumber();
    short Number3 = GetShortNumber();

    PrintTheSumOf3Numbers(Number1, Number2, Number3);
}

