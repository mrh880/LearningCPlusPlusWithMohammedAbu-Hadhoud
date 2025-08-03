#include <iostream>
#include <cmath>

using namespace std;

float GetFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

float AreaOfRetangleThroughDiagonal(float A, float D)
{
    return A * sqrt(pow(D, 2) - pow(A, 2)); 
}

void Print()
{
    cout << "Enter A: ";
    float A = GetFloatNumber();

    cout << "Enter D: ";
    float D = GetFloatNumber();

    float Area = AreaOfRetangleThroughDiagonal(A, D);

    cout << "Area is " << Area << endl;

}