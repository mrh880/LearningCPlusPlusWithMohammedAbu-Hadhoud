#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

void PrintTheDaysOfTheWeakOnTheScreenToLetTheUserChoose()
{
    cout << "DAYS OF THE WEAK!\n";
    cout << "***********************************************\n";
    cout << "For Sunday enter 1\n";
    cout << "For Monday enter 2\n";
    cout << "For Tuesday enter 3\n";
    cout << "For Wednesday enter 4\n";
    cout << "For Thursday enter 5\n";
    cout << "Fro Friday enter 6\n";
    cout << "For Saturday enter 7\n";   
    cout << "***********************************************\n";
}

short  GetTheDayOfTheWeak(const string& Message)
{
    cout << Message;

    short Day = 0;

    cin >> Day;

    return Day;
}

void printUserchoice(short NumberOfTheWeak)
{
    if(NumberOfTheWeak == 1)
    cout  <<  "You chose Sunday";
    else if(NumberOfTheWeak == 2)
    cout  <<  "You chose Monday";
    else if(NumberOfTheWeak == 3)
    cout <<  "You chose Tuesday";
    else if(NumberOfTheWeak == 4)
    cout <<  "You chose Wednesday";
    else if(NumberOfTheWeak == 5)
    cout <<  "You chose Thursday";
    else if(NumberOfTheWeak == 6)
    cout <<  "You chose Friday";
    else 
    cout <<  "You chose Saturday";
}

void Print()
{
    PrintTheDaysOfTheWeakOnTheScreenToLetTheUserChoose();
    printUserchoice(GetTheDayOfTheWeak("Enter a number: "));
}