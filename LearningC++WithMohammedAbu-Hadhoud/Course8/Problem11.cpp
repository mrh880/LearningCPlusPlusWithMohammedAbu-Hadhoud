#include "Problem11.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\ClearingScreenFunctions.h"

namespace Problem11
{
    void PrintResult()
    {
        ClearScreen();

        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        short Day =  ReadNumbers::ReadingShortNumber("Enter a day: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        short Month =  ReadNumbers::ReadingShortNumber("Enter a month: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        short Year =  ReadNumbers::ReadingShortNumber("Enter a Year: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Number of days from the begining of the year is ");
        short NumberOfDays = NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year);
        PrintNumbers::printShortNumber(NumberOfDays);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();


        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Date for [");
        PrintNumbers::printShortNumber(NumberOfDays);
        PrintingText::PrintTextOnScreen("] is: ");
        stDate Date = GetDateFromNumberOfDays(NumberOfDays, Year);
        PrintDate(Date.Day, Date.Month, Date.Year);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        
    }
}