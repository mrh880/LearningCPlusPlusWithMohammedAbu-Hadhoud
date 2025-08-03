#include "Problem9.h"

#include "Libraries\DateAndTime.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\PrintingOutputs.h"
#include "Libraries\ClearingScreenFunctions.h"

namespace Problem9
{
    void PrintResult()
    {
        ClearScreen();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        short Year = ReadNumbers::ReadingShortNumber("Enter a year: ");
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintYearCalender(Year);
    }
}