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
    PrintingAline(66);
    cout << "You want to sum the digit of a number? let's do it now  !\n";
    PrintingAline(66);
}

short SumDigitsOfNumber(int Number )
{
    // Nnumber = 12

    int Remainder = 0;
    int Sum = 0; 

    while(Number > 0)
    {
        Remainder = Number % 10; // 1 
        Number = Number / 10; //  1 
        Sum += Remainder;
    }

    return Sum; 
}

void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(30);
    int Number = ReadPositiveNumber("Enter a number: ");
    PrintingAline(30);

    PrintingAline(40);
    cout << "The sum of the digit of " << Number << " = " << SumDigitsOfNumber(Number) << endl; 
    PrintingAline(40);
}