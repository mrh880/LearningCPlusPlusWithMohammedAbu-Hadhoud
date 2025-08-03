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
    string Sentence = ReadText::ReadTextOnScreen("Enter a sentence to make all first letter of each word small: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Your sentence after make every letter small: ");
    StringsOperations::MakeEveryFirstLetterOfEachWordSmall(Sentence);
    PrintingText::PrintTextOnScreen(Sentence);
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 80);
    PrintingText::PrintLines();

    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 80);
    PrintingText::PrintLines();

}