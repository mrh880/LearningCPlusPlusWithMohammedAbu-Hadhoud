#include <iostream>
#include <cmath>

using namespace std;

float ReadFloatingPointNumber(const string& Message)
{
    cout << Message;

    float Number = 0;

    cin >> Number;

    return Number;
}

float CalculatingRectangleAreaThroughDiagonal(float A, float D)
{
    return (A * sqrt(pow(D, 2) - pow(A, 2)));
}

void PrintResult(float Area)
{
    cout << "Rectangle area = " << Area << endl;
}

void GreetingMessage()
{
    cout << "***************************************\n";
    cout << "CalculatingRectangleAreaThroughDiagonal\n";
    cout << "***************************************\n";
}


void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    float A = ReadFloatingPointNumber("Enter A: ");
    float D = ReadFloatingPointNumber("Enter D: ");
    PrintResult(CalculatingRectangleAreaThroughDiagonal(A, D));
}