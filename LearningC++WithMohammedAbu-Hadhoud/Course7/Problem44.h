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
    string Word = ReadText::ReadTextOnScreen("Enter a Sentence to remove all punctuations from your string: ");
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();


    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Your string after removing all the punctuations from it: ");
    PrintingText::PrintTextOnScreen(StringsOperations::RemovePunctuations(Word));
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();

    
}
