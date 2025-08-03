#include <iostream>

using namespace std;

enum enChoice {even = 1, odd = 2, All = 3};

enum enEvenOrOdd {Even = 0, Odd = 1};

int ReadIntegerNumber(const string& Message)
{
    cout << Message;

    int Number = 0;

    cin >> Number;

    return Number;
}

bool isNumberBetweenTwoNumbers(int Number, int From, int To);

short ReadShortNumber(const string& Message)
{
    short Number = 0;

    do
    {
        cout << Message;
        cin >> Number;
    } while(!isNumberBetweenTwoNumbers(Number, 1, 3));

    return Number;
}

void PrintMenu()
{
    cout << "**********************************************\n";
    cout << "(1): Calculate even number\n";
    cout << "(2): Calculate odd numbers\n";
    cout << "(3): calculate All (BOTH EVEN AND ODD NUMBERS)\n";
    cout << "**********************************************\n";

}

enChoice GetChoice(short Number)
{
    if(Number == 1)
        return enChoice::even;

    else if(Number == 2)
        return enChoice::odd;
        
    else 
        return enChoice::All;
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

int SumOfOddNumberFrom1ToN(int N)
{
    int Sum = 0;

    for(int loop = 1; loop <= N; loop++)
    if(CheckEvenOrOdd(loop) == enEvenOrOdd::Odd)
        Sum += loop;

    return Sum;
}

int SumOfAllEvenAndOddNumbersForm1ToN(int N)
{
     int Sum = 0;

    for(int loop = 1; loop <= N; loop++)
        Sum += loop;

    return Sum;
}

void GreetingMessage()
{
    cout << "********************\n";
    cout << "Calculating Numbers!\n";
    cout << "********************\n";
}

bool isNumberBetweenTwoNumbers(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

void PrintResult(enChoice Choice)
{
    int Number = ReadIntegerNumber("Enter a number to calculate the sum of it: ");

    if(Choice == enChoice::even)
        cout << "The sum of even numbers from 1 to " << Number << " are " << SumOfEvenNumberFrom1ToN(Number) << endl;

    else if(Choice == enChoice::odd)
        cout << "The sum of all odd numbers from 1 to " << Number << " are " << SumOfOddNumberFrom1ToN(Number) << endl;

    else 
        cout << "The sum of all even and odd numbers form 1 to " << Number << " are " << SumOfAllEvenAndOddNumbersForm1ToN(Number) << endl; 
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    PrintMenu();
    short Number = ReadShortNumber("Choose a number: ");
    PrintResult(GetChoice(Number));
}

