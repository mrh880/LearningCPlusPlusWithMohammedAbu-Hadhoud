#include "Problem8.h"

#include "Libraries\ReadingInputs.h"
#include "Libraries\PrintingOutputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"


namespace Problem8
{
    void PrintResult()
    {
        ClearScreen();

        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        short Year = ReadNumbers::ReadingShortNumber("Enter a year: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        short Month = ReadNumbers::ReadingShortNumber("Enter a month: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();

        PrintMonthCalender(Month, Year);

    }
}