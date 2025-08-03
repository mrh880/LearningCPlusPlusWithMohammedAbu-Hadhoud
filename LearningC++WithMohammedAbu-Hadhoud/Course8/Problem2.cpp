#include "Problem2.h"

#include "Libraries\ReadingInputs.h"
#include "Libraries\PrintingOutputs.h"
#include "Libraries\ClearingScreenFunctions.h"

namespace Problem2
{
    bool isYearLeap(short Year)
    {
        if (Year % 400 == 0)
        {
            return true;
        }
        else if (Year % 100 == 0)
        {
            return false;
        }
        else if (Year % 4 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void PrintResult()
    {

        ClearScreen();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        int Year = ReadNumbers::ReadingIntegerNumber("Enter a year to know if it is a leap or not: ");
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();

        PrintNumbers::PrintIntegerNumber(Year);

        if (isYearLeap(Year))
        {
            PrintingText::PrintTextOnScreen(" is a leap year :)\n");
        }
        else
        {
            PrintingText::PrintTextOnScreen(" is not a leap year :(\n");
        }

        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
    }
}
