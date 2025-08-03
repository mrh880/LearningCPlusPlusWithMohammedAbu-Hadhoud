#include <iostream>

using namespace std;

int ReadIntNumber()
{
    int Number = 0; 

    cin >> Number;

    return Number;
}

const int SecondsPerDay = 60 * 60 * 24;
const short SecondsPerHour = 60 * 60;
const short SecondsPerMinute = 60;

void Print()
{
    cout << "How many seconds do you have: ";

    int TotalSeconds = ReadIntNumber();

    int SecondsToDays = 0;
    int SecondsToHours = 0;
    int SecondsToMinutes = 0;
    int SecondsToSeconds = 0;

    int Remainder = 0;
 
    SecondsToDays = TotalSeconds / SecondsPerDay;
    
     Remainder = TotalSeconds - (SecondsToDays * SecondsPerDay); 
    
    SecondsToHours = Remainder / SecondsPerHour; 

    Remainder = Remainder - (SecondsToHours * SecondsPerHour); // 2735

    SecondsToMinutes = Remainder / SecondsPerMinute;

    Remainder = Remainder - (SecondsToMinutes * SecondsPerMinute);
    
    SecondsToSeconds = Remainder;

    cout << "You have worked for " << SecondsToDays << " Days, " << SecondsToHours 
    << " hours, " << SecondsToMinutes << " minutes, and " << SecondsToSeconds << " seconds.\n"; 
    }