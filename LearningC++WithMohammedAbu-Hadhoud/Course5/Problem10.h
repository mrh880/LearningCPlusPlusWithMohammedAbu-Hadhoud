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
    cout << "You want to see number but in reverse order? but with the same order? let's see now !\n";
    PrintingAline(66);
}

int GetNumberInReverseWay(int Number)
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

void PrintNumberInReverseWay(int Number)
{
    cout << "Number in reverse way is \n";
    PrintingAline(30);
    int Remainder = 0;

    while(Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
    PrintingAline(30);
}



void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(30);
    int Number = ReadPositiveNumber("Enter a number: ");
    PrintingAline(30);
    PrintNumberInReverseWay(GetNumberInReverseWay(Number));
}