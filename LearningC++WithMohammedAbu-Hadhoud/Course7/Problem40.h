#pragma once

#include "..\Libraries\StringsOperations.h"
#include "..\Libraries\PrintingOutputs.h"
#include "..\Libraries\ReadingInputs.h"
#include "..\Libraries\ClearingScreenFunctions.h"

string ConvertingTrimSideIntoText(short Number)
{
    string TrimSides[3] = {"Right", "Left", "Both"};
    return TrimSides[Number - 1];
}

void Print()
{

    ClearingScreenFunction::clearScreen();

    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    string Array[4] = {"mrh", "mrr", "mry", "mra"};
    string JoinedString = "";
    JoinedString = StringsOperations::JoinStrings(Array, 4, " ");
    PrintingText::PrintTextOnScreen(JoinedString);
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
}
