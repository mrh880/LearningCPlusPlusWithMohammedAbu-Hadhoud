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

short CountOfVowels(const string &Text)
{
    short Counter = 0;
    for(char Character : Text)
    {
        if(isalpha(Character))
        {
            Character = tolower(Character);
            if(isLetterInArray(Character))
                Counter++;
        }
    }
    return Counter;
}

void Print()
{
    string Text = "hello";
    PrintNumbers::printShortNumber(CountOfVowels(Text));

}