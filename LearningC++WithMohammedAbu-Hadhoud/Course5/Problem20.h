#include <iostream>

using namespace std;

short ReadPositiveShortNumber(const string& Message)
{
    short Number = 0;
    do 
    {
        cout << Message;

        cin >> Number;
    } while(Number <= 0);

    return Number;
}

bool IsNumberInRAnge(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    
    return Random;
}

enum enRandomSutf {SmallLetters = 1, Capitalletters, SpecialCharacters, Digit};


    enRandomSutf ReadRandomType()
    {
        short Number = 0;

        do
        {
            Number = ReadPositiveShortNumber("Enter a number from the list above: ");
        } while(!IsNumberInRAnge(Number, 1, 4));

        return (enRandomSutf) Number;
    }

char GetRandomType(enRandomSutf Random)
{
    switch(Random)
    {
        case enRandomSutf::SmallLetters:
            return char(RandomNumber(97,122));

        case enRandomSutf::Capitalletters:
            return char(RandomNumber(65, 90));

        case enRandomSutf::SpecialCharacters:
            return char(RandomNumber(33, 47));

        case enRandomSutf::Digit:
            return char(RandomNumber(48, 57));


        default:
            char(RandomNumber(65, 90));
    }   
    return '3';
}

void PrintMenu()
{
    cout << "(1): SmallLetters\n";
    cout << "(2): Capitalletters\n";
    cout << "(3): SpecialCharacters\n";
    cout << "(4): Digit\n";
}

void Print()
{
    srand((unsigned) time(NULL));
    system("cls");
    system("color 0A");
    PrintMenu();
    cout << GetRandomType(ReadRandomType()) << endl;
}
