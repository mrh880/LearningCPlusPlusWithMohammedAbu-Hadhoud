#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

void PrintNumberFrom1ToN(short Number)
{
    cout << "*******************************************\n";
    short loop = 1;
    while(loop <= Number)
    {
        cout << loop << endl;
        loop++;
    }
    cout << "*******************************************\n";
}

void Print()
{
    short Number = ReadShortNumber("Enter a number: ");
    PrintNumberFrom1ToN(Number);
}