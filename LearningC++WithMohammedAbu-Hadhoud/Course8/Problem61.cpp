#include "problem61.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"


namespace Problem61
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

        PrintNumbers::printShortNumber(CountOverlapDays(Period1, Period2));
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}