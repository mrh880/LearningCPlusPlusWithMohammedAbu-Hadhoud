#include <iostream>

using namespace std;

short ReadshortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

bool isNumberBetweenTwoNumbers(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

short ReadAge()
{
    short Age = 0;
    do
    {
         Age = ReadshortNumber("Enter your age: ");
    } while(!isNumberBetweenTwoNumbers(Age, 18, 45));
    return Age;
}

void PrintAge(short Age)
{ 
    cout << "Your age is " << Age << endl;
}

void DrawingLineOfStars()
{
    cout << "***************************\n";
}

void GreetingMessage()
{
    cout << "**********************************************\n";
    cout << "Is your age between 18 and 45, let's know now\n";
    cout << "**********************************************\n";
}
void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    DrawingLineOfStars();
    PrintAge(ReadAge());
    DrawingLineOfStars();
}