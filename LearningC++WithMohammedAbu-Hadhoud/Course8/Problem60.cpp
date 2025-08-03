#include "Problem60.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"


namespace Problem60
{
    void PrintResult()
    {
        ClearScreen();

        stPeriod Period;
        stDate Date;

        ReadPeriod(Period);
        ReadDate(Date);

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        
        if(isDateInPeriod(Period, Date))
        {
            PrintingText::PrintTextOnScreen("Yes Date in period");
        }
        else 
        {
            PrintingText::PrintTextOnScreen("NO Date is not in period");

        }

        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}