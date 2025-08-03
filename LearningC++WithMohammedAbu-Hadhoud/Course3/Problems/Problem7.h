#include <iostream>

using namespace std;

short GetShortNumber()
{
    short Number = 0;
    cout << "Enter a number: ";
    cin >> Number;

    return Number;
}

void PrintHalfOfANumber(short Number)
{
    cout << "The half of the number you entered is " << Number / 2;
}

void Print()
{
    short Number = GetShortNumber();
    PrintHalfOfANumber(Number);
}