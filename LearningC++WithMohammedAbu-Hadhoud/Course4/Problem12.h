#include <iostream>

using namespace std;

int ReadIntegerNumber(const string& Message)
{
    cout << Message;

    int Number = 0; 
    
    cin >> Number;

    return Number;
}

void ReadTwoNumbers(int& FirstNumber, int& SecondNumber)
{
    FirstNumber = ReadIntegerNumber("Enter the first number: ");
    SecondNumber = ReadIntegerNumber("Enter the second number: ");
}

int MaxOfTwoNumbers(int FirstNumber, int SeccondNumber)
{
    if(FirstNumber > SeccondNumber)
        return FirstNumber;

    else 
        return SeccondNumber;
}

void PrintResult(int Number)
{
    cout << "The max number is " << Number << endl;
}

void GreetingPage()
{
    cout << "***********************************************\n";
    cout << "Which Number is greater, let's know now\n";
    cout << "***********************************************\n";
}

void Print()
{
    int FirstNumber = 0;
    int SecondNumber = 0;
    system("cls");
    system("color 0A");
    GreetingPage();
    ReadTwoNumbers(FirstNumber, SecondNumber);
    PrintResult(MaxOfTwoNumbers(FirstNumber, SecondNumber));
}