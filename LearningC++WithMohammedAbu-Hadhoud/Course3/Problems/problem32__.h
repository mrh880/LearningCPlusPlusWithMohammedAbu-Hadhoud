#include <iostream>

using namespace std;

int ReadIntNumber(const string& Message)
{
    cout << Message;

    int Number = 0;

    cin >> Number;

    return Number;
}

int PowerOfAnumber(int Base, int Power)
{
    int Result = 1;
    for(short loop = 0; loop < Power; loop++)
    Result *= Base;

    return Result;
}

void Print()
{
    int Base = ReadIntNumber("Enter the base: ");
    short Power = ReadIntNumber("Enter the power: ");
    cout << Base << "^" << Power << " = " << PowerOfAnumber(Base, Power) << endl;
}