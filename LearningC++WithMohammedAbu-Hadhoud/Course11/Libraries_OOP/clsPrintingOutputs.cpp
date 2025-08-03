#include "clsPrintingOutputs.h"

#include <iostream>
#include <string>

using namespace std;

// Printing Outputs class
// -----------------------------------------------------------------------------------------------------

void clsPrintingOutputs::SetNumber(long double Number)
{
    _Number = Number;
}

void clsPrintingOutputs::SetCharacter(char Character)
{
    _Character = Character;
}

void clsPrintingOutputs::SetText(const string &Text)
{
    _Text = Text;
}

long double clsPrintingOutputs::Number()
{
    return _Number;
}

char clsPrintingOutputs::Character()
{
    return _Character;
}

string clsPrintingOutputs::Text()
{
    return _Text;
}

clsPrintingOutputs::clsPrintingOutputs()
{
    _Number = 0;
    _Character = '*';
    _Text = "";
}

clsPrintingOutputs::clsPrintingOutputs(long double Number, char Character, const string &Text)
    : _Number(Number), _Character(Character), _Text(Text),
      PrintingText(Number, Character, Text),
      PrintingNumbers(Number)
{
}

// -----------------------------------------------------------------------------------------------------

// Printing Text class
// // -----------------------------------------------------------------------------------------------------

clsPrintingOutputs::clsPrintingText::clsPrintingText()
{
    _Number = 0;
    _Text = "";
    _Character = '*';
}

clsPrintingOutputs::clsPrintingText::clsPrintingText(short Number, char Character, const std::string &Text)
{
    _Number = Number;
    _Text = Text;
    Character = Character;
}

void clsPrintingOutputs::clsPrintingText::SetNumber(short Number)
{
    _Number = Number;
}

void clsPrintingOutputs::clsPrintingText::SetText(const string &Text)
{
    _Text = Text;
}

void clsPrintingOutputs::clsPrintingText::SetCharacter(char Character)
{
    _Character = Character;
}

short clsPrintingOutputs::clsPrintingText::Number()
{
    return _Number;
}

string clsPrintingOutputs::clsPrintingText::Text()
{
    return _Text;
}

char clsPrintingOutputs::clsPrintingText::Charater()
{
    return _Character;
}

void clsPrintingOutputs::clsPrintingText::StaticPrintTextOnScreen(const string &Text)
{
    if (!Text.empty())
    {
        cout << Text;
    }
}

void clsPrintingOutputs::clsPrintingText::PrintTextOnScreen()
{
    StaticPrintTextOnScreen(_Text);
}

void clsPrintingOutputs::clsPrintingText::StaticPrintLines(short NumberOfLines)
{
    for (short Lines = 0; Lines < NumberOfLines; Lines++)

    {
        cout << endl;
    }
}

void clsPrintingOutputs::clsPrintingText::PrintLines()
{
    clsPrintingOutputs::clsPrintingText::StaticPrintLines(_Number);
}

void clsPrintingOutputs::clsPrintingText::StaticPrintTabs(short NumberOfTabs)
{
    for (short Tabs = 0; Tabs < NumberOfTabs; Tabs++)
    {
        cout << '\t';
    }
}

void clsPrintingOutputs::clsPrintingText::PrintTabs()
{
    clsPrintingOutputs::clsPrintingText::StaticPrintTabs(_Number);
}

void clsPrintingOutputs::clsPrintingText::StaticPrintSpaces(short NumberOfSpaces)
{
    for (short Spaces = 0; Spaces < NumberOfSpaces; Spaces++)
    {
        cout << ' ';
    }
}

void clsPrintingOutputs::clsPrintingText::PrintSpaces()
{
    clsPrintingOutputs::clsPrintingText::StaticPrintSpaces(_Number);
}

void clsPrintingOutputs::clsPrintingText::StaticPrintSequenceOfCharacters(char Character, short TimeToRepeat)
{
    for (short Reapeat = 0; Reapeat < TimeToRepeat; Reapeat++)
    {

        cout << Character;
    }
}

void clsPrintingOutputs::clsPrintingText::PrintSequenceOfCharacters()
{
    clsPrintingOutputs::clsPrintingText::StaticPrintSequenceOfCharacters(_Character, _Number);
}

void clsPrintingOutputs::clsPrintingText::StaticPrintCharacters(char Character)
{
    cout << Character;
}

void clsPrintingOutputs::clsPrintingText::PrintCharacters()
{
    clsPrintingOutputs::clsPrintingText::StaticPrintCharacters(_Character);
}

void clsPrintingOutputs::clsPrintingText::StaticPrintHeader(short NumberOfCharacters, const string &Title)
{
    clsPrintingOutputs::clsPrintingText::StaticPrintSequenceOfCharacters('*', NumberOfCharacters);
    clsPrintingOutputs::clsPrintingText::StaticPrintLines(1);
    clsPrintingOutputs::clsPrintingText::StaticPrintSpaces((NumberOfCharacters - Title.length()) / 2);
    clsPrintingOutputs::clsPrintingText::StaticPrintTextOnScreen(Title);
    clsPrintingOutputs::clsPrintingText::StaticPrintLines(1);
    clsPrintingOutputs::clsPrintingText::StaticPrintSequenceOfCharacters('*', NumberOfCharacters);
    clsPrintingOutputs::clsPrintingText::StaticPrintLines(1);
}

void clsPrintingOutputs::clsPrintingText::PrintHeader()
{
    clsPrintingOutputs::clsPrintingText::StaticPrintHeader(_Number, _Text);
}

// -----------------------------------------------------------------------------------------------------

// Printing Number class
// -----------------------------------------------------------------------------------------------------
clsPrintingOutputs::clsPrintingNumbers::clsPrintingNumbers()
{
    _Number = 0;
}

clsPrintingOutputs::clsPrintingNumbers::clsPrintingNumbers(long double Number)
{
    _Number = Number;
}

void clsPrintingOutputs::clsPrintingNumbers::SetNumber(long double Number)
{
    _Number = Number;
}


long double clsPrintingOutputs::clsPrintingNumbers::Number()
{
    return _Number;
}

// -------------------------------------------------------------------------------------
void clsPrintingOutputs::clsPrintingNumbers::StaticPrintShortNumber(short Number)
{
    cout << Number;
}

void clsPrintingOutputs::clsPrintingNumbers::StaticPrintIntegerNumber(int Number)
{
    cout << Number;
}

void clsPrintingOutputs::clsPrintingNumbers::StaticPrintFloatNumber(float Number)
{
    cout << Number;
}

void clsPrintingOutputs::clsPrintingNumbers::StaticPrintDoubleNumber(double Number)
{
    cout << Number;
}


// ----------------------------------------------------------------------------------------------

void clsPrintingOutputs::clsPrintingNumbers::PrintShortNumber()
{
    cout << _Number;
}

void clsPrintingOutputs::clsPrintingNumbers::PrintIntegerNumber()
{
    cout << _Number;
}

void clsPrintingOutputs::clsPrintingNumbers::PrintFloatNumber()
{
    cout << _Number;
}

void clsPrintingOutputs::clsPrintingNumbers::PrintDoubleNumber()
{
    cout << _Number;
}

void clsPrintingOutputs::clsPrintingNumbers::PrintLongDoubleNumber()
{
    cout << _Number;
}

// -----------------------------------------------------------------------------------------------------
