#pragma once

#include "..\Libraries\StringsOperations.h"
#include "..\Libraries\PrintingOutputs.h"
#include "..\Libraries\ReadingInputs.h"
#include "..\Libraries\ClearingScreenFunctions.h"





void Print()
{

    ClearingScreenFunction::clearScreen();

    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
    stClientInfo ClientInfo;
    ReadingStructures::ReadClinetInfo(ClientInfo);
    PrintingText::PrintTextOnScreen(StringsOperations::ConvertRecordToLine(ClientInfo));
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();


    
}
