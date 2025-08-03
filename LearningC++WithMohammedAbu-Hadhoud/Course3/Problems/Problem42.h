#include <iostream>

using namespace std;

short ReadShortNumber()
{
    short Number = 0;

    cin >> Number;

    return Number;
}

int TotalSecondOfWork(short Days, short Hours, short Minutes, short Seconds)
{
    const int SecondsPerDay = 60 * 60 * 24;
    const short SecondsPerHour = 60 * 60;
    const short SecondsPerMinute = 60;

    return (Days * SecondsPerDay) + (Hours * SecondsPerHour) + (Minutes * SecondsPerMinute) + Seconds;  
}

void Print()
{
    cout << "How many days you worked: ";
    short DaysOfWork = ReadShortNumber();

    cout << "How many hours you worked: ";
    short HoursOfWork = ReadShortNumber();

    cout << "How many minutes you worked: ";
    short MinutesOfWork = ReadShortNumber();

    cout << "How many seconds you worked: ";
    short SecondsOfWork = ReadShortNumber();

    int Result = TotalSecondOfWork(DaysOfWork, HoursOfWork, MinutesOfWork, SecondsOfWork);

    cout << "You Worked for " << Result << " Seconds";    
}