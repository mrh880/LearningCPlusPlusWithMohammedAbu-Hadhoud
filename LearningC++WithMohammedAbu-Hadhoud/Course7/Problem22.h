#include "..\Libraries\ArraysOperations.h"
#include "..\Libraries\ClearingScreenFunctions.h"

void Print()
{

    ClearingScreenFunction::clearScreen();

    PrintingText::PrintSequenceOfCharacters('*', 20);
    PrintingText::PrintLines();
    int Number = ReadNumbers::ReadingIntegerNumber("Enter a number: ");
    PrintingText::PrintSequenceOfCharacters('*', 20);
    PrintingText::PrintLines();

    PrintingText::PrintSequenceOfCharacters('*', 80);
    PrintingText::PrintLines();

    PrintingText::PrintTextOnScreen("Fibonacci numbers from 1 to ");
    PrintNumbers::PrintIntegerNumber(Number);
    PrintingText::PrintTextOnScreen(" =>> ");
    ArrayOperations::PrintFibonacciUsingLoop(Number);

    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 80);
    PrintingText::PrintLines();

}