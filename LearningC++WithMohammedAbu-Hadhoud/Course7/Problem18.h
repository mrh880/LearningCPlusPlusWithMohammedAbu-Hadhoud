#pragma once

#include "..\Libraries\ArraysOperations.h"

void Print()
{
    srand((unsigned)time(NULL));
    
    
    int FirstArray[100][100];
    ArrayOperations::FillMatrixWithRandomNumbers(FirstArray, 3, 3, 1, 100);
    ArrayOperations::PrintMatrixData(FirstArray, 3, 3, "First array: ", 3);
    
    int SecondArray[100][100];
    ArrayOperations::FillMatrixWithRandomNumbers(SecondArray, 3, 3, 1, 100);
    ArrayOperations::PrintMatrixData(SecondArray, 3, 3, "Second array: ", 3);
    
    PrintingText::PrintSequenceOfCharacters('*', 70);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Intersected number in both array: ");
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 70);
    PrintingText::PrintLines();
    
    PrintingText::PrintSequenceOfCharacters('*', 70);
    PrintingText::PrintLines();
    ArrayOperations::PrintIntersectedNumbersInMatrices(FirstArray, 3, 3, SecondArray, 3, 3);
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 70);
    PrintingText::PrintLines();
}
