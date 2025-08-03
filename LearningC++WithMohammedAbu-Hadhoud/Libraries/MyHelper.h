#pragma once

#include <iostream>
#include <string>
#include "Structures.h"

using namespace std;

namespace _ReadingText
{
    string ReadStirng(const string &Text)
    {
        if (!Text.empty())
            cout << Text;
        string UserInput = "";
        getline(cin, UserInput);
        return UserInput;
    }

    char ReadCharacter(const string &Text)
    {
        if (!Text.empty())
            cout << Text;
        char Character = ' ';
        cin >> Character;
        return Character;
    }
}

namespace _PrintText
{
    void PrintTextOnScreen(const string &Text)
    {
        cout << Text;
    }

    void PrintCharacters(char Characters)
    {
        cout << Characters;
    }

    void PrintLines(short NumberOfLines = 1)
    {
        for (short Lines = 0; Lines < NumberOfLines; Lines++)
            cout << endl;
    }

    void PrintTabs(short NumberOfTabs)
    {
        for (short Tabs = 0; Tabs < NumberOfTabs; Tabs++)
            PrintCharacters('\t');
    }

    void PrintSpaces(short NumberOfSpaces)
    {
        for (short Spaces = 0; Spaces < NumberOfSpaces; Spaces++)
            PrintCharacters(' ');
    }

    void PrintSequenceOfCharacters(char Character, short TimeToRepeat)
    {
        for (short Reapeat = 0; Reapeat < TimeToRepeat; Reapeat++)
            cout << Character;
    }

}

namespace _ReadText
{
    string ReadTextOnScreen(const string &Text = "")
    {
        if (!Text.empty())
            _PrintText::PrintTextOnScreen(Text);
        string UserInput = "";
        getline(cin >> ws, UserInput);
        return UserInput;
    }
}

namespace _ReadNumbers
{
    short ReadingShortNumber(const string &Message = "")
    {
        if (!Message.empty())
            cout << Message;
        short Number = 0;
        cin >> Number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            _PrintText::PrintTextOnScreen("Invalid number, enter a valid number: ");
            cin >> Number;
        }
        return Number;
    }

    int ReadingIntegerNumber(const string &Message = "")
    {
        if (!Message.empty())
            cout << Message;
        int Number = 0;
        cin >> Number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            _PrintText::PrintTextOnScreen("Invalid number, enter a valid number: ");
            cin >> Number;
        }
        return Number;
    }

    float ReadFloatingPointNumber(const string &Message = "")
    {
        if (!Message.empty())
            cout << Message;
        float Number = 0;
        cin >> Number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            _PrintText::PrintTextOnScreen("Invalid number, enter a valid number: ");
            cin >> Number;
        }
        _PrintText::PrintLines();
        return Number;
    }

    double ReadingDoubleNumber(const string &Message = "")
    {
        if (!Message.empty())
            cout << Message;
        double Number = 0;
        cin >> Number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            _PrintText::PrintTextOnScreen("Invalid number, enter a valid number: ");
            cin >> Number;
        }
        return Number;
    }
}

namespace _ReadingStructures

{
    void ReadClientInfoWithoutAccountNumber(stClientInfo &ClientInof)
    {
        _PrintText::PrintSequenceOfCharacters('*', 40);
        _PrintText::PrintLines();
        _PrintText::PrintTextOnScreen("!!!!!! READING CLIENT INFO !!!!!!");
        _PrintText::PrintLines();
        _PrintText::PrintSequenceOfCharacters('*', 40);
        _PrintText::PrintLines();

        _PrintText::PrintSequenceOfCharacters('*', 158);
        _PrintText::PrintLines();
        ClientInof.PinCode = _ReadText::ReadTextOnScreen("Enter your pin code: ");
        ClientInof.Name = _ReadText::ReadTextOnScreen("Enter your name: ");
        ClientInof.PhoneNumber = _ReadText::ReadTextOnScreen("Enter you phone number: ");
        ClientInof.AccountBalance = _ReadNumbers::ReadingDoubleNumber("Enter your account balance: ");
        _PrintText::PrintSequenceOfCharacters('*', 158);
        _PrintText::PrintLines();
    }

    void ReadClientInfoWithoutAccountNumber(stClientInfo &ClientInof)
    {
        _PrintText::PrintSequenceOfCharacters('*', 40);
        _PrintText::PrintLines();
        _PrintText::PrintTextOnScreen("!!!!!! READING CLIENT INFO !!!!!!");
        _PrintText::PrintLines();
        _PrintText::PrintSequenceOfCharacters('*', 40);
        _PrintText::PrintLines();

        _PrintText::PrintSequenceOfCharacters('*', 158);
        _PrintText::PrintLines();
        ClientInof.PinCode = _ReadText::ReadTextOnScreen("Enter your pin code: ");
        ClientInof.Name = _ReadText::ReadTextOnScreen("Enter your name: ");
        ClientInof.PhoneNumber = _ReadText::ReadTextOnScreen("Enter you phone number: ");
        ClientInof.AccountBalance = _ReadNumbers::ReadingDoubleNumber("Enter your account balance: ");
        _PrintText::PrintSequenceOfCharacters('*', 158);
        _PrintText::PrintLines();
    }
}