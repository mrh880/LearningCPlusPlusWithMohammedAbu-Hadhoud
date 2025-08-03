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

float CalculatingCircleAreaInscribedIhAnIsoscelesTriangle(float A, float B)
{
    return PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
}

void PrintResult(float Area)
{
    cout << "CircleArea = " << Area << endl;
}

void GreetingMessage()
{
    cout << "***************************************************\n";
    cout << "CalculatingCircleAreaInscribedIhAnIsoscelesTriangle\n";
    cout << "***************************************************\n";
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
    PrintResult(CalculatingCircleAreaInscribedIhAnIsoscelesTriangle(A, B));
    DrawingLineOfStars();   
}