#include "Problem12.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\ClearingScreenFunctions.h"

namespace Problem12
{
    void PrintResult()
    {

        
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

        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        short NumberOfDays =  ReadNumbers::ReadingShortNumber("Enter the number of days you want to add: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();



        // stDate Date = IncreaseDateByDays(Day, Month, Year, NumberOfDays);
        // PrintDate(Date.Day, Date.Month, Date.Year);
    }
}