#include "Problem47To53.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem47To53
{
    void PrintResult()
    {

        ClearScreen();
        stDateAndDay DateAndDay = GetCurrentDateAndCurrentDayInText();

        PrintDateAndDay(DateAndDay, '/');


        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Is it End of the week ?");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        PrintIfIsEndOfTheWeek();


        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Is it weekend ?");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        PrintIfWeekEnd();


        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Is it business day ?");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        PrintIfItIsBusinessDay();


        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Days until the end of the week: ");
        PrintNumbers::printShortNumber(DaysUntilTheEndOfTheWeek(DateAndDay));
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();



        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();
        
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        
        PrintingText::PrintTextOnScreen("Day until the end of the month: ");
        PrintNumbers::printShortNumber(DaysUntilTheEndOfTheMonth(DateAndDay, true));
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();

        

        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();
        
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        
        PrintingText::PrintTextOnScreen("Day until the end of the year: ");
        PrintNumbers::printShortNumber(DaysUntilTheEndOfTheYear(DateAndDay));
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 50);
        PrintingText::PrintLines();





    }
}