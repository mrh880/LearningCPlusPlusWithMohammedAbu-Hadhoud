#include <iostream>

using namespace std;

int ReadIntegerNumber(const string& Message)
{
    cout << Message;

    int Number = 0;

    cin >> Number;

    return Number;
}

void SwapTowNumbers(int& FirstNumber, int& SecondNumber)
{
    int Temp = FirstNumber;
    FirstNumber = SecondNumber;
    SecondNumber = Temp;
}

void GreetingMessage()
{
    cout << "******************************************\n";
    cout << "Swapping two number\n";
    cout << "******************************************\n";
}

void DisplayBeforSwapping(int FirstNumber, int SecondNumber)
{
    cout << "*************************\n";
    cout << "Befor swapping\n";
    cout << "First number = " << FirstNumber << endl;
    cout << "Second number = " << SecondNumber << endl;
    cout << "*************************\n";
}

void DisplayAfterSwapping(int FirstNumber, int SecondNumber)
{
    cout << "*************************\n";
    cout << "After swapping\n";
    cout << "First number = " << FirstNumber << endl;
    cout << "Second number = " << SecondNumber << endl;
    cout << "*************************\n";
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
    int FirstNumber = ReadIntegerNumber("Enter the first number: ");
    int SecondNumber = ReadIntegerNumber("Enter the second number: ");
    DrawingLineOfStars();   
    DisplayBeforSwapping(FirstNumber, SecondNumber);
    SwapTowNumbers(FirstNumber, SecondNumber);
    DisplayAfterSwapping(FirstNumber, SecondNumber);
}   