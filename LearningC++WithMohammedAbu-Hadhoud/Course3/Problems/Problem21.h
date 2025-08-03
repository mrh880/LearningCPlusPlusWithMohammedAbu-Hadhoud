#include <iostream>

using namespace std;

float GetFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

const float PI = 3.14;

float CalculateCircleAreaInscribedASquare(float Number)
{
    return (Number * Number) / (PI * 4);
}

void Print()
{
    cout << "Enter L: ";
    float L = GetFloatNumber();

    float Area = CalculateCircleAreaInscribedASquare(L);

    cout << "Area is " << Area << endl;
}
