#include <iostream>
#include <cmath>

using namespace std;

float GetFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

float PI = 3.14;

float CircleArea(float R)
{
    return PI * pow(R, 2);
}


void Print()
{
    cout << "Enter R: ";
    float R = GetFloatNumber();

    float Area = CircleArea(R);
    Area = ceil(Area);

    cout << "Area is " << Area << endl;
} 