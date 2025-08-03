#include "Problem54.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem54
{
    void PrintResult()
    {
        ClearScreen();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Vacation starts at: ");

        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        stDate DateFrom;

        ReadDate(DateFrom);

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintLines();


        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Vacation ends at: ");

        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        stDate DateTo;

        ReadDate(DateTo);


        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Vacation from: ");
        PrintingText::PrintTextOnScreen(DayOrderName(CalculateDayOrder(DateFrom)));
        PrintingText::PrintTextOnScreen(" , ");
        PrintDate(DateFrom);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Vacation To: ");
        PrintingText::PrintTextOnScreen(DayOrderName(CalculateDayOrder(DateTo)));
        PrintingText::PrintTextOnScreen(" , ");
        PrintDate(DateTo);
        PrintingText::PrintLines();
        
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintLines();


        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Actual vacation days: ");
        PrintNumbers::printShortNumber(CalculateVacationDays(DateFrom, DateTo));
        PrintingText::PrintTextOnScreen(" day(s)");
        PrintingText::PrintLines();
        
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}