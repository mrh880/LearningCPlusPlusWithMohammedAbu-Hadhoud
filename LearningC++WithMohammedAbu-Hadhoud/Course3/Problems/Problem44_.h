#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

enum enDaysOfWeek {Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

void PrintDaysOfWeek()
{
    cout << "DAYS OF THE WEEK\n";
    cout << "***********************************************\n";
    cout << "Choose a day!\n";
    cout << "(1): Sunday\n";
    cout << "(2): Monday\n";
    cout << "(3): Tuesday\n";
    cout << "(4): Wednesday\n";
    cout << "(5): Thursday\n";
    cout << "(6): Friday\n";
    cout << "(7): Saturday\n";
    cout << "***********************************************\n";
}

void PrintTheResult(enDaysOfWeek TheDay)
{
    switch(TheDay)
    {
        case Sunday: 
            cout << "Sunday\n";
            break;

        case Monday:
            cout << "Monday\n";
            break;
        
        case Tuesday:
            cout << "Tuesday\n";
            break;

        case Wednesday:
            cout << "Wednesday\n";
            break;

        case Thursday:
            cout << "Thursday\n";
            break;

        case Friday:
            cout << "Friday\n";
            break;

        case Saturday:
            cout << "Saturday\n";
            break;

        default:
            cout << "invalid day\n";
            break;

    }
}

void Print()
{
    PrintDaysOfWeek();
    short Choice = ReadShortNumber("Enter your choice: ");
    enDaysOfWeek TheDayOfTheUser = (enDaysOfWeek) Choice;
    PrintTheResult(TheDayOfTheUser);
}