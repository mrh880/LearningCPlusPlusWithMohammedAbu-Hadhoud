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

float CircleAreaAlongTheCircumference(float L)
{
    return (pow(L, 2)) / (4 * PI);
}

void Print()
{
    cout << "Enter L: ";
    float L = GetFloatNumber();

    float Area = CircleAreaAlongTheCircumference(L);

    Area = floor(Area);

    cout << "Area is " << Area << endl;
}
