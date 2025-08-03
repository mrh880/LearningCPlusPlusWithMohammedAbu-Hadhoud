#include "problem4.h"

#include "Libraries\DateAndTime.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\PrintingOutputs.h"
#include "Libraries\ClearingScreenFunctions.h"

namespace Problem4
{
    void PrintResult()
    {

        ClearScreen();
        PrintingText::PrintSequenceOfCharacters('*', 80);
        PrintingText::PrintLines();
        short Year = ReadNumbers::ReadingShortNumber("Enter a year to give you (days, hours, minutes, seconds) in year: ");
        PrintingText::PrintSequenceOfCharacters('*', 20);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 80);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Number of days in year: "); 
        PrintingText::PrintTextOnScreen("[");
        PrintNumbers::printShortNumber(Year);
        PrintingText::PrintTextOnScreen("]: ");
        PrintNumbers::printShortNumber(NumberOfDaysInYear(Year));
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Number of hours in year: "); 
        PrintingText::PrintTextOnScreen("[");
        PrintNumbers::printShortNumber(Year);
        PrintingText::PrintTextOnScreen("]: ");
        PrintNumbers::printShortNumber(NumberOfHoursInYear(Year));
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Number of minutes in year: "); 
        PrintingText::PrintTextOnScreen("[");
        PrintNumbers::printShortNumber(Year);
        PrintingText::PrintTextOnScreen("]: ");
        PrintNumbers::PrintIntegerNumber(NumberOfMinutesInYear(Year));
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Number of seconds in year: "); 
        PrintingText::PrintTextOnScreen("[");
        PrintNumbers::printShortNumber(Year);
        PrintingText::PrintTextOnScreen("]: ");
        PrintNumbers::PrintIntegerNumber(NumberOfSecondsInYear(Year));
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}