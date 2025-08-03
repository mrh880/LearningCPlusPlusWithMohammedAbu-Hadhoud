#include "Problem7.h"

#include "Libraries\ReadingInputs.h"
#include "Libraries\PrintingOutputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"


namespace Problem7
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

        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        short Day = ReadNumbers::ReadingShortNumber("Enter a Day: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Date: ");
        PrintDate(Day, Month, Year);
        PrintingText::PrintLines();


        PrintingText::PrintTextOnScreen("Day order: ");
        short DayOrder = CalculateDayOrder(Day, Month, Year);
        PrintNumbers::printShortNumber(DayOrder);
        PrintingText::PrintLines();


        PrintingText::PrintTextOnScreen("Day Name: ");
        PrintingText::PrintTextOnScreen(DayOrderName(DayOrder));
        PrintingText::PrintLines();



        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

    }
}