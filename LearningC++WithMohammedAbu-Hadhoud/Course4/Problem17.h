#pragma once

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

float CalculatingTriangleArea(float A, float H)
{
    return (0.5 * A * H);
}

void PrintResult(float Area)
{
    cout << "Rectangle area = " << Area << endl;
}

void GreetingMessage()
{
    cout << "***********************\n";
    cout << "CalculatingTriangleArea\n";
    cout << "************************\n";
}


void Print()
{
    cout << "\033[2J\033[H";
    // //("color 0A");
    GreetingMessage();
    float A = ReadFloatingPointNumber("Enter A: ");
    float H = ReadFloatingPointNumber("Enter H: ");
    PrintResult(CalculatingTriangleArea(A, H));
}