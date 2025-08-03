#include <iostream>

using namespace std;

enum enDaysOfWeek {Sunday = 1, Monday = 2, TuesDay = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

short ReadDay(const string& Message)
{
    short Day = 0;

    do 
    {
        cout << Message;

        cin >> Day;
    } while(!(Day >= 1 && Day <= 7));

    return Day;
}

enDaysOfWeek ReadDayOfWeek()
{
    short DayOfTheWeek = ReadDay("Choose from the list above: ");
    return (enDaysOfWeek) DayOfTheWeek;
}

void PrintMenu()
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

string PrintDayOfTheWeek(enDaysOfWeek Day)
{
    switch(Day)
    {
        case enDaysOfWeek::Sunday: 
            return "Sunday";

        case enDaysOfWeek::Monday:
            return "Monday";

        case enDaysOfWeek::TuesDay:
            return "Tuesday";

        case enDaysOfWeek::Wednesday:
            return "Wednesday";

        case enDaysOfWeek::Thursday:
            return "Thursday";

        case enDaysOfWeek::Friday:
            return "Friday";

        case enDaysOfWeek::Saturday: 
            return "Saturday";
            
    }
    return "";
}

void PrintDay(string Day)
{
    cout << "Today is " << Day << endl;
}

void GreetingMessage()
{
    cout << "*****************\n";
    cout << "Days Of The Week!\n";
    cout << "*****************\n";
}


void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    PrintMenu();
    cout << "***********************\n";
    PrintDay(PrintDayOfTheWeek(ReadDayOfWeek()));
    cout << "***********************\n";
}