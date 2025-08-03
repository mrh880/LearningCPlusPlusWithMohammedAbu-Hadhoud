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
    string Word = ReadText::ReadTextOnScreen("Enter a sentence to change every letter case to the opposite case: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();


    PrintingText::PrintSequenceOfCharacters('*',100);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Your sentence after chaning letter case to the opposite case: ");
    StringsOperations::MakeTheWholeSentenceToTheOpssiteCase(Word); 
    PrintingText::PrintTextOnScreen(Word);
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

}