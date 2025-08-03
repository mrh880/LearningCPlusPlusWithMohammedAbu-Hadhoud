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

float CalculatingCircleAreaAloneTheCircumference(float L)
{
    return (pow(L, 2)) / (4 * PI);
}

void PrintResult(float Area)
{
    cout << "CircleArea = " << Area << endl;
}

void GreetingMessage()
{
    cout << "******************************************\n";
    cout << "CalculatingCircleAreaAloneTheCircumference\n";
    cout << "******************************************\n";
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
    PrintResult(CalculatingCircleAreaAloneTheCircumference(ReadFloatingPointNumber("Enter L: ")));
    DrawingLineOfStars();   
}