#pragma once

#include "..\Libraries\ArraysOperations.h"

void Print()
{
    srand((unsigned)time(NULL));
    int Array[100][100];
    ArrayOperations::FillMatrixWithRandomNumbers(Array, 3, 3, 1, 10);
    ArrayOperations::PrintMatrixData(Array, 3, 3, "Your array: ", 2);
    PrintingText::PrintSequenceOfCharacters('*', 20);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Your array sum: ");
    PrintNumbers::PrintIntegerNumber(ArrayOperations::SumOfMatrix(Array, 3, 3));
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 20);
}