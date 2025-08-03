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
    char Sentence = ReadStringAndCharacters::ReadCharacter("Enter a character to make letter into the opposite case: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();


    PrintingText::PrintSequenceOfCharacters('*',100);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Your letter after making into the opposite case: ");
    StringsOperations::ChangeLetterCaseToTheOpssiteCase(Sentence);  
    PrintingText::PrintCharacters(Sentence);
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

}