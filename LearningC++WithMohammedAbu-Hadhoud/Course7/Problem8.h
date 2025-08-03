#pragma once

#include "..\Libraries\ArraysOperations.h"

void Print()
{
    srand((unsigned) time(NULL)); 
    int FirstArray[100][100];
    int SecondArray[100][100];
    int ThirdArray[100][100];
    ArrayOperations::FillMatrixWithRandomNumbers(FirstArray, 3, 3, 1, 10);
    ArrayOperations::FillMatrixWithRandomNumbers(SecondArray, 3, 3, 1, 10);
    ArrayOperations::MultiplayTwoMatrices(FirstArray, SecondArray, ThirdArray, 3, 3);
    ArrayOperations::PrintMatrixData(FirstArray, 3, 3, "Your first array: ", 2);
    ArrayOperations::PrintMatrixData(SecondArray, 3, 3, "Your Second array: ", 2);
    ArrayOperations::PrintMatrixData(ThirdArray, 3, 3, "Your third array: ", 2);
}