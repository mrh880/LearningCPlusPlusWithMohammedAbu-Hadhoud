#include <iostream>

using namespace std;

short ReadShortNumber()
{
    short Number = 0;

    cin >> Number;

    return Number;
}

void MySumProcedure()
{
    cout << "Please enter Number1?\n";
    short Number1 = ReadShortNumber();

    cout << "Please Enter Number2?\n";
    short Number2 = ReadShortNumber();

    cout << "***************************\n";
    cout << Number1 + Number2 << endl;
}


short MySumFunction()
{
    cout << "Enter Number1?\n";
    short Number1 = ReadShortNumber();

     cout << "Please Enter Number2?\n";
    short Number2 = ReadShortNumber();

    cout << "***************************\n";

    return Number1 + Number2;
}

void Print()
{
    // MySumProcedure();
    cout << MySumFunction() << endl;l
}