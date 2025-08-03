#include <iostream>

using namespace std;

const short Days = 24;
const short Weeks = 7;

float ReadPositiveNumber(const string& Message)
{
    float Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(Number <= 0);

    return Number;
}


float HoursToWeeks(int Hours)
{
    float Result = (float) Hours / Days / Weeks;
    return Result;
}

float HoursToDays(int Hours)
{
    float Result = (float) Hours / Days;
    return Result;
}

void GreetingMessage()
{
    cout << "*************************************\n";
    cout << "Converter of Hours to weeks and days!\n";
    cout << "*************************************\n";
}

void Print()
{
    system("cls");
    system("color   0A");
    GreetingMessage();
    cout << "************************\n";
    int NumbersOfHours = ReadPositiveNumber("Enter Hours: ");
    cout << "************************\n";
    cout << "************************\n";
    cout << NumbersOfHours << " Hours = " << HoursToWeeks(NumbersOfHours) << " Weeks\n";
    cout << NumbersOfHours << " Hours = " << HoursToDays(NumbersOfHours) << " Days\n"; 
    cout << "************************\n";
}