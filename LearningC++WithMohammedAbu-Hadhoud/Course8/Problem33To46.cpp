#include "Problem33To46.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"

namespace Problem33To46
{
    void PrintResult()
    {
        ClearScreen();

        stDate Date;

        ReadDate(Date);

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("01-Subtracting one day is: ");
        Date = DecreaseDateByOneDay(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("02-Subtracting 10 days is: ");
        Date = DecreaseDateByXDays(Date, 10);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("03-Subtracting one week is: ");
        Date = DecreaseDateByOneWeek(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("04-Subtracting 10 weeks is: ");
        Date = DecreaseDateByXWeeks(Date, 10);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("05-Subtracting one month is: ");
        Date = DecreaseDateByOneMonth(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("06-Subtracting 5 month is: ");
        Date = DecreaseDateByXMonths(Date, 5);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("07-Subtracting one year is: ");
        Date = DecreaseDateByOneYear(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("08-Subtracting 10 years is: ");
        Date = DecreaseDateByXYears(Date, 10);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("09-Subtracting 10 years (falster) is: ");
        Date = DecreaseDateByXYearsFaster(Date, 10);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("10-Subtracting one decade  is: ");
        Date = DecreaseDateByOneDecade(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("11-Subtracting 10 decades  is: ");
        Date =  DecreaseDateByXDecades(Date, 10);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        Date = DecreaseDateByXDecadesFaster(Date, 10);
        PrintingText::PrintTextOnScreen("12-Subtracting 10 decades (faster) is: ");
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("13-Subtracting one century (faster) is: ");
        Date = DecreaseDateByOneCentury(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("14-Subtracting one millennium (faster) is: ");
        Date = DecreaseDateByOneMillennium(Date);
        PrintDate(Date);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();
    }
}