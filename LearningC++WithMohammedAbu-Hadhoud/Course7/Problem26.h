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
    string Sentence = ReadText::ReadTextOnScreen("Enter a sentence to make the whole stirng upper and then lower: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Your sentence after making the whole sentence capital: ");
    StringsOperations::MakeWholeSentenceUpper(Sentence);
    PrintingText::PrintTextOnScreen(Sentence);
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*',100);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Your sentence after making the whole sentence small: ");
    StringsOperations::MakeWholeSentenceLower(Sentence);
    PrintingText::PrintTextOnScreen(Sentence);
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

}