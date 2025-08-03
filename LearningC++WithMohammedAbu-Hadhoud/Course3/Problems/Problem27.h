#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

void PrintNumberFromNTo1(short Number)
{
    cout << "*******************************************\n";
    for(short loop = Number; loop >= 1; loop--)
    cout << loop << endl;
    cout << "*******************************************\n";
}

void Print()
{
    short Number = ReadShortNumber("Enter a number: ");
    PrintNumberFromNTo1(Number);
}