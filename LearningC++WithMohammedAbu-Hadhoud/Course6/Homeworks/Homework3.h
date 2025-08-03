#pragma once 

#include "..\..\Libraries\ReadingInputs.h"
#include "..\..\Libraries\PrintingOutputs.h"

void PrintNumbersFromNTo1(short End, short Start)
{
    if(End >= Start)
    {
        PrintNumbers::printShortNumber(End);
        PrintNumbersFromNTo1(End - 1, Start);

        cout << endl;
        cout << "f";
        
    }
}
void Print()
{
        short start = ReadNumbers::ReadingShortNumber("Enter the start: ");
    short end = ReadNumbers::ReadingShortNumber("Enter the end: ");
    PrintNumbersFromNTo1(end, start);
}