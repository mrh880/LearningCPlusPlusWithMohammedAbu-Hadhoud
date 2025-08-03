#pragma once

#include <vector>

namespace ValidingNumbers
{
    bool isNumberInRangeForShortNumbers(short Number, short From, short To)
    {
        return (Number >= From && Number <= To);
    }

    bool isNumberInRangeFroIntegerNumbers(int Number, int From, int To)
    {
        return (Number >= From && Number <= To);
    }

    bool isNumberInRangeForFloatNumbers(float Number, float From, float To)
    {
        return (Number >= From && Number <= To);
    }

    bool isNumberInRangeForDoubleNumbers(double Number, double From, double To)
    {
        return (Number >= From && Number <= To);
    }

}

namespace ValidingStringsAndCharacters
{
    bool validingString(string WordToCheck, vector<string> &Words)
    {
        for(string &Word : Words)   
        {
            if(Word == WordToCheck)
                return true;
        }
        return false;
    }
}