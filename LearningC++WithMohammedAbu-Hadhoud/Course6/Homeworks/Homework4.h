#pragma once 

#include "..\..\Libraries\ReadingInputs.h"
#include "..\..\Libraries\PrintingOutputs.h"

// int Result = 1;
// int SquareofNumber(short Base, short Power)
// {
//     if(Power != 0)
//     {
//         Result = Result * Base;
//         SquareofNumber(Base, Power - 1);
//     }
//     return Result;
// }

int SquareofNumber(short Base, short Power)
{
    if(Power == 0)
        return 1;
    else 
        return Base * SquareofNumber(Base, Power - 1);
}

// int _SquareofNumber(short Base, short Power)
// {
//     int Result = 1;
//     for(short loop = 0; loop < Power; loop++)
//     {
//         Result = Result * Base;
//     }
//     return Result;
// }

void Print()
{
    short base = ReadNumbers::ReadingShortNumber("Enter the base: ");
    short power = ReadNumbers::ReadingShortNumber("Enter the power: ");
    PrintNumbers::PrintIntegerNumber( SquareofNumber(base, power));
    // PrintNumbers::PrintIntegerNumber(_SquareofNumber(base, power));
}