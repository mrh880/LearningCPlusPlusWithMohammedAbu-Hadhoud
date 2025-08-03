#include <iostream>
#include <cmath>

using namespace std;


int ReadPositiveNumber(const string& Message)
{
    int Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(Number <= 0);

    return Number;
}

void PrintingAline(short lengthOfLine)
{
    for(short loop = 0; loop < lengthOfLine; loop++)
    cout << "*";
    cout << "\n";
}

void ClearingScreenAndGettingGreenColor()
{
    system("cls");
    system("color 0A");
}

void GreetingMessage()
{
    PrintingAline(66);
    cout << "You want to Reverse a number, let's do it now !\n";
    PrintingAline(66);
}

// short GetHowManyNumbersInNumber(int Number)
// {
//     int Counter = 0;
//     int short Remainder = 0;

//     while(Number > 0)
//     {
//         Remainder = Number % 10;
//         Number = Number / 10;
//         Counter++;
//     }

//     return Counter;
// }

// int NumberInReverse(int Number )
// {
//     // Nnumber = 12

//     int Remainder = 0;
//     int Sum = 0; 
//     int Counter = pow(10, GetHowManyNumbersInNumber(Number) - 1);

//     while(Number > 0)
//     {
//         Remainder = Number % 10; // 4
//         Number = Number / 10; // 123
//         Sum = Sum + (Remainder * Counter);
//         Counter = Counter / 10;
//     }

//     return Sum;
// }

int ReverseNumber(int Number)
{
    int Remainder = 0;
    int Result = 0;

    while(Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Result = Result  * 10 + Remainder;
    }
    return Result;
}

void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(30);
    int Number = ReadPositiveNumber("Enter a number: ");
    PrintingAline(30);

    PrintingAline(40);
    cout << "The number after it's reversed = " <<  " = " << ReverseNumber(Number) << endl; 
    PrintingAline(40);
}