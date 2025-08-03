#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveShortNumber(const string &Message)
{
    int Number = 0;
    do
    {
        cout << Message;

        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void PrintingAline(short lengthOfLine)
{
    for (short loop = 0; loop < lengthOfLine; loop++)
        cout << "*";
    cout << "\n";
}

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;

    return Random;
}

enum enCharacterType
{
    SmallLetters = 1,
    Capitalletters,
    SpecialCharacters,
    Digit
};

char GetRandomCharacter(enCharacterType RandomCharacter)
{
    char Random_character = (char)RandomNumber(97, 122);
    switch (RandomCharacter)
    {
    case enCharacterType::SmallLetters:
        Random_character = (char)(RandomNumber(97, 122));
        break;

    case enCharacterType::Capitalletters:
        Random_character = (char)(RandomNumber(65, 90));
        break;

    case enCharacterType::SpecialCharacters:
        Random_character = (char)(RandomNumber(33, 47));
        break;

    case enCharacterType::Digit:
        Random_character = (char)(RandomNumber(48, 57));
        break;

    default:
        Random_character = (char)(RandomNumber(65, 90));
    }
    return Random_character;
}

void PrintRandomKeys(short Number)
{
    PrintingAline(24);
    cout << "These are your keys !" << endl;
    PrintingAline(24);
    PrintingAline(40);
    for (short OuterLoop = 1; OuterLoop <= Number; OuterLoop++)
    {
        cout << "Key [" << OuterLoop << "] : ";
        short LengthOfKey = 19;
        for (short InnerLoop = 1; InnerLoop <= LengthOfKey; InnerLoop++)
        {
            if (InnerLoop % 5 == 0)
                cout << "-";

            cout << GetRandomCharacter(enCharacterType::Capitalletters);
        }
        cout << endl;
    }
    PrintingAline(40);
}

void ClearingScreenAndGettingGreenColor()
{
    system("cls");
    system("color 0A");
}

void GreetingMessage()
{
    PrintingAline(90);
    cout << "You want to get random Keys Like activation keys you see on websites? let's see know !\n";
    PrintingAline(90);
}

string GenerateWord(enCharacterType, short LengthOfWord)
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

void FillArrayWithRandomKeys(string Array[100], int SizeOfArray, int LengthOfWord, int LengthOfKey)
{
    for (int loop = 0; loop < SizeOfArray; loop++)
        Array[loop] = GenerateKey(LengthOfKey, LengthOfWord);
}

void PrintArraysOfKeys(string Array[100], int SizeOfArray)
{
    for (int loop = 0; loop < SizeOfArray; loop++)
        cout << "Array [" << loop + 1 << "] : " << Array[loop] << endl;
}

void Print()
{
    srand((unsigned)time(NULL));

    ClearingScreenAndGettingGreenColor();
    GreetingMessage();

    int NumberOfKeys = ReadPositiveShortNumber("Enter how many keys you want: ");
    PrintingAline(40);

    PrintingAline(60);
    short LengthOfWord = ReadPositiveShortNumber("Enter the length of your word you want it to be: ");
    PrintingAline(40);

    PrintingAline(60);
    short LengthOfKey = ReadPositiveShortNumber("Enter how many word you want to be in each word: ");
    PrintingAline(60);

    string Array[100];
    int SizeOfArray = NumberOfKeys;

    FillArrayWithRandomKeys(Array, SizeOfArray, LengthOfWord, LengthOfKey);

    PrintArraysOfKeys(Array, SizeOfArray);
}