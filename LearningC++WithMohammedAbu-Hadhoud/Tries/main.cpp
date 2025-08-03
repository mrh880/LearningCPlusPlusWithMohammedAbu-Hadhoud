
#include "..\Course8\Libraries\PrintingOutputs.h"


#include <string>
#include <iostream>
#include <iomanip>

using namespace std;


bool isYearLeap(short Year)
{
    return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDaysInYear(short Year)
{
    return isYearLeap(Year) ? 366 : 365; // 366
}

short NumberOfHoursInYear(short Year)
{
    return (NumberOfDaysInYear(Year) * 24); // 8784
}

int NumberOfMinutesInYear(short Year)
{
    return (NumberOfHoursInYear(Year) * 60); // 527040
}

int NumberOfSecondsInYear(short Year)
{
    return (NumberOfMinutesInYear(Year) * 60); // 31622400
}


short NumberOfDaysInMonth(short Month, short Year)
{
    if(Month < 1 || Month > 12)
    {
        return 0;
    }
    short NumberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    return ((Month == 2) ? isYearLeap(Year) ? 29 : 28 : NumberOfDays[Month - 1]);
}

short NumberOfHoursInMonth(short Month, short Year)
{
    return (NumberOfDaysInMonth(Month, Year) * 24);
}

int NumberofMinutesInMonth(short Month, short Year)
{
    return (NumberOfHoursInMonth(Month, Year) * 60);
}

int NumberofSecondsInMonth(short Month, short Year)
{
    return (NumberofMinutesInMonth(Month, Year) * 60);
}

void PrintDate(short Day, short Month, short Year)
{
    PrintNumbers::printShortNumber(Day);
    PrintingText::PrintCharacters('/');
    PrintNumbers::printShortNumber(Month);
    PrintingText::PrintCharacters('/');
    PrintNumbers::printShortNumber(Year);
}

short CalculateDayOrder(short Day, short Month, short Year)
{
    short A = 0;
    short Y = 0;
    short M = 0;

    A = (14 - Month) / (12);
    Y = Year - A;
    M = Month + (12 * A) - 2;

    short D = 0;
    D = (Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31* M) / 12)) % 7;

    return D;
}

string DayOrderName(short DayOrder)
{
    string DaysOfWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    return DaysOfWeek[DayOrder];
}

string ConvertMonthIntoText(short NumberOfMonth)
{
    string Months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                         "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return Months[NumberOfMonth - 1];
}

void PrintMonthCalender(short Month, short Year)
{
    // Here we see if the month is valid 
    // -------------------------------------------------------
    if(Month < 1 || Month > 12)
    {
        PrintingText::PrintTextOnScreen("Invalid month");
        return;
    }
    // -------------------------------------------------------
    
    
    // Here we Store the Name of Month into text
    // -----------------------------------------------------
    string NameOfMonth = ConvertMonthIntoText(Month);
    // -----------------------------------------------------


    // Here we calculate the number of days in the current month
    // ---------------------------------------------------------------
    short NumberOfDays = NumberOfDaysInMonth(Month, Year);
    // ---------------------------------------------------------------


    // Here we Calclate the number number of the day, the month starts with 
    // ---------------------------------------------------------------------------------
    short TheDayTheMonthStartsWith = CalculateDayOrder(1, Month, Year);
    // ---------------------------------------------------------------------------------

    
    // Here we print the name of the month in short way, we print the name of the month in 3 characters
    // ---------------------------------------------------------------------------------------------------------
    PrintingText::PrintSequenceOfCharacters('*', 10);
    PrintingText::PrintTextOnScreen(NameOfMonth);
    PrintingText::PrintSequenceOfCharacters('*', 15);
    PrintingText::PrintLines();
    // ---------------------------------------------------------------------------------------------------------

    


    // Here we print the header of the calender 
    // --------------------------------------------------------------------------
    PrintingText::PrintTextOnScreen("Sun Mon Tue Wed Thu Fri Sat");
    PrintingText::PrintLines();
    // --------------------------------------------------------------------------




    /*
        Here we print spaces according the number of the day the month starts with 
        and we multiply the number by 4 cuz each word of the day is from 3 characters and we have the space after the word
    */
   // -----------------------------------------------------------------------------------------------------------------------------
    PrintingText::PrintSpaces(4 * TheDayTheMonthStartsWith);
    // -----------------------------------------------------------------------------------------------------------------------------


    // Here we set the counter to the number the month the starts with 
    // --------------------------------------------------------------------------
    short Counter = TheDayTheMonthStartsWith - 1;
    // --------------------------------------------------------------------------



    // Here we make the loop according to the number of days in the month
    // --------------------------------------------------------------------------
    for(short Days = 1; Days <= NumberOfDays; Days++)
    {
        Counter++;

        if(Counter % 7 == 0)
        {
            PrintingText::PrintLines();
        }

        if(Days < 10)
        {
            PrintingText::PrintSpaces(1);
            PrintNumbers::printShortNumber(Days);
            PrintingText::PrintSpaces(2);
        }
        
        else
        {
            PrintingText::PrintSpaces(1);
            PrintNumbers::printShortNumber(Days);
            PrintingText::PrintSpaces(1);
        }
    }
    // --------------------------------------------------------------------------


    /* 
        Here we print a new line if the the number of days in the month is not (%) 7 == 28 
        because some time according to days of the month the last line does not print a new 
        lien 
    */
   // ------------------------------------------------------------------------------------------------------
    if(NumberOfDays % 7 != 0)
    {
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 28);
    }
    // ------------------------------------------------------------------------------------------------------
}




