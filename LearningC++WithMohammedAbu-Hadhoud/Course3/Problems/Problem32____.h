#include <iostream>

using namespace std;

short ReadIntegerNumber(const string& Message)
{
    cout << Message;

    short Number = 0; 

    cin >> Number;

    return Number;
}


short MyPower(int Base, int Power)
{
    int Result = 1;

    for(short loop = 0; loop < Power; loop++)
    {
        Result *= Base;
    }

    return Result;
}
void Print()
{
    short Base = ReadIntegerNumber("Enter the base: ");
    short Power = ReadIntegerNumber("Enter the power: ");
    
    cout << Base << " ^ " << Power <<  " = " << MyPower(Base, Power);
}