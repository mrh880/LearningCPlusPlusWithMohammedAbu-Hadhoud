#pragma once

#include <iostream>
#include <cmath>

#include "Enums.h"

using namespace std;

namespace CheckEnums
{
    enPrimeOrNotPrime CheckPrime(int Number)
    {
        if(Number <= 0)
            return enPrimeOrNotPrime::NotPrime;
        
        int TimesToCheck = sqrt(Number);
        for (int loop = 2; loop <= TimesToCheck; loop++)
            if (Number % loop == 0)
                return enPrimeOrNotPrime::NotPrime;
        return enPrimeOrNotPrime::Prime;
    }

    enNumberType CheckNumberIsOddOrEven(int Number)
    {
        if (Number % 2 != 1)
            return enNumberType::Even;
        else
            return enNumberType::Odd;
    }

    enPerfectOrNotPerfect isPerfect(int Number)
    {
        int Sum = 0;
        for (int loop = 1; loop < Number; loop++)
            if (Number % loop == 0)
                Sum += loop;

        if (Sum == Number)
            return enPerfectOrNotPerfect::Perfect;
        else
            return enPerfectOrNotPerfect::NotPerfect;
    }
}