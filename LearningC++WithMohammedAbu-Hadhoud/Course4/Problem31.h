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

void PrintPowerTo2_3_4(int Number)
{
    cout << Number << "^" << "2 = " << Number * Number << endl;  
    cout << Number << "^" << "3 = " << Number * Number * Number << endl;  
    cout << Number << "^" << "4 = " << Number * Number * Number * Number << endl;  
}

void GreetingMessage()
{
    cout << "**********************************\n";
    cout << "Numbers to the power of 2, 3 and 4\n";
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
    DrawingALineOfStart();
    PrintPowerTo2_3_4(ReadPositiveNumber("Enter a positive number: "));
}