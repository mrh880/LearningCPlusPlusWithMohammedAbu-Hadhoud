#include <iostream>

using namespace std;

enum enDaysOfTheWeek {Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

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

enDaysOfTheWeek ReadTheDayOfTheWeek()
{
    short Day = ReadShortNumber("Enter a day of the week: ");

    return (enDaysOfTheWeek) Day;
}

string GetTheDayOfTheWeek(enDaysOfTheWeek Week)
{
    switch(Week)
    {
        case enDaysOfTheWeek::Sunday:
            return "Sunday";
        
        case enDaysOfTheWeek::Monday: 
            return "Monday";

        case enDaysOfTheWeek::Tuesday:
            return "Tuesday";

        case enDaysOfTheWeek::Wednesday:
            return "Wednesday";

        case enDaysOfTheWeek::Thursday:
            return "Thursday";

         case enDaysOfTheWeek::Friday:
            return "Friday";
            
        case enDaysOfTheWeek::Saturday:
            return "Saturday";

            default:
                return "Not a day of week";
    }
}

void Print()
{
    PrintDaysOfWeek();
    string Day = GetTheDayOfTheWeek(ReadTheDayOfTheWeek()); 
    cout << "Today is " << Day << endl;
} 
