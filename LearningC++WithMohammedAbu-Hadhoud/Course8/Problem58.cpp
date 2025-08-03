#include "Problem58.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem58
{
    void PrintResult()
    {
        ClearScreen();
        
        stPeriod Period1;
        stPeriod Period2;

        ReadPeriod(Period1);
        ReadPeriod(Period2);

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        if(isOverLapPeriods(Period1, Period2))
        {
            PrintingText::PrintTextOnScreen("Yes periods overlap");
            PrintingText::PrintLines();
        }

        
        else 
        {
            PrintingText::PrintTextOnScreen("No periods not overlap");
            PrintingText::PrintLines();

        }
        
    }
}