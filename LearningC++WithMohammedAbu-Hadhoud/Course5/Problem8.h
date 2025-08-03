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
    cout << "You want  to know how many times a digit appears in a number? let's know now !\n";
    PrintingAline(66);
}

int FrequentDigitInNumber(int Number, short FrequentNumber)
{
    int Remainder = 0;
    int Counter = 0;

    if(Number < 0)
        Number *= -1;
        
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (FrequentNumber == Remainder)
            Counter++;
    }
    return Counter;
}

void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(30);
    int Number = ReadPositiveNumber("Enter a number: ");
    PrintingAline(30);

     PrintingAline(30);
    int FrequentNumber = ReadPositiveNumber("Enter a digit: ");
    PrintingAline(30);

    PrintingAline(40);
    cout << FrequentNumber << " Has appeared " <<  " " << FrequentDigitInNumber(Number, FrequentNumber) <<  " times\n";    
    PrintingAline(40);
}