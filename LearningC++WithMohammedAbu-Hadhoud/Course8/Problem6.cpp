#include "Problem6.h"

#include "Libraries\ReadingInputs.h"
#include "Libraries\PrintingOutputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"


namespace Problem6
{
    void PrintResult()
    {
        ClearScreen();
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        short Year = ReadNumbers::ReadingShortNumber("Enter a year to check: ");
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        short Month = ReadNumbers::ReadingShortNumber("Enter a month to check: ");
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Number of days in month [");
        PrintNumbers::printShortNumber(Month);
        PrintingText::PrintTextOnScreen("] : ");
        PrintNumbers::printShortNumber(NumberOfDaysInMonth(Month, Year));
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Number of hours in month [");
        PrintNumbers::printShortNumber(Month);
        PrintingText::PrintTextOnScreen("] : ");
        PrintNumbers::printShortNumber(NumberOfHoursInMonth(Month, Year));
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Number of minutes in month [");
        PrintNumbers::printShortNumber(Month);
        PrintingText::PrintTextOnScreen("] : ");
        PrintNumbers::PrintIntegerNumber(NumberofMinutesInMonth(Month, Year));
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Number of seconds  in month [");
        PrintNumbers::printShortNumber(Month);
        PrintingText::PrintTextOnScreen("] : ");
        PrintNumbers::PrintIntegerNumber(NumberofSecondsInMonth(Month, Year));
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}