#include "Problem18.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"



namespace Problem18
{
    void PrintResult()
    {
        ClearScreen();
        
        stDate PersonDate;

        ReadDate(PersonDate);

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Your age in days is ");
        PrintNumbers::PrintIntegerNumber(AgeInNumberOfDays(PersonDate));
        PrintingText::PrintTextOnScreen(" days");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 40);
    }
}