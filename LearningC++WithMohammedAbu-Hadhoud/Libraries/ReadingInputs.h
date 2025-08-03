#pragma once
#include <iostream>
#include <string>
#include "Structures.h"
#include "validingData.h"
#include "PrintingOutputs.h"
#include "StringsOperations.h"
#include "ClearingScreenFunctions.h"

using namespace std;

#include "Enums.h"


namespace ReadText
{
    string ReadTextOnScreen(const string &Text = "")
    {
        // cin.ignore();
        if(!Text.empty())
            PrintingText::PrintTextOnScreen(Text);  
        string UserInput = "";
        getline(cin , UserInput);
        return UserInput;
    }
}
namespace ReadNumbers
{
    short ReadingShortNumber(const string &Message = "")
    {
        if (!Message.empty())
            cout << Message;
        short Number = 0;
        cin >> Number;
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            PrintingText::PrintTextOnScreen("Invalid number, enter a valid number: ");
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
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            PrintingText::PrintTextOnScreen("Invalid number, enter a valid number: ");
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
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            PrintingText::PrintTextOnScreen("Invalid number, enter a valid number: ");
            cin >> Number; 
        }
        PrintingText::PrintLines(); 
        return Number;
    }

    double ReadingDoubleNumber(const string &Message = "")
    {
        if (!Message.empty())
            cout << Message;
        double Number = 0;
        cin >> Number;
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            PrintingText::PrintTextOnScreen("Invalid number, enter a valid number: ");
            cin >> Number; 
        }
        return Number;
    }
}

namespace ReadEnums
{
    enNumberType ReadNumberType(int Number)
    {
        if (Number % 2 == 0)
            return enNumberType::Even;

        else
            return enNumberType::Odd;
    }

    stTimeDuration ReadTimeDuration()
    {
        stTimeDuration time_duration;
        cout << "******************\n";
        cout << "GREETING TIME INFO\n";
        cout << "*******************\n";
        cout << "***************************************************\n";
        time_duration.Days = ReadNumbers::ReadingShortNumber("Enter Days: ");
        time_duration.Hours = ReadNumbers::ReadingShortNumber("Enter Hours: ");
        time_duration.Minutes = ReadNumbers::ReadingShortNumber("Enter Minutes: ");
        time_duration.Seconds = ReadNumbers::ReadingShortNumber("Enter Seconds: ");

        return time_duration;
    }
    enMonthsOfTheYear ReadMonthOfTheYear()
    {
        return (enMonthsOfTheYear)ReadNumbers::ReadingShortNumber("Enter a number from the list above: ");
    }

    enCharacterType ReadRandomType()
    {
        short Number = 0;

        do
        {
            Number = ReadNumbers::ReadingShortNumber("Enter a number from the list above: ");
        } while (!ValidingNumbers::isNumberInRangeForShortNumbers(Number, 1, 4));

        return (enCharacterType)Number;
    }
}

namespace ReadStringAndCharacters
{
    string ReadString(const string &Message = "")
    {
        if (!Message.empty())
            cout << Message;
        string String = "";
        getline(cin, String);
        return String;
    }

    char ReadCharacter(const string &Message = "")
    {
        if (!Message.empty())
            cout << Message;
        char Character = ' ';
        cin >> Character;
        return Character;
    }
}

namespace ReadBooleanExertions
{
    bool ReadBooleanExertion(const string &Message)
    {
        cout << Message;

        bool BooleanExpresion = false;
        cin >> BooleanExpresion;
        return BooleanExpresion;
    }
}

namespace ReadTimeAndDays
{
    short ReadDay(const string &Message)
    {
        short Day = 0;

        do
        {
            cout << Message;

            cin >> Day;
        } while (!(Day >= 1 && Day <= 7));

        return Day;
    }

    enDaysOfWeek ReadDayOfWeek()
    {
        short DayOfTheWeek = ReadDay("Choose from the list above: ");
        return (enDaysOfWeek)DayOfTheWeek;
    }

}

namespace ReadingStructures
{
    void ReadClientInfo(stClientInfo &ClientInof)
    {
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("!!!!!! READING CLIENT INFO !!!!!!");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 158);
        PrintingText::PrintLines();
        ClientInof.AccountNumber = ReadText::ReadTextOnScreen("Enter your account number: ");
        ClientInof.PinCode = ReadText::ReadTextOnScreen("Enter your pin code: ");
        ClientInof.Name = ReadText::ReadTextOnScreen("Enter your name: ");
        ClientInof.PhoneNumber = ReadText::ReadTextOnScreen("Enter you phone number: ");
        ClientInof.AccountBalance = ReadNumbers::ReadingDoubleNumber("Enter your account balance: ");
        PrintingText::PrintSequenceOfCharacters('*', 158);
        PrintingText::PrintLines();
    }

    void ReadClientsInfo()
    {
        vector<string> vClientInfo;
        stClientInfo ClientInfo;
        string Answer = "";

        do
        {
            ReadClientInfo(ClientInfo); // Read client data

            vClientInfo.push_back(StringsOperations::ConvertRecordToLine(ClientInfo)); // cnvert a client data to one line
            FilesOperations::SaveVectorToFile(vClientInfo, "Clients");                 // safe client data into  a file
            vClientInfo.clear();                                                       // clear the vector to jsut stor one client data

            Answer = ReadText::ReadTextOnScreen("Do you want to add one more client: ");
            StringsOperations::MakeWholeSentenceLower(Answer);
            PrintingText::PrintLines();
            ClearingScreenFunction::clearScreen();  
        } while (Answer == "yes" || Answer == "y");

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("****** ALL CLIENTS HAVE SUCCESSFULLY SAVED ******");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
    }

    
}