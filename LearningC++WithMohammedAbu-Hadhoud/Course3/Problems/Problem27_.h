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
    while(Number >= 1)
    {
        cout << Number << endl;

        Number--;
    }
    cout << "*******************************************\n";
}

void Print()
{
    short Number = ReadShortNumber("Enter a number: ");
    PrintNumberFromNTo1(Number);
}