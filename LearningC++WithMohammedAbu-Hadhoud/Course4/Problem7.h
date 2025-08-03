#include <iostream>

using namespace std;

float ReadFloatNumber(const string& Message)
{
    cout << Message;

    float Number = 0;

    cin >> Number;

    return Number;
}

float GetHalfOf_A_Number(float Number)
{
    return Number / 2;
}


void PrintResult(float Number)
{
    cout << "The half of " << Number << " " << GetHalfOf_A_Number(Number) << endl;
}

void Print()
{
    PrintResult(ReadFloatNumber("Enter a number: ")); 
}