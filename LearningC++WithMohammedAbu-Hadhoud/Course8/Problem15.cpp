#include "Problem15.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"

namespace Problem15
{
    void PrintResult()
    {
        ClearScreen();

        stDate Date;
        ReadDate(Date);

        
        PrintingText::PrintSequenceOfCharacters('*', 80);
        PrintingText::PrintLines();
       

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        if(isLastDayInMonth(Date))
        {
            PrintingText::PrintTextOnScreen("Yes day is last day in month");
        }
        else 
        {
            PrintingText::PrintTextOnScreen("No day is not last day in month");
        }
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        if(isLastMonthInYear(Date.Month))
        {
            PrintingText::PrintTextOnScreen("Yes month is last month in year");
        }
        else 
        {
            PrintingText::PrintTextOnScreen("No month is not last month in year");
        }
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        
        PrintingText::PrintSequenceOfCharacters('*', 80);
        PrintingText::PrintLines();
       
    }
}