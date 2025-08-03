#include "Problem65.h"

#include "Libraries\PrintingOutputs.h"
#include "Libraries\ReadingInputs.h"
#include "Libraries\ClearingScreenFunctions.h"
#include "Libraries\DateAndTime.h"
#include "Libraries\Structures.h"
#include "Libraries\StringsOperations.h"

#include <iostream>
#include <string>

using namespace std;

namespace Problem65
{
    void PrintResult()
    {
        ClearScreen();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        stDate Date;

        ReadDate(Date);

        
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        cin.ignore();
        string Delemiter = ReadText::ReadTextOnScreen("Enter your delemiter: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();

        
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        string DateFormat = ReadText::ReadTextOnScreen("Project23BankProjectPartThree) format of date: ");
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();



        PrintingText::PrintSequenceOfCharacters('*', 80);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Formatted date: ");
        string FormattedDate = FormatDate(Date, DateFormat, Delemiter);
        PrintingText::PrintTextOnScreen(FormattedDate);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 80);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 60);
        PrintingText::PrintLines();

        // string st = "hi/mrh";
        // st = ReplaceFunctionWithSplitFunction(st, "mrh", "mrr", "/");
        // cout << st << endl;

    }
}