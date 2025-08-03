#pragma once

#include "..\..\Libraries\ReadingInputs.h"
#include "..\..\Libraries\PrintingOutputs.h"

using namespace std;

string ReverseStringUsingRangedLoop(string &Text)
{
    string ReversedString = "";
    for(char Character : Text)
        ReversedString = Character + ReversedString;
    return ReversedString;
}

void Print()
{
    string Text = "hello";
    PrintingText::PrintTextOnScreen(ReverseStringUsingRangedLoop(Text));
}