#pragma once 

#include "..\Libraries\MathOperations.h"
#include "..\Libraries\ArraysOperations.h"


void Print()
{
    srand((unsigned) time(NULL));
    int TwoDArray[100][100] = {0};
    int ArrayOfSum[100] = {0};
    ArrayOperations::FillTwo_D_ArrayWithRandomNumbers(TwoDArray, 3, 3);
    ArrayOperations::PrintTwo_D_ArrayData(TwoDArray, 3, 3);
    ArrayOperations::FillArrayWithSumOfEachColumnsInTwo_D_Array(TwoDArray, 3, 3, ArrayOfSum);
    ArrayOperations::PrintEachSumOfColumnsInTwo_D_Array(ArrayOfSum, 3);
}