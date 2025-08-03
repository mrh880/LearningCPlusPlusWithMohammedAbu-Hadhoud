#include <iostream>

using namespace std;

int ReadIntegerNumber(const string& Message)
{
    cout << Message;

    int Number = 0; 

    cin >> Number;

    return Number;
}

void PrintNumbersFrom1ToN(int N)
{
    for(int loop = 1; loop <= N; loop++)
        cout << loop << endl;
}

void GreetingMessage()
{
    cout << "*************************************************\n";
    cout << "Printing Numbers form 1 to a number you choose :)\n";
    cout << "*************************************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    PrintNumbersFrom1ToN(ReadIntegerNumber("Enter a number: "));
}