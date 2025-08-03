#include "Problem62.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem62
{
    void PrintResult()
    {
        ClearScreen();
            
        stDate Date;

        ReadDate(Date);

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        if(isDateValid(Date))
        {
            PrintingText::PrintTextOnScreen("Date is valid");
        }
        else 
        {
            PrintingText::PrintTextOnScreen("Date is not valid");
        }

        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}