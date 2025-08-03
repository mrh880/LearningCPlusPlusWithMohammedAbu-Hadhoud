#include "Problem59.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem59
{
    void PrintResult()
    {
        ClearScreen();
        
        stPeriod Period;

        ReadPeriod(Period);

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Period length is: ");
        PrintNumbers::PrintIntegerNumber(PeriodLengthInDays(Period));
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Period length (including end day) is: ");
        PrintNumbers::PrintIntegerNumber(PeriodLengthInDays(Period, true));
        PrintingText::PrintLines();


        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

    }
}