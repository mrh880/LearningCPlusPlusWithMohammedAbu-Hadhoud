#pragma once
#include "Enums.h"
#include "MathOperations.h"

namespace GetRandomCharacter
{
    char GetRandomCharacter(enCharacterType Random)
    {
        switch (Random)
        {
        case enCharacterType::SmallLetters:
            return char(MathOperations::RandomNumber(97, 122));

        case enCharacterType::Capitalletters:
            return char(MathOperations::RandomNumber(65, 90));

        case enCharacterType::SpecialCharacters:
            return char(MathOperations::RandomNumber(33, 47));

        case enCharacterType::Digit:
            return char(MathOperations::RandomNumber(48, 57));

        default:
            char(MathOperations::RandomNumber(65, 90));
        }
        return '3';
    }

    string GenerateWord(enCharacterType CharacterType, short LengthOfWord)
    {
        string Word = "";

        for (short loop = 1; loop <= LengthOfWord; loop++)
        {
            Word += GetRandomCharacter(enCharacterType::Capitalletters);
        }
        return Word;
    }

    string GenerateKey(short LengthOfKey, short LengthOfWord)
    {
        string Key = "";

        for (short loop = 1; loop <= LengthOfKey; loop++)
        {
            if (loop != LengthOfKey)
            {
                Key += GenerateWord(enCharacterType::Capitalletters, LengthOfWord);
                Key += '-';
            }
            else
                Key += GenerateWord(enCharacterType::Capitalletters, LengthOfWord);
        }

        return Key;
    }
}