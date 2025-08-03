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
    return 0.5 * Number1 * Number2;
}

void Print()
{
    cout << "Entr A: ";
    float A = GetFloatNumber();

    cout << "Enter H: ";
    float H = GetFloatNumber();
    
    float Area = CalculateAreaOfRectangle(A, H);

    cout << "Area is " << Area << endl;

}