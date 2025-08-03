#include <iostream>

using namespace std;

void PrintingAline(short lengthOfLine)
{
    for(short loop = 0; loop < lengthOfLine; loop++)
    cout << "*";
    cout << "\n";
}

void PrintLetterFromAToZ()
{
    cout << "******************\n";
    cout << "Letter form A to Z\n";
    cout << "******************\n";
    PrintingAline(20);
    for(short loop = 65; loop <= 90; loop++)
    {
        cout << char(loop) << endl;
    }
    PrintingAline(20);
}

void GreetingMessage()
{
    cout << "*******************************\n";
    cout << "Printing letters form A to Z ! \n";
    cout << "*******************************\n";
}

void ClearingScreenAndGettingGreenColor()
{
    system("cls");
    system("color 0A");
}

void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintLetterFromAToZ();
}