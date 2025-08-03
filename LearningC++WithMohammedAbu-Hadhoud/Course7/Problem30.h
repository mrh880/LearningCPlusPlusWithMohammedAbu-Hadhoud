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
    string Word = ReadText::ReadTextOnScreen("Enter a sentence: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    char Character = ReadStringAndCharacters::ReadCharacter("Enter a character: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();


    PrintingText::PrintSequenceOfCharacters('*',100);
    PrintingText::PrintLines();
    PrintingText::PrintCharacters(Character);
    PrintingText::PrintTextOnScreen(" has appeared ");
    PrintNumbers::PrintIntegerNumber(StringsOperations::CountOfLetterInString(Word, Character));
    PrintingText::PrintTextOnScreen(" times ");
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

}