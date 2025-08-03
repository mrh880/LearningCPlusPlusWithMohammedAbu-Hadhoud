#pragma once

#include "..\Libraries\StringsOperations.h"
#include "..\Libraries\PrintingOutputs.h"
#include "..\Libraries\ReadingInputs.h"

using namespace std;


void Print()
{

    // ClearingScreenFunction::clearScreen();

    PrintingText::PrintTabs(7); PrintingText::PrintSequenceOfCharacters('*', 60); PrintingText::PrintLines(); 
    PrintingText::PrintTabs(8); PrintingText::PrintTextOnScreen("!!!!!!!!!! Adding clients menu !!!!!!!!!!"); PrintingText::PrintLines();
    PrintingText::PrintTabs(7); PrintingText::PrintSequenceOfCharacters('*', 60); PrintingText::PrintLines(); 

    ReadingStructures::ReadClientsInfo();

}
