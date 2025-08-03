#include <iostream>

using namespace std;

int ReadIntegerNumber(const string& Message)
{
    cout << Message;

    int Number = 0; 

    cin >> Number;

    return Number;
}

void PrintNumbersFromNTo1(int N)
{
    for(int loop = N; loop >= 1; loop--)
        cout << loop << endl;
}

void GreetingMessage()
{
    cout << "****************************************************************\n";
    cout << "Printing Numbers form N to 1 where (N is a number you choose) :)\n";
    cout << "****************************************************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    PrintNumbersFromNTo1(ReadIntegerNumber("Enter a number: "));
}