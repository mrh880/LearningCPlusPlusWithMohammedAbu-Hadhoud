#include <iostream>

using namespace std;

float ReadFloatingPointNumber(const string& Message)
{
    cout << Message;

    float Number = 0;

        cin >> Number;

    return Number;
}

float CalculateAreaOfRectangle(float Height, float Width)
{
    return Width * Height;
}

void PrintResult(float Area)
{
    cout << "Rectangle area is " << Area << endl;
}

void GreetingMessage()
{
    cout << "*********************************\n";
    cout << "Calculating Area of rectangle\n";
    cout << "*********************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    float Height = ReadFloatingPointNumber("Enter Height: ");
    float Width = ReadFloatingPointNumber("Enter Width: ");
    PrintResult(CalculateAreaOfRectangle(Height, Width));
}