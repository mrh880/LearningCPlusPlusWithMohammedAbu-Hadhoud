#include <iostream>
#include <cmath>

using namespace std;

float GetFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

const float PI = 3.14;

float CircleAreaAlongTheCircumference(float A, float B)
{
    return PI * ((pow(B, 2)) / (4)) * ((2 * A - B) / (2 * A + B));
}

void Print()
{
    cout << "Enter A: ";
    float A = GetFloatNumber();

    cout << "Enter B: ";
    float B = GetFloatNumber();

    float Area = CircleAreaAlongTheCircumference(A, B);

    Area = floor(Area);

    cout << "Area is " << Area << endl;
}
