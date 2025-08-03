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
    string Line = "C333#//#1544#//#mrh#//#737777333#//#50   0.000000";
    PrintingText::PrintTextOnScreen("Your line: ");
    PrintingText::PrintTextOnScreen(Line);
    PrintingText::PrintLines();
    StringsOperations::ConvertLineToRecord(Line, ClientInfo);
    PrintStructures::PrintClientInfo(ClientInfo);
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 158);
    PrintingText::PrintLines();
}
