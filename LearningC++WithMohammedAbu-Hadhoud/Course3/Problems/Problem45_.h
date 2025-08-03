#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

enum enMonthOfTheYear {January = 1, February = 2, March = 3, May = 4, April = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12};

void PrintMOnthsOfTheYear()
{
    cout << "MONTHS OF THE YEAR\n";
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

void PrintTheMonth(enMonthOfTheYear TheUserChoice)
{
    switch(TheUserChoice)
    {
        case January:
            cout << "January\n";
            break;
        
        case February:
            cout << "February\n";
            break;
        
        case March:
            cout << "March\n";
            break;

        case April:
            cout << "April\n";
            break;

        case May:
            cout << "May\n";
            break;

        case June:
            cout << "June\n";
            break;

        case July:
            cout << "July\n";
            break;

        case August:
            cout << "August\n";
            break;

        case September:
            cout << "September\n";
            break;

        case October:
            cout << "October\n";
            break;

        case November:
            cout << "November\n";
            break;

        case December:
            cout << "December\n";
            break;

        default:
            cout << "Invalid Month\n";
            break;
    }
}

void Mine()
{
    cout << "MOnths of the year\n";
    cout << "**************************************\n";
    for (short loop = 0; loop < 12; loop++)
    {
        // short Temp = loop + 1;
        cout << "(" << loop + 1 << "): ";
        // enMonthOfTheYear MyMonth = (enMonthOfTheYear) (loop+1);
        PrintTheMonth(enMonthOfTheYear (loop + 1));
    }
    cout << "**************************************\n";
}

void Print()
{
    PrintMOnthsOfTheYear();
    short Choice = ReadShortNumber("Enter you Choice: ");
    enMonthOfTheYear TheUserChoice = (enMonthOfTheYear) Choice;
    PrintTheMonth(TheUserChoice);   
    // Mine();
}