#include "Problem16.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem16
{
    void PrintResult()
    {
        ClearScreen();

        stDate Date;

        ReadDate(Date);

        Date = IncreaseDateByOneDay(Date);

        PrintDate(Date.Day, Date.Month, Date.Year);
    }
}