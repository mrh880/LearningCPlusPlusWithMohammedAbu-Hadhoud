#include <iostream>

using namespace std;

static short Counter = 0;

short GetShortNumber()
{
    short Number = 0;
    cout << "Enter number (" << ++Counter << "): " ;
    cin >> Number;

    return Number;
}

void PrintNumbers(short FirstNumber, short SecondNumber)
{
    cout << "First Number = " << FirstNumber << endl;
    cout << "Second Number = " << SecondNumber << endl;

}

void swap(short* FirstNumber, short* SecondNumber)
{
    short Temp = *FirstNumber;
    *FirstNumber = *SecondNumber;
    *SecondNumber = Temp;
}

void Print()
{
    short FirstNumber = GetShortNumber();
    short SecondNumber = GetShortNumber();

    cout << "Before swapping\n";
    cout << "***********************************************\n";
    PrintNumbers(FirstNumber, SecondNumber);
    cout << "***********************************************\n";

    swap(&FirstNumber, &SecondNumber);
    
    cout << "After swapping\n";
    cout << "***********************************************\n";
    PrintNumbers(FirstNumber, SecondNumber);
    cout << "***********************************************\n";
}