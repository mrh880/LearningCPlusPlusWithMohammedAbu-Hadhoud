#pragma once 

#include <iostream>
#include "..\..\Libraries\PrintingOutputs.h"

using namespace std;

char FindMostFrequentElementInString(const string &Text, short SizeOfArray)
{
    short Numbers[10] = {0};
    for(char Character : Text)
        if(Character >= '0' && Character <= '9')
            Numbers[Character - '0']++;
    // -----------------------------------------------------------------
    char MostFrequentCharacter = '0';
    short MaxNumber = 0;
    short LengthOfNumbers = sizeof(Numbers) / sizeof(Numbers[0]);
    for(short loop = 0; loop < LengthOfNumbers; loop++)
    {
        if(Numbers[loop] > MaxNumber)
        {
            MaxNumber = Numbers[loop];
            MostFrequentCharacter =  loop + '0';

        }
    }
    // ---------------------------------------------------------------------
    return MostFrequentCharacter;   
}

void Print()
{
    string String = "abcd12345678efg99h1";
    short SizeofString = String.length();
    PrintingText::PrintTextOnScreen("The most frequent in your stirng is: ");
    PrintingText::PrintCharacters(FindMostFrequentElementInString(String, SizeofString));
    }