#pragma once

#include "..\Libraries\StringsOperations.h"
#include "..\Libraries\PrintingOutputs.h"
#include "..\Libraries\ReadingInputs.h"


void Print()
{

    ClearingScreenFunction::clearScreen();
    PrintingText::PrintSequenceOfCharacters('*', 40);
    PrintingText::PrintLines();
    string AccountNumber = ReadText::ReadTextOnScreen("Enter an account number: ");
    PrintingText::PrintSequenceOfCharacters('*', 40);
    PrintingText::PrintLines();
    PrintStructures::UpdateClientByAccountNumber("clients", AccountNumber);
}