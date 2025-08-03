#pragma once 

#include "..\..\Libraries\ReadingInputs.h"
#include "..\..\Libraries\PrintingOutputs.h"

void Print()
{
    short Number = ReadNumbers::ReadingShortNumber("Enter a number: ");
    string  Result = (Number == 0) ? "Number equals 0" : (Number > 0) ? "Number is Positive" : "Number Negative";
    PrintingText::PrintTextOnScreen(Result);
}