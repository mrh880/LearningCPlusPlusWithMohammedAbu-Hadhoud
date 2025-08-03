#pragma once

#include "..\Libraries\ArraysOperations.h"

void Print()
{
    srand((unsigned)time(NULL));
    int Matrix[100][100];
    ArrayOperations::FillMatrixWithRandomNumbers(Matrix, 4, 4, 1, 10);
    ArrayOperations::PrintMatrixData(Matrix, 4, 4, "Your array: ", 2);

    PrintingText::PrintSequenceOfCharacters('*', 80);
    PrintingText::PrintLines();
    short NumberToSearchFor = ReadNumbers::ReadingIntegerNumber("Enter a number to look how many time it has appeared int the Your array: ");
    PrintingText::PrintSequenceOfCharacters('*', 80);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 40);
    PrintingText::PrintLines();
    PrintNumbers::PrintIntegerNumber(NumberToSearchFor);
    PrintingText::PrintTextOnScreen(" has appeared ");
    PrintNumbers::PrintIntegerNumber(ArrayOperations::countNumberInMatrix(Matrix, 4, 4, NumberToSearchFor));
    PrintingText::PrintTextOnScreen(" times !");
    PrintingText::PrintLines();


    PrintingText::PrintSequenceOfCharacters('*', 40);
    PrintingText::PrintLines();
}