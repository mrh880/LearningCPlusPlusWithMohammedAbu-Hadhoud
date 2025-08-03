#pragma once

#include "..\Libraries\StringsOperations.h"
#include "..\Libraries\PrintingOutputs.h"
#include "..\Libraries\ReadingInputs.h"
#include "..\Libraries\ClearingScreenFunctions.h"

string ConvertingTrimSideIntoText(short Number)
{
    string TrimSides[3] = {"Right", "Left", "Both"};
    return TrimSides[Number - 1];
}

void Print()
{



    ClearingScreenFunction::clearScreen();

    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    string Word = ReadText::ReadTextOnScreen("Enter a sr to trim from the right or the left, you choose: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    char CharacterToTrim = ReadStringAndCharacters::ReadCharacter("Enter a character to trim from your string: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    short WhereToTrimFrom = 0;
    do
    {
        WhereToTrimFrom = ReadNumbers::ReadingShortNumber("Enter where to trim you sentence from, ([1]Right, [2]Left, [3]Both): ");
    }while(!ValidingNumbers::isNumberInRangeForShortNumbers(WhereToTrimFrom, 1, 3));
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();



    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();
    string TrimSide = ConvertingTrimSideIntoText(WhereToTrimFrom);
    PrintingText::PrintTextOnScreen("Your sentence after trimming form the ");
    PrintingText::PrintTextOnScreen(TrimSide);
    PrintingText::PrintTextOnScreen(" side/s: ");
    switch(WhereToTrimFrom)
    {
        case 1:
            PrintingText::PrintTextOnScreen(StringsOperations::TrimFromRight(Word, CharacterToTrim));
            break;
        case 2:
            PrintingText::PrintTextOnScreen(StringsOperations::TrimFromLeft(Word, CharacterToTrim));
            break;
        case 3:
            PrintingText::PrintTextOnScreen(StringsOperations::TrimFromBothSides(Word, CharacterToTrim));
            break;  

    }
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

}
