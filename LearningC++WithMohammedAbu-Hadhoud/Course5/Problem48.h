#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber(const string& Message)
{
    cout << Message;

    float Number = 0;

    cin >> Number;

    return Number;
}

int MyFloor(float Number)
{
    if(Number >= 0) // if positive
        return Number;
    else // if negative
        return --Number;
}

void Print()
{
    float Number = ReadNumber("Enter a number: ");
    cout << "My Floor " << Number << " = " << MyFloor(Number) << endl;
    cout << "C++ Floor " << Number << " = " << floor(Number);
}