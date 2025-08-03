#pragma once

#include "..\Libraries\ArraysOperations.h"
#include "..\Libraries\ClearingScreenFunctions.h"

void Print()
{

    ClearingScreenFunction::clearScreen();
    srand((unsigned)time(NULL));
    
    
    int Array[100][100] = {{1, 2, 1}, {5, 5, 5}, {7, 3, 7}};
    ArrayOperations::PrintMatrixData(Array, 3, 3, "your array: ", 3);

    PrintingText::PrintSequenceOfCharacters('*', 40);
    PrintingText::PrintLines();
    if(ArrayOperations::isMatrixPalindrome(Array, 3, 3))
        PrintingText::PrintTextOnScreen("Yes your matrix palindrome !");
    else 
        PrintingText::PrintTextOnScreen("No your array not palindrome !");
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 40);
    PrintingText::PrintLines();


}
