#include "Problem3.h"

#include "Libraries\ReadingInputs.h"
#include "Libraries\PrintingOutputs.h"
#include "Libraries\ClearingScreenFunctions.h"

namespace Problem3
{


    bool isYearLeap(short Year)
    {
        return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
    }

    void    PrintResult()
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
