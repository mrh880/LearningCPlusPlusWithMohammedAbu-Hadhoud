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

float CalculatingCircleArea(float R)
{
    return (PI * pow(R, 2));
}

void PrintResult(float Area)
{
    cout << "Rectangle area = " << Area << endl;
}

void GreetingMessage()
{
    cout << "***********************\n";
    cout << "CalculatingCircleArea\n";
    cout << "************************\n";
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
    float R = ReadFloatingPointNumber("Enter R: ");
    DrawingLineOfStars();   
    PrintResult(CalculatingCircleArea(R));
}