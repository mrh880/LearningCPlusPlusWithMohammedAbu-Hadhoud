#pragma once

#include "..\Libraries\ArraysOperations.h"

void Print()
{
    srand((unsigned)time(NULL));
    int Matrix[100][100] = {
        {9, 0, 0},
        {0, 9, 0},
        {0, 0, 9}};
    if (ArrayOperations::isMatrixIdentity(Matrix, 3, 3))
    {
        PrintingText::PrintSequenceOfCharacters('*', 20);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Matrix is identity !");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 20);
    }
    else
    {
        PrintingText::PrintSequenceOfCharacters('*', 20);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Matrix is not identity !");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 20);
    }
}