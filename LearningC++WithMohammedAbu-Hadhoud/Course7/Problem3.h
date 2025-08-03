#pragma once 

#include "..\Libraries\MathOperations.h"
#include "..\Libraries\ArraysOperations.h"


void Print()
{
    srand((unsigned) time(NULL));
    int TwoDArray[100][100];
    int ArrayOfSum[100];
    ArrayOperations::FillTwo_D_ArrayWithRandomNumbers(TwoDArray, 3, 3);
    ArrayOperations::PrintTwo_D_ArrayData(TwoDArray, 3, 3);
    ArrayOperations::GetTheSumOfEachRowIn_2D_Array(TwoDArray, 3, 3, ArrayOfSum);
    ArrayOperations::PrintTheSumOfEachRowInTwo_D_Row(ArrayOfSum, 3);
}