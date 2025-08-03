#pragma once

#include "..\..\Libraries\ReadingInputs.h"
#include "..\..\Libraries\PrintingOutputs.h"

void FillArrayWithMultiplicationTable(short Array[10][10], short SizeOfArray)
{
    for (short OuterLoop = 0; OuterLoop < SizeOfArray; OuterLoop++)
    {
        for (short InnerLoop = 0; InnerLoop < SizeOfArray; InnerLoop++)
            Array[OuterLoop][InnerLoop] = (OuterLoop + 1) * (InnerLoop + 1);
    }
}

void PrintArrayData(short Array[10][10], short SizeOfArray)
{
    for (short OuterLoop = 0; OuterLoop < SizeOfArray; OuterLoop++)
    {
        for (short InnerLoop = 0; InnerLoop < SizeOfArray; InnerLoop++)
        {
            printf("%0*d ", 2, Array[OuterLoop][InnerLoop]);
        }
        PrintingText::PrintLines();
    }
}

void Print()
{
    short MyArray[10][10] = {0}, SizeOfMyArray = 10;
    FillArrayWithMultiplicationTable(MyArray, SizeOfMyArray);
    PrintArrayData(MyArray, SizeOfMyArray);
}