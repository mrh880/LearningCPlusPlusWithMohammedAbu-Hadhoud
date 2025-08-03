#pragma once 

#include <cctype>
#include "..\..\Libraries\ReadingInputs.h"
#include "..\..\Libraries\PrintingOutputs.h"

using namespace std;

string ReverseString(const string &Text)
{
    string reversedString = "";
    for(char Character : Text)
    {
        reversedString = Character + reversedString;
    }
    return reversedString;
}

void Print()
{
    PrintingText::PrintTextOnScreen(ReverseString("Hello world! How are you?"));
    PrintingText::PrintLines();
}