#include <iostream>

using namespace std;

int const SecondsPerSecond = 1;
int const SecondsPerMinute = SecondsPerSecond * 60;
int const SecondsPerPerHour = SecondsPerMinute * 60;
int const SecondsPerDay = SecondsPerPerHour * 24;


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

struct TimeDuration
{
    int Days = 0, Hours = 0, Minutes = 0, Seconds = 0;
};

TimeDuration ReadTimeDuration()
{
    TimeDuration time_duration;
    cout << "******************\n";
    cout << "GREETING TIME INFO\n";
    cout << "*******************\n";
    cout << "***************************************************\n";
    time_duration.Days = ReadPositiveNumber("Enter Days: ");
    time_duration.Hours = ReadPositiveNumber("Enter Hours: ");
    time_duration.Minutes = ReadPositiveNumber("Enter Minutes: ");
    time_duration.Seconds = ReadPositiveNumber("Enter Seconds: ");
    
    return time_duration;
}

int CalculateTotalSeconds(TimeDuration time_duration)
{
    int TotalSecond = (time_duration.Days * SecondsPerDay) + (time_duration.Hours * SecondsPerPerHour) + (time_duration.Minutes * SecondsPerMinute) + (time_duration.Seconds * SecondsPerSecond);
    return TotalSecond;
}


void GreetingMessage()
{
    cout << "***************************************************\n";
    cout << "Conventer Days, Hours, Minutes, Seconds To Seconds!\n";
    cout << "***************************************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    TimeDuration SomeoneTimeDuration = ReadTimeDuration();
    int TotalSeconds = CalculateTotalSeconds(SomeoneTimeDuration);
    cout << "Total Second = " << TotalSeconds << endl;
}