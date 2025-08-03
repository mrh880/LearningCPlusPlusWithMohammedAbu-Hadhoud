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

const float PI = 3.141593653589793238;

float CalculatingCircleAreaDescribedAroundAnArbitraryTriangle(float A, float B, float C)
{
    float P = (A + B + C) / 2;
    return PI * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2);
}

void PrintResult(float Area)
{
    cout << "CircleArea = " << Area << endl;
}

void GreetingMessage()
{
    cout << "*******************************************************\n";
    cout << "CalculatingCircleAreaDescribedAroundAnArbitraryTriangle\n";
    cout << "*******************************************************\n";
}

void DrawingLineOfStars()
{
    cout << "***********************************\n";
}


void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();  
    DrawingLineOfStars();
    float A = ReadFloatingPointNumber("Enter A: ");
    float B = ReadFloatingPointNumber("Enter B: ");
    float C = ReadFloatingPointNumber("Enter C: ");
    PrintResult(CalculatingCircleAreaDescribedAroundAnArbitraryTriangle(A, B, C));
    DrawingLineOfStars();   
}