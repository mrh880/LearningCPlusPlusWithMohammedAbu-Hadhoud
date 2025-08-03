#pragma once

#include "..\Libraries\StringsOperations.h"
#include "..\Libraries\PrintingOutputs.h"
#include "..\Libraries\ReadingInputs.h"



void Print()
{

    ClearingScreenFunction::clearScreen();
    PrintStructures::PrintClientsInfoList("clients");
}