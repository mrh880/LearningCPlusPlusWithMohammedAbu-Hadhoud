#include <iostream>

using namespace std;

int ReadPositiveNumber(const string& Message)
{
    int Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(Number < 0);

    return Number;
}

int Power(int Base, int Power)
{
    int Result = 1;

    for(short loop =  0; loop < Power; loop++)
        Result *= Base;

    return Result;
}

void PrintResult(int base, int power)
{
    cout << base << "^" << power << " = " << Power(base, power) <<  endl;
}
void GreetingMessage()
{
    cout << "**********************************\n";
    cout << "Number to a power\n";
    cout << "**********************************\n";
  
}

void DrawingALineOfStart()
{
    cout << "************************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    DrawingALineOfStart();
    int base = ReadPositiveNumber("Enter the base: ");
    int power = ReadPositiveNumber("Enter the power: ");
    PrintResult(base, power);
}