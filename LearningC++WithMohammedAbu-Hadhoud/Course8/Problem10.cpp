#include "Problem10.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\ClearingScreenFunctions.h"

namespace Problem10
{
    void PrintResult()
    {
        ClearScreen();

        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        short Day =  ReadNumbers::ReadingShortNumber("Enter a day: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        short Month =  ReadNumbers::ReadingShortNumber("Enter a month: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        short Year =  ReadNumbers::ReadingShortNumber("Enter a Year: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Number of days from the begining of the year is ");
        PrintNumbers::printShortNumber(NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year));
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}