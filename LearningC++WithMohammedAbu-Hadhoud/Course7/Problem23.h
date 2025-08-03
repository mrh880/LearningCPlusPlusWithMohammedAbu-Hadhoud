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
    string Sentence = ReadText::ReadTextOnScreen("Enter a sentence to print the first letter form each word: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("The first letter from each word in your sentence: ");
    StringsOperations::PrintFirstLetterFromEachWordInString(Sentence);
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 80);
    PrintingText::PrintLines();

    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 80);
    PrintingText::PrintLines();

}