#include <iostream>

using namespace std;

float GetFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

const float PI = 3.14;

float CalculateCircleAreaInscribedASquare(float Number1)
{
    return PI * (Number1 * Number1) / 4;
}

void Print()
{
    cout << "Enter A: ";
    float A = GetFloatNumber();

    float Area = CalculateCircleAreaInscribedASquare(A);

    cout << "Area is " << Area << endl;
}
