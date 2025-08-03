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
    string Word = ReadText::ReadTextOnScreen("Enter a Sentence to replace a word in it: ");
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    


    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    string WordToReplace = ReadText::ReadTextOnScreen("Enter a word that you want to replace : ");
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();


    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    string WordToReplaceTo = ReadText::ReadTextOnScreen("Enter a word that you want to replace with : ");
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    


    PrintingText::PrintLines();
    
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Your sentence after replacing the word: ");
    PrintingText::PrintTextOnScreen(StringsOperations::ReplaceFunctionWithSplitFunction(Word, WordToReplace, WordToReplaceTo, true));
    PrintingText::PrintLines();
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();

    
}
