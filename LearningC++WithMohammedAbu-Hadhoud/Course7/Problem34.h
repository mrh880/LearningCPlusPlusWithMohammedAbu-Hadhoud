#pragma once

#include "..\Libraries\StringsOperations.h"
#include "..\Libraries\PrintingOutputs.h"
#include "..\Libraries\ReadingInputs.h"
#include "..\Libraries\ClearingScreenFunctions.h"

void Print()
{

    ClearingScreenFunction::clearScreen();

    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    string Word = ReadText::ReadTextOnScreen("Enter a sentence to print all the vowels character in it: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

    PrintingText::PrintTextOnScreen("All the vowels character in your sentence: ");
    StringsOperations::PrintVowelsInString(Word);
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();
}
