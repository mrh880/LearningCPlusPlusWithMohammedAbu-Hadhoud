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
    string Word = ReadText::ReadTextOnScreen("Enter a Sentence to reverse: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen(StringsOperations::ReverseString(Word));
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();

    
}
