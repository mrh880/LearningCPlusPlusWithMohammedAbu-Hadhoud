#include "Problem20To32.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem20To32
{
    void PrintResult()
    {
        ClearScreen();

        stDate Date;

        ReadDate(Date);

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("01-Adding one day is: ");
        Date = IncreaseDateByOneDay(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("02-Adding 10 days is: ");
        Date = IncreaseDateByXDayes(Date, 10);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("03-Adding one week is: ");
        Date = IncreaseDateByOneWeek(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("04-Adding 10 weeks is: ");
        Date = IncreaseDateByXWeeks(Date, 10);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("05-Adding one month is: ");
        Date = IncreaseDateByOneMonth(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("06-Adding 5 month is: ");
        Date = IncreaseDateByXMonths(Date, 5);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("07-Adding one year is: ");
        Date = IncreaseDateByOneYear(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("08-Adding 10 years is: ");
        Date = IncreaseDateByXYears(Date, 10);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("09-Adding 10 years (falster) is: ");
        Date = IncreaseDateByXYearsFaster(Date, 10);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("10-Adding one decade  is: ");
        Date = IncreaseDateByOneDecade(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("11-Adding 10 decades  is: ");
        Date =  IncreaseDateByXDecades(Date, 10);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("12-Adding 10 decades (faster) is: ");
        Date = IncreaseDateByXDecadesFaster(Date, 10);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("13-Adding one century (faster) is: ");
        Date = IncreaseDateByOneCentury(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("14-Adding one millennium (faster) is: ");
        Date = IncreaseDateByOneMillennium(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}