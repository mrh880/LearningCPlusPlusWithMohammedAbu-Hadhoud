#include "Problem17.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem17
{

    void PrintResult()
    {

        ClearScreen();

        stDate Date1;
        stDate Date2;
        
        ReadDate(Date1);
        ReadDate(Date2);

        PrintNumbers::PrintIntegerNumber(GetDifferentBetweenTwoDates(Date1, Date2));
        PrintingText::PrintLines();
        PrintNumbers::PrintIntegerNumber(GetDifferentBetweenTwoDates(Date1, Date2, true));
        
    }
}
