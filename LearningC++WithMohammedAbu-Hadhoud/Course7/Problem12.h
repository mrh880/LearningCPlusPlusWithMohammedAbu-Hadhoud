#pragma once

#include "..\Libraries\ArraysOperations.h"

void Print()
{
    srand((unsigned)time(NULL));
    int FirstArray[100][100];
    int SecondArray[100][100];
    ArrayOperations::FillMatrixWithRandomNumbers(FirstArray, 3, 3, 1, 10);
    ArrayOperations::FillMatrixWithRandomNumbers(SecondArray, 3, 3, 1, 10);
    ArrayOperations::PrintMatrixData(FirstArray, 3, 3, "The first array: ", 2);
    ArrayOperations::PrintMatrixData(SecondArray, 3, 3, "The second array: ", 2);
    if (ArrayOperations::AreMatricesTypical(FirstArray, 3, 3, SecondArray, 3, 3))
    {
        PrintingText::PrintSequenceOfCharacters('*', 20);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Yee matrices are typical !");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 20);
    }
    else
    {
        PrintingText::PrintSequenceOfCharacters('*', 20);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("no matrices are  not typical !");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 20);
    }
}