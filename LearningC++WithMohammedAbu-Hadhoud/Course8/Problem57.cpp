#include "Problem57.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem57
{
    void PrintResult()
    {

        ClearScreen();
        
        stDate Date1;
        stDate Date2;

        ReadDate(Date1);
        ReadDate(Date2);

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintNumbers::printShortNumber(CompreTwoDates(Date1, Date2));

        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}