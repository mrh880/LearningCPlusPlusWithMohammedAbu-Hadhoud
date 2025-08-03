#include <iostream>

using namespace std;

int ReadPositiveNumber(const string& Message)
{
    int Number = 0;

    do 
    {
        cout << Message;
        cin >> Number;
    } while(Number < 0);

    return Number;
}

int CalculatingFactorialOfA_Number(int Number)
{
    int Factorial = 1;

    for(short loop = 1; loop <= Number; loop++)
        Factorial *= loop;

    return Factorial;
}

void PrintResult(int Number, int Result)
{
    cout << "The factorial of " << Number << " is " << Result << endl;
}

void GreetingMessage()
{
    cout << "***********************************\n";
    cout << "Calculating  factorial of a Nnumber!\n";
    cout << "***********************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    int Number = ReadPositiveNumber("Enter a positive number: ");
    PrintResult(Number, CalculatingFactorialOfA_Number(Number));
}
