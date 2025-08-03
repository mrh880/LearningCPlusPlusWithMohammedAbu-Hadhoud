#include <iostream>

using namespace std;

float GetFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

float CalculateAreaOfRectangle(float Number1, float Number2)
{
    return Number1  * Number2;
}

void Print()
{
    cout << "Enter the Hight: ";
    float Hight = GetFloatNumber();

    cout << "Enter the Width: ";
    float Width = GetFloatNumber();

    float Area = CalculateAreaOfRectangle(Hight, Width);

    cout << "Area is " << Area << endl;  
}