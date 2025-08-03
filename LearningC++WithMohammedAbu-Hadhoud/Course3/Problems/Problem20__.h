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

float CircleAreaInscribedASquare(float A)
{
    // return PI * (pow(A /2, 2));
    return (PI * pow(A, 2)) / (4);
}

void Print()
{
    cout << "Enter A: ";
    float A = GetFloatNumber();

    float Area = CircleAreaInscribedASquare(A);

    Area = ceil(Area);

    cout << "Area is " << Area << endl;
}