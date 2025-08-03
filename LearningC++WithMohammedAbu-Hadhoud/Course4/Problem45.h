#include <iostream>

using namespace std;

enum enMonthsOfTheYear {Jan = 1, Feb, Mar, Apr, May, Jun, 
                        Jul, Aug, Sep, Oct, Nov, Des};

bool isNumberInRange(short Number, short From, short To)
{
    return (Number >= From && Number <= To);
}

short ReadShortNumber(const string& Message)
{
    short Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(!(isNumberInRange(Number, 1, 12)));

    return Number;
}

enMonthsOfTheYear ReadMonthOfTheYear()
{
    return (enMonthsOfTheYear) ReadShortNumber("Enter a number from the list above: ");  
}

string GetMonthOfTheYear(enMonthsOfTheYear Month)
{
    switch(Month)
    {
        case enMonthsOfTheYear::Jan: 
            return "January";

        case enMonthsOfTheYear::Feb: 
            return "February";

        case enMonthsOfTheYear::Mar:
            return "March";

        case enMonthsOfTheYear::Apr: 
            return "April";

        case enMonthsOfTheYear::May: 
            return "May";

        case enMonthsOfTheYear::Jun: 
            return "June";

        case enMonthsOfTheYear::Jul: 
            return "July";

        case enMonthsOfTheYear::Aug: 
            return "August";

        case enMonthsOfTheYear::Sep: 
            return "September";

        case enMonthsOfTheYear::Oct: 
            return "October";

        case enMonthsOfTheYear::Nov: 
            return "November";

        case enMonthsOfTheYear::Des: 
            return "December";

        default:
            return "Not a day";
    }
}

void PrintMenu()
{
    cout << "******************\n";
    cout << "MONTHS OF THE YEAR\n";
    cout << "******************\n";
    cout << "***************************************\n";
    cout << "(1): January\n";
    cout << "(2): February\n";
    cout << "(3): March\n";
    cout << "(4): May\n";
    cout << "(5): April\n";
    cout << "(6): June\n";
    cout << "(7): July\n";
    cout << "(8): August\n";
    cout << "(9): September\n";
    cout << "(10): October\n";
    cout << "(11): November\n";
    cout << "(12): December\n"; 
    cout << "***************************************\n";
}

void GreetingMessage()
{
    cout << "*************************************\n";
    cout << "Which days is today, let's know now !\n";
    cout << "*************************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    PrintMenu();
    string Month = GetMonthOfTheYear(ReadMonthOfTheYear());
    cout << "This month is " << Month << endl;
}
