

#include <iostream>

using namespace std;

enum enPerfectOrNotPerfect
{
    Perfect,
    NotPerfect
};

int ReadPositiveNumber(const string &Message)
{
    int Number = 0;

    do
    {
        cout << Message;

        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void PrintingAline(short lengthOfLine)
{
    for (short loop = 0; loop < lengthOfLine; loop++)
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
    PrintingAline(92);
    cout << "You want to know how many perfect numbers from 1 to a number you enter? let's know now !\n";
    PrintingAline(92);
}

enPerfectOrNotPerfect isPerfect(int Number)
{
    int Sum = 0;
    for (int loop = 1; loop < Number; loop++)
        if (Number % loop == 0)
            Sum += loop;

    if (Sum == Number)
        return enPerfectOrNotPerfect::Perfect;
    else
        return enPerfectOrNotPerfect::NotPerfect;
}

void PrintPerfectNumbersFrom1ToN(int Number)
{
    PrintingAline(40);
    cout << "All the perfect numbers from 1 to " << Number << endl;
    PrintingAline(49);

    PrintingAline(30);
    for (int loop = 1; loop <= Number; loop++)
        if (isPerfect(loop) == enPerfectOrNotPerfect::Perfect)
            cout << loop << endl;
    PrintingAline(30);
}

void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(30);
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Enter a positive number: "));
    PrintingAline(30);
}
