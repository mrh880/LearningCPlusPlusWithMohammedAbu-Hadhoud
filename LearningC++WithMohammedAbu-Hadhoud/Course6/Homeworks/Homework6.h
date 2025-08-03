#pragma once

#include <vector>
#include "..\..\Libraries\ReadingInputs.h"
#include "..\..\Libraries\PrintingOutputs.h"

void FillVectorDependingOnTheUserInput(vector<short> &vNumbers)
{
    short Number = ReadNumbers::ReadingShortNumber("Enter a number: ");
    vNumbers.push_back(Number);
    string Answer = ReadText::ReadTextOnScreen("Do you want to add one more element [Y/N]: ");
    while(Answer == "yes" || Answer == "y" || Answer == "Yes" || Answer == "Y")
    {
        Number = ReadNumbers::ReadingShortNumber("Enter a number: ");
        vNumbers.push_back(Number);
        Answer = ReadText::ReadTextOnScreen("Do you want to add one more element[Y/N]: ");
    }
}

void PrintVectorData(vector<short> &VNumbers)
{
    PrintingText::PrintTextOnScreen("Your vector elements [");
    short SizeOfvNumbers = VNumbers.size();
    short Counter = 0;
    for(short Number : VNumbers)
    {
        Counter++;
        if(Counter != SizeOfvNumbers)
        {
            PrintNumbers::printShortNumber(Number);
            PrintingText::PrintCharacters(' ');
        }
        else 
            PrintNumbers::printShortNumber(Number);
    }
    PrintingText::PrintTextOnScreen("]\n");
}

void Print()
{
    vector<short>vMyVector;
    FillVectorDependingOnTheUserInput(vMyVector);
    PrintVectorData(vMyVector);
}