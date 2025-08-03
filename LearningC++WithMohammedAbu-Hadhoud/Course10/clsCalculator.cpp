#include "clsCalculator.h"

#include <iostream>

using std::cout;
using std::endl;

bool clsCalculator::CheckIfNumberIs0(int Number)
{
    return (Number == 0);
}

void clsCalculator::Add(int Number)
{
    _LastNumber = Number;
    _PerviousResult = _Result;
    _LastOperation = "Adding";
    _Result += Number;
}

void clsCalculator::Subtract(int Number)
{
    _LastNumber = Number;
    _PerviousResult = _Result;
    _LastOperation = "Subtracting";
    _Result -= Number;
}
void clsCalculator::Multiply(int Number)
{
    _LastNumber = Number;
    _PerviousResult = _Result;
    _LastOperation = "Multiplying";
    _Result *= Number;
}

void clsCalculator::Divide(int Number)
{
    _LastNumber = Number;
    _PerviousResult = _Result;
    _LastOperation = "Dividing";
    if (CheckIfNumberIs0(Number))
    {
        Number = 1;
    }
    _Result /= Number;
}

void clsCalculator::PrintResult()
{
    cout << "Result After "  << _LastOperation << " " << _LastNumber << " is: " << _Result << endl;
}

void clsCalculator::Clear()
{
    _Result = 0;
    _PerviousResult = 0;
    _LastOperation = "Clear";
    _LastNumber = 0;
}

void clsCalculator::CancelLastOPeration()
{
    _LastNumber = 0;
    _Result = _PerviousResult;
}

float clsCalculator::GetfinalResult()
{
    return _Result;
}