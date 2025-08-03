#include <iostream>

using namespace std;

int ReadIntegerNumber(const string& Message)
{
    cout << Message;

    short Number = 0; 

    cin >> Number;

    return Number;
}

void ReadThreeNumbers(int &FirstNumber, int &SecondNumber, int &ThirdNumber)
{
    FirstNumber = ReadIntegerNumber("Entre the first number: ");
    SecondNumber = ReadIntegerNumber("Enter the second number: ");
    ThirdNumber = ReadIntegerNumber("Enter the third number: ");
}

int SumOfThreeNumbers(int FirstNumber, int SecondNumber, int ThirdNumber)
{
    return(FirstNumber + SecondNumber + ThirdNumber);
}

void PrintTheResult(int Number)
{
    cout << "The Sum of three numbers is " << Number << endl;
}

void Print()
{
    int FirstNumber = 0;
    int SecondNumber = 0; 
    int ThirdNumber = 0;

    ReadThreeNumbers(FirstNumber, SecondNumber, ThirdNumber);
    PrintTheResult(SumOfThreeNumbers(FirstNumber, SecondNumber, ThirdNumber));  

}