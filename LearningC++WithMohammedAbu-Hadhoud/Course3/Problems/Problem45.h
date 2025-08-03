#include <iostream>

using namespace std;

void PrintTheDaysOfTheWeakOnTheScreenToLetTheUserChoose()
{
    cout << "Months OF THE YEAR!\n";
    cout << "***********************************************\n";
    cout << "For January enter 1\n";
    cout << "For February enter 2\n";
    cout << "For March enter 3\n";
    cout << "For April enter 4\n";
    cout << "For May enter 5\n";
    cout << "Fro June enter 6\n";
    cout << "For July enter 7\n";   
    cout << "For August enter 8\n";   
    cout << "For September enter 9\n";   
    cout << "For October enter 10\n";   
    cout << "For November enter 11\n";   
    cout << "For December enter 12\n";   
    cout << "***********************************************\n";
}

short  GetTheDayOfTheWeak(const string& Message)
{
    cout << Message;

    short Day = 0;

    cin >> Day;

    return Day;
}

void  printUserchoice(short NumberOfTheWeak)
{
    if(NumberOfTheWeak == 1)
    cout  <<  "You chose January\n";
    else if(NumberOfTheWeak == 2)
    cout  <<  "You chose February\n";
    else if(NumberOfTheWeak == 3)
    cout <<  "You chose March\n";
    else if(NumberOfTheWeak == 4)
    cout <<  "You chose April\n";
    else if(NumberOfTheWeak == 5)
    cout <<  "You chose May\n";
    else if(NumberOfTheWeak == 6)
    cout <<  "You chose June\n";
     else if(NumberOfTheWeak == 7)
    cout <<  "You chose July\n";
     else if(NumberOfTheWeak == 8)
    cout <<  "You chose August\n";
     else if(NumberOfTheWeak == 9)
    cout <<  "You chose September\n";
     else if(NumberOfTheWeak == 10)
    cout <<  "You chose October\n";
     else if(NumberOfTheWeak == 11)
    cout <<  "You chose November\n";
     else
    cout <<  "You chose December\n";
}

void Print()
{
    PrintTheDaysOfTheWeakOnTheScreenToLetTheUserChoose();
    printUserchoice(GetTheDayOfTheWeak("Enter a number: "));
}