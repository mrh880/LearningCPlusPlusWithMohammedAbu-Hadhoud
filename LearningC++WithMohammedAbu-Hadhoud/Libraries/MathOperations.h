#pragma once

#include <iostream>
#include "Enums.h"
#include "CheckDataTypes.h"
#include "Structures.h"
#include <stdlib.h>

using namespace std;

namespace MathOperations
{
    int MaxOfTwoNumbers(int FirstNumber, int SeccondNumber)
    {
        if (FirstNumber > SeccondNumber)
            return FirstNumber;

        else
            return SeccondNumber;
    }

    void SwapTowNumbers(int &FirstNumber, int &SecondNumber)
    {
        int Temp = FirstNumber;
        FirstNumber = SecondNumber;
        SecondNumber = Temp;
    }

    int CountDigitsOfNumber(int Number)
    {
        int Counter = 0;
        while (Number > 0)
        {
            Number /= 10;
            Counter++;
        }
        return Counter;
    }
    int SumOfOddNumberFrom1ToN(int N)
    {
        int Sum = 0;

        for (int loop = 1; loop <= N; loop++)
            if (loop % 2 != 0)
                Sum += loop;

        return Sum;
    }

    int SumOfEvenNumberFrom1ToN(int N)
    {
        int Sum = 0;

        for (int loop = 1; loop <= N; loop++)
            if (loop % 2 != 1)
                Sum += loop;
        return Sum;
    }

    int GetFactorialOfNumber(int Number)
    {
        int Factorial = 1;

        for (short loop = 1; loop <= Number; loop++)
            Factorial *= loop;

        return Factorial;
    }

    int GetPower(int Base, int Power)
    {
        int Result = 1;

        for (short loop = 0; loop < Power; loop++)
            Result *= Base;

        return Result;
    }

    string IsNumberPrimeOrNotPrime(int Number)
    {
        if (CheckEnums::CheckPrime(Number) == enPrimeOrNotPrime::Prime)
            return "Prime";
        else
            return "Not Prime";
    }

    enPerfectOrNotPerfect isNumberPerfectOrNotPerfect(int Number)
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

    short SumDigitsOfNumber(int Number)
    {
        int Remainder = 0;
        int Sum = 0;

        while (Number > 0)
        {
            Remainder = Number % 10; // 1
            Number = Number / 10;    //  1
            Sum += Remainder;
        }

        return Sum;
    }

    int ReverseNumber(int Number)
    {
        int Remainder = 0;
        int Result = 0;

        while (Number > 0)
        {
            Remainder = Number % 10;
            Number = Number / 10;
            Result = Result * 10 + Remainder;
        }
        return Result;
    }

    int FrequentDigitInNumber(int Number, short FrequentNumber)
    {
        int Remainder = 0;
        int Counter = 0;

        if (Number < 0)
            Number *= -1;

        while (Number > 0)
        {
            Remainder = Number % 10;
            Number = Number / 10;

            if (FrequentNumber == Remainder)
                Counter++;
        }
        return Counter;
    }

    int GetNumberInReverseWay(int Number)
    {
        int Remainder = 0;
        int Result = 0;

        while (Number > 0)
        {
            Remainder = Number % 10;
            Number = Number / 10;
            Result = Result * 10 + Remainder;
        }
        return Result;
    }

    int RandomNumber(int From, int To)
    {
        int Random = rand() % (To - From + 1) + From;
        return Random;
    }

    float MyAbs(float Number)
    {
        if (Number < 0)
            return Number * -1;
        else
            return Number;
    }

    float GetFractionPart(float Number)
    {
        return Number - int(Number);
    }

    int MyRound(float Number)
    {
        int IntPart = int(Number);
        float FractionPart = GetFractionPart(Number);

        if (abs(FractionPart) == FractionPart)
        {
            if (FractionPart >= 0.5)
                return ++IntPart;
            else
                return IntPart;
        }

        else
        {
            if (FractionPart <= -0.5)
                return --IntPart;
            else
                return IntPart;
        }
    }

    int MyFloor(float Number)
    {
        if (Number >= 0) // if positive
            return Number;
        else // if negative
            return --Number;
    }

    int MyCeil(float Number)
    {
        if (int(Number) == Number) // if the fraction is 0
            return (int)Number;
        else
        {
            if (Number > 0)
                return int(Number) + 1;
            else
                return int(Number);
        }
    }

    int MySqrt(int Number)
    {
        return pow(Number, 0.5);
    }

    
}

namespace CalculationForTmime
{
    const short Days = 24;
    const short Weeks = 7;

    int const SecondsPerSecond = 1;
    int const SecondsPerMinute = SecondsPerSecond * 60;
    int const SecondsPerPerHour = SecondsPerMinute * 60;
    int const SecondsPerDay = SecondsPerPerHour * 24;

    float HoursToWeeks(int Hours)
    {
        float Result = (float)Hours / Days / Weeks;
        return Result;
    }

    float HoursToDays(int Hours)
    {
        float Result = (float)Hours / Days;
        return Result;
    }

    int CalculateTotalSeconds(stTimeDuration time_duration)
    {
        int TotalSecond = (time_duration.Days * SecondsPerDay) + (time_duration.Hours * SecondsPerPerHour) + (time_duration.Minutes * SecondsPerMinute) + (time_duration.Seconds * SecondsPerSecond);
        return TotalSecond;
    }

    stTimeDuration GetTimeDuration(int TotalSeconds)
    {
        stTimeDuration time_duration;

        int Remainder = 0;
        time_duration.Days = TotalSeconds / SecondsPerDay;
        Remainder = TotalSeconds - (SecondsPerDay * time_duration.Days);
        time_duration.Hours = Remainder / SecondsPerPerHour;
        Remainder = Remainder - (time_duration.Hours * SecondsPerPerHour);
        time_duration.Minutes = Remainder / SecondsPerMinute;
        Remainder = Remainder - (time_duration.Minutes * SecondsPerMinute);
        time_duration.Seconds = Remainder * SecondsPerSecond;

        return time_duration;
    }

}