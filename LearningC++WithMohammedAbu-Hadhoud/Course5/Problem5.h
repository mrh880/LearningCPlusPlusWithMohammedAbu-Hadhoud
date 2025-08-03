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
    cout << "You want to see number but in reverse order? let's see now !\n";
    PrintingAline(66);
}


void PrintDigitsOfNumberInReverseOrder(int Number)
{
    int Remainder = 0;

    PrintingAline(40);
    cout << Number << " in reverse order is " << endl;
    PrintingAline(40);

    while(Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;    
    }
}

void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(30);
    PrintDigitsOfNumberInReverseOrder(ReadPositiveNumber("Enter a positive number: "));
    PrintingAline(30);
}