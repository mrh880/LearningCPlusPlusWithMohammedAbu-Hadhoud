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

float CircleAreaAlongTheCircumference(float A, float B, float C)
{
    float P = (A + B + C) / 2;
    // float Result =  ((A * B * C ) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))));
    // Result = Result * Result;
    // Result = Result * PI;
    // return Result;
    return PI * pow(((A * B * C ) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)))), 2);
}


void Print()
{
    cout << "Enter A: ";
    float A = GetFloatNumber();

    cout << "Enter B: ";
    float B = GetFloatNumber();

    cout << "Enter C: ";
    float C = GetFloatNumber();

    float Area = CircleAreaAlongTheCircumference(A, B, C);

    Area = round(Area);

    cout << "Area is " << Area << endl;
}
