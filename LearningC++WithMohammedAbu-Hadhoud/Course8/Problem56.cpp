#include "Problem56.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem56
{
    void PrintResult()
    {
        ClearScreen();
        
        stDate Date1;
        stDate Date2;

        ReadDate(Date1);
        ReadDate(Date2);

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        if(isDate1AfterDate2(Date1, Date2))
        {
            PrintingText::PrintTextOnScreen("Yes date 1 is after date 2");
            PrintingText::PrintLines();
        }
        else 
        {
            PrintingText::PrintTextOnScreen("No date 1 is not after date 2");
            PrintingText::PrintLines();
        }
             PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}