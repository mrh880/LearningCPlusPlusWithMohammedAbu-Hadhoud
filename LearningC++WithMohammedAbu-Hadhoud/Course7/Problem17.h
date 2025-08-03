#pragma once

#include "..\Libraries\ArraysOperations.h"

void Print()
{
    srand((unsigned)time(NULL));
    int Matrix[100][100];
    ArrayOperations::FillMatrixWithRandomNumbers(Matrix, 4, 4, 1, 100);
    ArrayOperations::PrintMatrixData(Matrix, 4, 4, "Your array: ", 3);


    PrintingText::PrintSequenceOfCharacters('*', 70);
    PrintingText::PrintLines();
    int NumberToLookFor = ReadNumbers::ReadingIntegerNumber("Enter a number to see if it exists int the array or not: ");
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 70);
    PrintingText::PrintLines();

    if(ArrayOperations::DoesNumberExistInMatrix(Matrix, 4, 4, NumberToLookFor))
    {
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
        PrintNumbers::PrintIntegerNumber(NumberToLookFor);
        PrintingText::PrintTextOnScreen(" was found in the array !");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 30);
        PrintingText::PrintLines();
    }
    else
    {
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        PrintNumbers::PrintIntegerNumber(NumberToLookFor);
        PrintingText::PrintTextOnScreen(" was not found in the array !");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
    }
}
