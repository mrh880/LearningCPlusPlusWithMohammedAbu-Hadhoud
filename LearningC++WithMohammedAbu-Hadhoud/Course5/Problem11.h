#include <iostream>

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
    PrintingAline(94);
    cout << "You want to see if a number is palindrome? lts's do it now !\n";
    cout << "palindrome is a number which you can read from the left to the right or form the right\n";
    cout << "For example 1234 is not palindrome\n";
    cout << "121 is palindrome\n";
    PrintingAline(94);
}

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
    int Number = ReadPositiveNumber("Enter a positive number: ");
    PrintingAline(30);

    if (Number == ReverseNumber(Number))
    {
        PrintingAline(20);
        cout << Number << "  is palindrome\n";
        PrintingAline(20);
    }
    else 
    {
        PrintingAline(20);
        cout << Number << " is not palindrome\n";
        PrintingAline(20);
    }
}
