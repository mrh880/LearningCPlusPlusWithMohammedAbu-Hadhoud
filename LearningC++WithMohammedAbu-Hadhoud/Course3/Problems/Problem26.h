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
    for(short loop = 1; loop <= Number; loop++)
    cout << loop << endl;
    cout << "*******************************************\n";
}

void Print()
{
    short Number = ReadShortNumber("Enter a number: ");
    PrintNumberFrom1ToN(Number);
}