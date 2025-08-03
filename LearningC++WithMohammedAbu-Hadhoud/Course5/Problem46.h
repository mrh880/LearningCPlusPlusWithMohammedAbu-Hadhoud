#include <iostream>
#include <cmath>

using namespace std;

void ClearingScreenAndGettingGreenColor()
{
    system("cls");
    system("color 0A");
}

float ReadPositiveNumber(const string& Message)
{
    float Number = 0;

    cout << Message;

    cin >> Number;

    return Number;
}

float MyAbs(float Number)
{
    if(Number < 0)
        return Number * -1;
    else 
        return Number;
}


void Print()
{
    ClearingScreenAndGettingGreenColor();
    cout << "Enter a number to give the abs value for it\n";
    float Number = ReadPositiveNumber("Enter a number: ");
    cout << "My abs Result: " << MyAbs(Number) << endl;
    cout << "C++ abs: " << abs(Number); 
}