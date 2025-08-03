#include <iostream>

using namespace std;

enum enPrimeOrNotPrime {Prime, NotPrime};

int ReadIntegerNumber(const string& Message)
{
    int Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(Number <= 0);
    return Number;
}

enPrimeOrNotPrime CheckPrime(int Number)
{
    int TimesToCheck = Number / 2;
    for (int loop = 2; loop <= TimesToCheck; loop++)
        if (Number % loop == 0)
            return enPrimeOrNotPrime::NotPrime;
    return enPrimeOrNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number)
{
    for(int loop = 1; loop <= Number; loop++)
    {
        if(CheckPrime(loop) == enPrimeOrNotPrime::Prime)
            cout << loop << endl;
    }   
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
    PrintingAline(94);
    cout << "You want to know what are the prime number form 1 to a number you enter? let's know now !\n";
    PrintingAline(94);
}


void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    PrintingAline(20);
    PrintPrimeNumbersFrom1ToN(ReadIntegerNumber("Enter a number: "));
    PrintingAline(20);
}