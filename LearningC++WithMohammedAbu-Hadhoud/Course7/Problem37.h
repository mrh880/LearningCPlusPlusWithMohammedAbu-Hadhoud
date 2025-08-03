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
    string Word = ReadText::ReadTextOnScreen("Enter a sentence to split them by words and print them each one on line: ");
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();


    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

    PrintingText::PrintTextOnScreen("Your sentence has ");
    vector<string>MyWords = StringsOperations::SplitWordInSentence(Word, " ");
    PrintNumbers::PrintIntegerNumber(MyWords.size());   
    PrintingText::PrintTextOnScreen(" words ");

    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();

    PrintingText::PrintTextOnScreen("Your words after split them: ");
    PrintingText::PrintLines();
    for(string &Line : MyWords)
    {
        PrintingText::PrintTextOnScreen(Line);
        PrintingText::PrintLines();
    }

    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 100);
    PrintingText::PrintLines();


}
