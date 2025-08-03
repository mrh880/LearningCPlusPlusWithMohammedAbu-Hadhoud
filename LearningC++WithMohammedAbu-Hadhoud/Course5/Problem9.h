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
    cout << "You want  to know how many times every digit appres in a number? let's know now !\n";
    PrintingAline(66);
}

int FrequentDigitInNumber(int Number, short FrequentNumber)
{
    int Remainder = 0;
    int Counter = 0;

    while(Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        
        if(FrequentNumber == Remainder)
            Counter++;
    }
    return Counter;
}

void HowManyTimeEveryDigitAppearedInA_Number(int Number)
{

    PrintingAline(40);

    for(short loop = 0; loop < 10; loop++)
    {
        short RepeatTimes = 0;
        RepeatTimes = FrequentDigitInNumber(Number, loop);

        if(RepeatTimes > 0)
            cout << loop << " appeared " << RepeatTimes << " times \n";
    }
    PrintingAline(40);

}

void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(30);
    HowManyTimeEveryDigitAppearedInA_Number(ReadPositiveNumber("Enter a number: "));
    PrintingAline(30);
}