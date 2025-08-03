#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

bool isEvenNumber(short Number)
{
    return (Number % 2 == 0);
}

void PrintNumberFrom1ToN(short Number)
{
    cout << "*************************************************************************\n";
    short Sum = 0;
    for(short loop = 1; loop <= Number; loop++)
    {
        if(isEvenNumber(loop))
            Sum += loop;
    }
    cout << "The sum of all the even numbers form 1 to " << Number << " is " << Sum << endl; 
    cout << "*************************************************************************\n";
}

void Print()
{
    short Number = ReadShortNumber("Enter a number: ");
    PrintNumberFrom1ToN(Number);
}