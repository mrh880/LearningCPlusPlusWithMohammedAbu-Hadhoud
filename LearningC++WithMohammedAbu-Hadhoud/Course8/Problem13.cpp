#include "Problem13.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"

namespace Problem13
{
    void PrintResult()
    {
        ClearScreen();

        stDate Date1;
        ReadDate(Date1);

        stDate Date2;
        ReadDate(Date2);

        if(isDate1LessThanDate2(Date1, Date2))
        {
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            PrintingText::PrintTextOnScreen("Yes date 1 is less than date 2");
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 20);
        }
        else 
        {
            PrintingText::PrintSequenceOfCharacters('*', 20);
            PrintingText::PrintLines();
            PrintingText::PrintTextOnScreen("No date 1 is not less than date 2");
            PrintingText::PrintLines();
            PrintingText::PrintSequenceOfCharacters('*', 20);
        }
    }
}

