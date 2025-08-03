#include <iostream>

using namespace std;

enum enEvenOrOdd {Even = 0, Odd = 1};

int ReadIntegerNumber(const string& Message)
{
    cout << Message;

    int Number = 0; 

    cin >> Number;

    return Number;
}

enEvenOrOdd CheckEvenOrOdd(int Number)
{
    if(Number % 2 == 0)
        return enEvenOrOdd::Even;

    else 
        return enEvenOrOdd::Odd;
}

int SumOfEvenNumberFrom1ToN(int N)
{
    int Sum = 0;

    for(int loop = 1; loop <= N; loop++)
    if(CheckEvenOrOdd(loop) == enEvenOrOdd::Even)
        Sum += loop;

    return Sum;
}

void GreetingMessage()
{
    cout << "********************************\n";
    cout << "Summing Even numbers form 1 to n\n";
    cout << "********************************\n";
}

void PrintResult(int Number)
{
    cout << "The sum of odd numbers form 1 to " << Number << " is " << SumOfEvenNumberFrom1ToN(Number) << endl;
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    PrintResult(ReadIntegerNumber("Enter a number: "));
}