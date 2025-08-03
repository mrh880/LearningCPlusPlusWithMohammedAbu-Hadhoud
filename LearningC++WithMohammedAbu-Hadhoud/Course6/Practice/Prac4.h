#pragma once 

#include <cctype>
#include "..\..\Libraries\ReadingInputs.h"
#include "..\..\Libraries\PrintingOutputs.h"

using namespace std;

char Vowels[5] = {'a', 'e', 'i', 'o', 'u'};

bool isLetterInArray(char Letter)
{
    for(char Character : Vowels)
        if(Character == Letter)
            return true;
    return false;
}

void CountOfVowelsAndConstants(const string &Text, short &_VowelsCount, short &_ConsonantCount)
{
    for(char Character : Text)
    {
        if(isalpha(Character))
        {
            Character = tolower(Character);
            if(isLetterInArray(Character))
                _VowelsCount++;
            else 
                _ConsonantCount++;
            
        }
    }
}

void Print()
{
    string Text = "hello";
    short VowelsCounts = 0;
    short consonantsCounts = 0;
    CountOfVowelsAndConstants(Text, VowelsCounts, consonantsCounts);
    PrintingText::PrintTextOnScreen("Count of vowels: ");
    PrintNumbers::printShortNumber(VowelsCounts);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Count of constants: ");
    PrintNumbers::printShortNumber(consonantsCounts);
    PrintingText::PrintLines();
}