#include "Problem55.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem55
{
    void PrintResult()
    {
        ClearScreen();

        stDate DateFrom;

        ReadDate(DateFrom);

        short NumberOfDays = ReadNumbers::ReadingShortNumber("Enter number of days: ");

        DateFrom = CalculateVacationReturnDate(DateFrom, NumberOfDays);

        PrintDate(DateFrom);

    }
}