#pragma once

#include "..\Libraries\ArraysOperations.h"

void Print()
{
    srand((unsigned)time(NULL));
    int Matrix[100][100] = {{0, 0, 2, 0, 1}, {1, 2, 3, 9, 8}, {0, 0, 1, 3, 4}, {0, 0, 0, 0, 0}, {4, 3, 2, 4, 9}};
    ArrayOperations::PrintMatrixData(Matrix, 5, 5, "Your array: ", 1);
    if (ArrayOperations::isMatrixSparse(Matrix, 5, 5))
    {
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Yes your array is sparse !");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
    }
    else
    {
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Yes your array is not sparse !");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
    }
}
