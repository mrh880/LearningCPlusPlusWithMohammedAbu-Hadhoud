#pragma once 

#include "..\Libraries\MathOperations.h"
#include "..\Libraries\ArraysOperations.h"

void Print()
{
    int Array[100][100];
    ArrayOperations::FillTwo_D_ArrayWithOrderedNumbers(Array, 3, 3);
    ArrayOperations::PrintTwo_D_ArrayData(Array, 3, 3);
}