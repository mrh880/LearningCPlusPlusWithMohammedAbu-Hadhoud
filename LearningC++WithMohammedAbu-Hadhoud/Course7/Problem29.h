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
    string Word = ReadText::ReadTextOnScreen("Enter a sentence to count all the capital and small letter: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*',100);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("The length of your word: ");
    PrintNumbers::PrintIntegerNumber(Word.length());    
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();



    PrintingText::PrintSequenceOfCharacters('*',100);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("The count of capital letters in your sentence: ");
    PrintNumbers::PrintIntegerNumber(StringsOperations::CountCapitalLettersInString (Word));  
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*',100);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("The count of small letters in your sentence: ");
    PrintNumbers::PrintIntegerNumber(StringsOperations::CountSmallLettersInString (Word));  
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

}