#pragma once 

// #include "Libraries\Enums.h"
// #include "../Libraries/CheckDataTypes.h"
// #include "../../Libraries/CheckDataTypes.h"
#include "..\..\Libraries\ReadingInputs.h"
#include "..\..\Libraries\PrintingOutputs.h"

void Print()
{
    short Mark = ReadNumbers::ReadingShortNumber("Enter your mark: ");
    string Result = (Mark >= 50) ? "Pass" : "Fail";
    PrintingText::PrintTextOnScreen(Result);
    PrintingText::PrintLines();
}