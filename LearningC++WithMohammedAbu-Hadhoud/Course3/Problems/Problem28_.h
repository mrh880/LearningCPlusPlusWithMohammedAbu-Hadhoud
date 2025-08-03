#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

bool isOddNumber(short Number)
{
    return (Number % 2 == 1);
}

void PrintNumberFrom1ToN(short Number)
{
    cout << "*************************************************************************\n";
    short Sum = 0;
    short loop = 1;
    while(loop <= Number)
    {
        if(isOddNumber(loop))
            Sum += loop;

            loop++;
    }
    cout << "The sum of all the odd numbers form 1 to " << Number << " is " << Sum << endl; 
    cout << "*************************************************************************\n";
}

void Print()
{
    short Number = ReadShortNumber("Enter a number: ");
    PrintNumberFrom1ToN(Number);
}