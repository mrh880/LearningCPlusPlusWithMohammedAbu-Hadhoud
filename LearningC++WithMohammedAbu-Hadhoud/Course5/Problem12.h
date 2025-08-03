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
    PrintingAline(70);
    cout << "Have ever heard about inverted patterns, i will show you it now !\n";
    PrintingAline(70);
}

void PrintNumberInInvertedPattern(short Number)
{
    cout << "This is called inverted pattern ! \n";
    PrintingAline(20); 
    for(short OuterLoop = Number; OuterLoop >= 1; OuterLoop--)
    {
        for(short InnerLoop = 1; InnerLoop <= OuterLoop; InnerLoop++)
            cout << OuterLoop << " ";
        
        cout << endl;
    }
    PrintingAline(20);
}

void Print()
{ 
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(30);
    PrintNumberInInvertedPattern(ReadPositiveNumber("Enter a positive number: "));
    PrintingAline(30);
}