#pragma once

#include "..\Libraries\ArraysOperations.h"

void Print()
{
    srand((unsigned)time(NULL));
    int Array[100][100];
    ArrayOperations::FillTwo_D_ArrayWithOrderedNumbers(Array, 3, 3);
    ArrayOperations::PrintMatrixData(Array, 3, 3, "Your array: ", 2);
    ArrayOperations::PrintMiddleRowInMatrix(Array, 3, 3, 2);
    ArrayOperations::PrintMiddleColumnsINMatrix(Array, 3, 3, 2);
}