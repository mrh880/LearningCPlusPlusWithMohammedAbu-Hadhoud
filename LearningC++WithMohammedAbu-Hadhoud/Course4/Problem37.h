#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

short ReadUntil99()
{
    short Number = 0;
    short Sum = 0;

    do 
    {
        Number = ReadShortNumber("Entr a number, expect 99: ");
        if(Number != -99)
            break;
    } while(Number != -99);

    return Sum;
}

void Print()
{
    // int Sum = ReadUntil99();
    cout << "The sum of all numbers = " << ReadUntil99();
}