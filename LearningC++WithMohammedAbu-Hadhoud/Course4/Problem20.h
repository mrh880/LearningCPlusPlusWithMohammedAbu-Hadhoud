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

float CalculatingCircleAreaInscribedIn_A_Square(float A)
{
    return (PI * pow(A, 2)) /   4;
}

void PrintResult(float Area)
{
    cout << "CircleArea = " << Area << endl;
}

void GreetingMessage()
{
    cout << "*****************************************\n";
    cout << "CalculatingCircleAreaInscribedIn_A_Square\n";
    cout << "*****************************************\n";
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
    PrintResult(CalculatingCircleAreaInscribedIn_A_Square(ReadFloatingPointNumber("Enter R: ")));
    DrawingLineOfStars();   
}