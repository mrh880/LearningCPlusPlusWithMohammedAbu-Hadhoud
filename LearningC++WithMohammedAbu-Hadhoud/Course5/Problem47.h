#include <iostream>
#include <cmath>

using namespace std;

float ReadPositiveNumber(const string& Message)
{
    float Number = 0;

    cout << Message;

    cin >> Number;

    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyRound(float Number)   
{
    int IntPart = int(Number);
    float FractionPart = GetFractionPart(Number);

    if(abs(FractionPart) == FractionPart)
    {
        if(FractionPart >= 0.5)
            return ++IntPart;
        else 
            return IntPart;
    }
    
    else 
    {
        if(FractionPart <= -0.5)
            return --IntPart;
        else 
            return IntPart;
    }
}

void Print()
{
    // cout << "My Round " << MyRound(-10.7) << endl;
    cout << "My Round " << MyRound(-10.7) << endl;
    cout << "C++ Round " << round(-10.7) << endl;
}