#include <iostream>

using namespace std;

int ReadIntegerNumber(const string& Message)
{
    cout << Message;

    int Number = 0; 
    
    cin >> Number;

    return Number;
}

void ReadTwoNumbers(int& FirstNumber, int& SecondNumber, int& ThirdNumber)
{
    FirstNumber = ReadIntegerNumber("Enter the first number: ");
    SecondNumber = ReadIntegerNumber("Enter the second number: ");
    ThirdNumber = ReadIntegerNumber("Enter the third number: ");
}

int MaxOfThreeNumbers(int FirstNumber, int SeccondNumber, int ThirdNumber)
{
    if(FirstNumber > SeccondNumber)
    {
        if(FirstNumber > ThirdNumber)
            return FirstNumber;

        else 
            return ThirdNumber;
    }

    else 
    {
        if(SeccondNumber > ThirdNumber)
            return SeccondNumber;

        else 
            return ThirdNumber;
    }
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
    int ThirdNumber = 0;
    system("cls");
    system("color 0A");
    GreetingPage();
    ReadTwoNumbers(FirstNumber, SecondNumber, ThirdNumber);
    PrintResult(MaxOfThreeNumbers(FirstNumber, SecondNumber, ThirdNumber));
}