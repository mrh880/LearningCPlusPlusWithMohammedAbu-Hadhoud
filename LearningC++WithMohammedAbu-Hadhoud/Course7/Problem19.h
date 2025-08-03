#pragma once

#include "..\Libraries\ArraysOperations.h"
#include "..\Libraries\ClearingScreenFunctions.h"

void Print()
{

    ClearingScreenFunction::clearScreen();
    srand((unsigned)time(NULL));
    
    
    int Array[100][100];
    ArrayOperations::FillMatrixWithRandomNumbers(Array, 3, 3, 1, 100);
    ArrayOperations::PrintMatrixData(Array, 3, 3, "First array: ", 3);

    PrintingText::PrintSequenceOfCharacters('*', 70);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("The min number in your array: ");
    PrintNumbers::PrintIntegerNumber(ArrayOperations::MinNumberInMatrix(Array, 3, 3));
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 70);
    PrintingText::PrintLines();
    
    PrintingText::PrintSequenceOfCharacters('*', 70);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("The max number in your array: ");
    PrintNumbers::PrintIntegerNumber(ArrayOperations::MaxNumberInMatrix(Array, 3, 3));
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 70);
    PrintingText::PrintLines();


}
