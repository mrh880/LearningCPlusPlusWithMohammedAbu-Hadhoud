#include "Problem63To64.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"
#include "Libraries\StringsOperations.h"

#include <string>

using namespace std;

namespace Problem63To64
{
    void PrintResult()
    {
        ClearScreen();

        stDate Date;

        string StirngDate = ReadDateInstring("dd/mm/yyyy");

        Date = ConvertDateFromStringToStructure(StirngDate);


        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}