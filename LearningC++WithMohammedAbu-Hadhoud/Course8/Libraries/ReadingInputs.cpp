// ReadingInputs.cpp
#include <iostream>
#include <string>
#include <limits>

#include "ReadingInputs.h"

#include "PrintingOutputs.h"

using namespace std;

namespace ReadText
{
    string ReadTextOnScreen(const string &Text)
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

namespace ReadNumbers
{
    short ReadingShortNumber(const string &Message)
    {
        if (!Message.empty())
            cout << Message;
        short Number = 0;
        cin >> Number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            PrintingText::PrintTextOnScreen("Invalid number, enter a valid number: ");
            cin >> Number;
        }
        return Number;
    }

    int ReadingIntegerNumber(const string &Message)
    {
        if (!Message.empty())
            cout << Message;
        int Number = 0;
        cin >> Number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            PrintingText::PrintTextOnScreen("Invalid number, enter a valid number: ");
            cin >> Number;
        }
        return Number;
    }

    float ReadFloatingPointNumber(const string &Message)
    {
        if (!Message.empty())
            cout << Message;
        float Number = 0;
        cin >> Number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            PrintingText::PrintTextOnScreen("Invalid number, enter a valid number: ");
            cin >> Number;
        }
        PrintingText::PrintLines();
        return Number;
    }

    double ReadingDoubleNumber(const string &Message)
    {
        if (!Message.empty())
            cout << Message;
        long double Number = 0;
        cin >> Number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            PrintingText::PrintTextOnScreen("Invalid number, enter a valid number: ");
            cin >> Number;
        }
        return Number;
    }
}



