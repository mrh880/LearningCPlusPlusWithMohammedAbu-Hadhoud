#include <iostream>

using namespace std;

float GetFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

const float PI = 3.14;

float CalculateCircleAreaInscribedASquare(float Number1, float Number2)
{
    return PI * ((Number2 * Number2) / 4)  * ((2 * Number1 - Number2) / (2 * Number1 + Number2)); 
}

void Print()
{
    cout << "Enter A: ";
    float A = GetFloatNumber();

    
    cout << "Enter B: ";
    float B = GetFloatNumber();

    float Area = CalculateCircleAreaInscribedASquare(A, B);

    cout << "Area is " << Area << endl;
}
