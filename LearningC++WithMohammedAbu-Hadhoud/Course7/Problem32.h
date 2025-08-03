#pragma once

#include "..\Libraries\StringsOperations.h"
#include "..\Libraries\PrintingOutputs.h"
#include "..\Libraries\ReadingInputs.h"
#include "..\Libraries\ClearingScreenFunctions.h"

void Print()
{

    ClearingScreenFunction::clearScreen();

    PrintingText::PrintSequenceOfCharacters('*', 58);
    PrintingText::PrintLines();
    char Character = ReadStringAndCharacters::ReadCharacter("Enter a character to see if it is vowel or not: ");
    PrintingText::PrintSequenceOfCharacters('*', 58);
    PrintingText::PrintLines();


    PrintingText::PrintSequenceOfCharacters('*',100);
    PrintingText::PrintLines();
    
    
    if(StringsOperations::isVowel(Character))
    {
        PrintingText::PrintTextOnScreen("Yes ");
        PrintingText::PrintCharacters(Character); 
        PrintingText::PrintTextOnScreen(" is vowel");
    }
    else
    {
        PrintingText::PrintTextOnScreen("No  ");
        PrintingText::PrintCharacters(Character); 
        PrintingText::PrintTextOnScreen(" is not vowel");
    }
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

}