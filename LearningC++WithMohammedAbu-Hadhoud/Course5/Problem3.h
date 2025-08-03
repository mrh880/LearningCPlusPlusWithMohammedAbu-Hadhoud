#include <iostream>

using namespace std;

enum enPerfectOrNotPerfect {Perfect, NotPerfect};

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

enPerfectOrNotPerfect isPerfect(int Number)
{
    int Sum = 0;
    for(int loop = 1; loop < Number; loop++)
        if(Number % loop == 0)
            Sum += loop;

    if(Sum == Number)
        return enPerfectOrNotPerfect::Perfect;
    else 
        return enPerfectOrNotPerfect::NotPerfect;
}

void PrintResult(int Number)
{
    if(isPerfect(Number) == enPerfectOrNotPerfect::Perfect)
        cout << Number << " is perfect\n";
    else 
        cout << Number << " is not perfect\n";
}

void ClearingScreenAndGettingGreenColor()
{
    system("cls");
    system("color 0A");
}

void PrintingAline(short lengthOfLine)
{
    for(short loop = 0; loop < lengthOfLine; loop++)
    cout << "*";
    cout << "\n";
}

void GreetingMessage()
{
    PrintingAline(52);
    cout << "Is your number perfect or not, let's know now !\n";
    PrintingAline(52);
}


void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(20);
    PrintResult(ReadPositiveNumber("Enter a positive number: "));
    PrintingAline(20);
}
