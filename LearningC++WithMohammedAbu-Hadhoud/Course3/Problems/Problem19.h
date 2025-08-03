#include <iostream>

using namespace std;

float GetFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

const float PI = 3.14;

float CalculateAreaOfRectangle(float Number1)
{
    return (PI * (Number1 * Number1)) / 4;
}

void Print()
{
    cout << "Enter D: ";
    float D = GetFloatNumber();

    float Area = CalculateAreaOfRectangle(D);

    cout << "Area is " << Area << endl;

}