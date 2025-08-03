#include "Problem14.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"

namespace Problem14
{
    void PrintResult()
    {
        ClearScreen();

        stDate Date1;
        ReadDate(Date1);

        stDate Date2;
        ReadDate(Date2);
        
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        if(isDate1EqualsToDate2(Date1, Date2))
        {
            PrintingText::PrintTextOnScreen("Yes date 1 is equals to date 2");
        }
        else 
        {
            PrintingText::PrintTextOnScreen("No date 1 is not equals to date 2");
        }
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 40);
      
    }
       
}