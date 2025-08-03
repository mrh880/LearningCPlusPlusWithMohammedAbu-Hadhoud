#include <iostream>

using namespace std;

short ReadShortNumber()
{
    short Number = 0;

    cin >> Number;

    return Number;
}

void swap(short &FirstNumber, short &SecondNumber)
{
    short Temp = FirstNumber;
    FirstNumber = SecondNumber;
    SecondNumber = Temp;
}

void Print()
{
    cout << "Enter the first number: ";
    short FirstNumber = ReadShortNumber();

    cout << "Enter the second number: ";
    short SecondNumber = ReadShortNumber();

    cout << "Before swapping\n";
    cout << "******************************\n";
    cout << "First number = " << FirstNumber << endl;
    cout << "Second number = " << SecondNumber << endl;
    cout << "******************************\n";

    swap(FirstNumber, SecondNumber);

     cout << "After swapping\n";
    cout << "******************************\n";
    cout << "First number = " << FirstNumber << endl;
    cout << "Second number = " << SecondNumber << endl;
    cout << "******************************\n";
}