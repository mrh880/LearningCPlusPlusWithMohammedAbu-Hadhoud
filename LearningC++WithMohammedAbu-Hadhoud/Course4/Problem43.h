#include <iostream>

using namespace std;

int const SecondsPerSecond = 1; // = 1
int const SecondsPerMinute = SecondsPerSecond * 60; // 60 * 1 = 60 
int const SecondsPerPerHour = SecondsPerMinute * 60; // 60 * 60 = 3600 
int const SecondsPerDay = SecondsPerPerHour * 24; // 60 * 60 * 24 = 86, 400


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


struct stTimeDuration
{
    int Days = 0, Hours = 0, Minutes = 0, Seconds = 0;
};

stTimeDuration GetTimeDuration(int TotalSeconds)
{
    stTimeDuration time_duration;

    int Remainder = 0;
    time_duration.Days = TotalSeconds / SecondsPerDay;
    Remainder = TotalSeconds - (SecondsPerDay * time_duration.Days);
    time_duration.Hours = Remainder / SecondsPerPerHour;
    Remainder = Remainder - (time_duration.Hours * SecondsPerPerHour);
    time_duration.Minutes = Remainder / SecondsPerMinute;
    Remainder = Remainder - (time_duration.Minutes * SecondsPerMinute);
    time_duration.Seconds = Remainder * SecondsPerSecond;

    return time_duration;       
}

void PrintTimeInDaysHoursMinutesAndSeconds(stTimeDuration time_duration)
{
    cout << time_duration.Days << " Days, " << time_duration.Hours << " Hours, " << time_duration.Minutes << " Minutes ," << time_duration.Seconds << " Seconds\n";
}


void GreetingMessage()
{
    cout << "****************************************************\n";
    cout << "Convent Seconds to Days, Hours, Minutes and Seconds!\n";
    cout << "****************************************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    cout << "****************************************\n";
    PrintTimeInDaysHoursMinutesAndSeconds(GetTimeDuration(ReadPositiveNumber("Enter Total time in seconds: ")));
    cout << "****************************************\n";
}