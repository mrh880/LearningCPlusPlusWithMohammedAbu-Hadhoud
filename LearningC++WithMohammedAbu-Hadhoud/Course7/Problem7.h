#pragma once 

#include "..\Libraries\MathOperations.h"
#include "..\Libraries\ArraysOperations.h"

void Print()
{
    int Array[100][100];
    ArrayOperations::FillTwo_D_ArrayWithOrderedNumbers(Array, 3, 3);

    PrintingText::PrintSequenceOfCharacters('*', 50);
    PrintingText::PrintLines();
    cout << "Your array before to get your array transposed: " << endl;
    PrintingText::PrintSequenceOfCharacters('*', 50);
    PrintingText::PrintLines();

    ArrayOperations::PrintTwo_D_ArrayData(Array, 3, 3);

    ArrayOperations::GetTransposeMatrix(Array, 3, 3);

    PrintingText::PrintSequenceOfCharacters('*', 50);
    PrintingText::PrintLines();
    cout << "Your array after to get your array transposed: " << endl;
    PrintingText::PrintSequenceOfCharacters('*', 50);
    PrintingText::PrintLines();

    ArrayOperations::PrintTwo_D_ArrayData(Array, 3, 3);    
}