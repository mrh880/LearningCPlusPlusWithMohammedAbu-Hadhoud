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
    cout << "Have ever heard about inverted letter patterns, i will show you it now !\n";
    PrintingAline(70);
}

void PrintNumberInInvertedLetterPattern(short Number)
{
    cout << "This is called inverted pattern ! \n";
    PrintingAline(20); 

    for(short OuterLoop = 1; OuterLoop <= Number; OuterLoop++)
    {
        for(short InnerLoop = 1; InnerLoop <= OuterLoop; InnerLoop++)
            cout << char(OuterLoop + 64) << " "; 
        
        cout << endl;
    }   
    PrintingAline(20);
}

void Print()
{ 
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(30);
    PrintNumberInInvertedLetterPattern(ReadPositiveNumber("Enter a positive number: "));
    PrintingAline(30);
}