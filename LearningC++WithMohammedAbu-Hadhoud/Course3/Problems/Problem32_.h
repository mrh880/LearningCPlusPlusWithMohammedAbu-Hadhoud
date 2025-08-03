#include <iostream>
#include <cmath>

using namespace std;

float ReadFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

float _Power(float Base, float Power)
{
    return pow(Base, Power);
}

void Print()
{
    cout << "Enter the Base: ";
    float Base = ReadFloatNumber();

    cout << "Enter the power: ";
    float Power = ReadFloatNumber();
    
    float Result = _Power(Base, Power);

    Result = round(Result);

    cout << Base << "^" << Power << " = " << Result << endl;
    cout << pow(Base, Power);
    
}