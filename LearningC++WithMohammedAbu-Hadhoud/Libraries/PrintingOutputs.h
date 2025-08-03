#pragma once

#include <iostream>
#include "CheckDataTypes.h"
#include "Enums.h"
#include "Structures.h"
#include "TextFormat.h"
#include "MathOperations.h"
#include "GenerateRandomDataTypes.h"
#include <iomanip>
#include <vector>
#include "StringsOperations.h"
#include "MyHelper.h"

using namespace std;

namespace PrintingText
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

    void PrintLetterFromAToZ()
    {
        cout << "******************\n";
        cout << "Letter form A to Z\n";
        cout << "******************\n";
        PrintSequenceOfCharacters('*', 20);
        for (short loop = 65; loop <= 90; loop++)
        {
            cout << char(loop) << endl;
        }
        PrintSequenceOfCharacters('*', 20);
    }

    void PrintLettersFormAAAToZZZ()
    {
        for (short FirstLoop = 65; FirstLoop <= 90; FirstLoop++)
        {
            for (short SecondLoop = 65; SecondLoop <= 90; SecondLoop++)
            {
                for (short ThirdLoop = 65; ThirdLoop <= 90; ThirdLoop++)
                    cout << char(FirstLoop) << char(SecondLoop) << char(ThirdLoop) << endl;

                cout << endl;
            }
        }
    }

    void PrintPasswordOrder(string Guess)
    {
        string word = "";
        int counter = 0;

        for (short FirstLoop = 65; FirstLoop <= 90; FirstLoop++)
        {
            for (short SecondLoop = 65; SecondLoop <= 90; SecondLoop++)
            {
                for (short ThirdLoop = 65; ThirdLoop <= 90; ThirdLoop++)
                {
                    word += char(FirstLoop);
                    word += char(SecondLoop);
                    word += char(ThirdLoop);
                    counter++;

                    cout << "Trial [" << counter << "]: " << word << endl;

                    if (word == Guess)
                    {
                        cout << "***********************\n";
                        cout << "password is " << word << endl;
                        cout << "Found after " << counter << " Trial(s)" << endl;
                        cout << "***********************\n";
                        return;
                    }
                    word = "";
                }
            }
        }
    }

    void PrintKeys(int NumberOfKeys, short LengthOfWord, short LengthOfKey)
    {
        PrintSequenceOfCharacters('*', 30);
        cout << "These are your keys !\n";
        PrintSequenceOfCharacters('*', 30);

        for (int loop = 1; loop <= NumberOfKeys; loop++)
        {
            cout << "Key [" << loop << "] : " << GetRandomCharacter::GenerateKey(LengthOfKey, LengthOfWord) << endl;
        }
    }
}

namespace PrintNumbers
{
    void printShortNumber(short Number)
    {
        cout << Number;
    }

    void PrintIntegerNumber(int Number)
    {
        cout << Number;
    }

    void PrintFloatNumber(float Number)
    {
        cout << Number;
    }

    void PrintDoubleNumber(double Number)
    {
        cout << Number;
    }

    void DisplayBeforSwapping(int FirstNumber, int SecondNumber)
    {
        cout << "*************************\n";
        cout << "Befor swapping\n";
        cout << "First number = " << FirstNumber << endl;
        cout << "Second number = " << SecondNumber << endl;
        cout << "*************************\n";
    }

    void DisplayAfterSwapping(int FirstNumber, int SecondNumber)
    {
        cout << "*************************\n";
        cout << "After swapping\n";
        cout << "First number = " << FirstNumber << endl;
        cout << "Second number = " << SecondNumber << endl;
        cout << "*************************\n";
    }

    void PrintHeader()
    {
        cout << "\t\t\t\t\t\t\t\tMultiplication Table From 1 To 10\n\n\t";
        for (short loop = 1; loop <= 10; loop++)
            cout << loop << "\t\t ";
        cout << endl
             << endl;

        for (short loop = 0; loop < 165; loop++)
            cout << "_";
        cout << endl;
    }

    void PrintMultiplicationBody()
    {
        PrintHeader();
        for (short OuterLoop = 1; OuterLoop <= 10; OuterLoop++)
        {
            cout << OuterLoop << spaces(OuterLoop) << "    ";
            for (short InnerLoop = 1; InnerLoop <= 10; InnerLoop++)
            {
                cout << InnerLoop * OuterLoop << "\t\t ";
            }
            cout << endl;
        }
    }

    void PrintDigitsOfNumberInReverseOrder(int Number)
    {
        int Remainder = 0;
        PrintingText::PrintSequenceOfCharacters('*', 20);
        PrintNumbers::printShortNumber(Number);
        PrintingText::PrintTextOnScreen(" in reverse order is ");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 20);
        while (Number > 0)
        {
            Remainder = Number % 10;
            Number = Number / 10;
            cout << Remainder << endl;
        }
    }

    void PrintHowManyTimeEveryDigitAppearedInNumber(int Number)
    {

        PrintingText::PrintSequenceOfCharacters('*', 20);

        for (short loop = 0; loop < 10; loop++)
        {
            short RepeatTimes = 0;
            RepeatTimes = MathOperations::FrequentDigitInNumber(Number, loop);

            if (RepeatTimes > 0)
                cout << loop << " appeared " << RepeatTimes << " times \n";
        }
        PrintingText::PrintSequenceOfCharacters('*', 20);
    }

    void PrintNumberInInvertedPatternDown(short Number)
    {
        cout << "This is called inverted pattern ! \n";
        PrintingText::PrintSequenceOfCharacters('*', 20);
        for (short OuterLoop = Number; OuterLoop >= 1; OuterLoop--)
        {
            for (short InnerLoop = 1; InnerLoop <= OuterLoop; InnerLoop++)
                cout << OuterLoop << " ";

            cout << endl;
        }
        PrintingText::PrintSequenceOfCharacters('*', 20);
    }

    void PrintNumberInInvertedPatternUp(short Number)
    {
        cout << "This is normal inverted pattern ! \n";
        PrintingText::PrintSequenceOfCharacters('*', 20);
        for (short OuterLoop = 1; OuterLoop <= Number; OuterLoop++)
        {
            for (short InnerLoop = 1; InnerLoop <= OuterLoop; InnerLoop++)
                cout << OuterLoop << " ";

            cout << endl;
        }
        PrintingText::PrintSequenceOfCharacters('*', 20);
    }

    void PrintLetterInInvertedPatternDown(short Number)
    {
        cout << "This is called inverted pattern ! \n";
        PrintingText::PrintSequenceOfCharacters('*', 20);

        for (short OuterLoop = Number; OuterLoop >= 1; OuterLoop--)
        {
            for (short InnerLoop = 1; InnerLoop <= OuterLoop; InnerLoop++)
                cout << char((OuterLoop + 65) - 1) << " ";

            cout << endl;
        }
        PrintingText::PrintSequenceOfCharacters('*', 20);
    }

    void PrintLetterInInvertedPatternUp(short Number)
    {
        cout << "This is called inverted pattern ! \n";
        PrintingText::PrintSequenceOfCharacters('*', 20);

        for (short OuterLoop = 1; OuterLoop <= Number; OuterLoop++)
        {
            for (short InnerLoop = 1; InnerLoop <= OuterLoop; InnerLoop++)
                cout << char(OuterLoop + 64) << " ";

            cout << endl;
        }
        PrintingText::PrintSequenceOfCharacters('*', 20);
    }

}

namespace printNumbersInRange
{
    void PrintNumbersFrom1ToN(int N)
    {
        for (int loop = 1; loop <= N; loop++)
            cout << loop << endl;
    }

    void PrintNumbersFromNTo1(int N)
    {
        for (int loop = N; loop >= 1; loop--)
            cout << loop << endl;
    }

}

namespace printEnums
{
    void printNumberIsEvenOrOdd(enNumberType NumberType)
    {
        if (CheckEnums::CheckNumberIsOddOrEven(NumberType) == enNumberType::Even)
            cout << "is even\n";

        else
            cout << "is odd\n";
    }

    void PrintPrimeNumbersFrom1ToN(int Number)
    {
        for (int loop = 1; loop <= Number; loop++)
        {
            if (MathOperations::IsNumberPrimeOrNotPrime(loop) == "Prime")
            {
                PrintNumbers::PrintIntegerNumber(loop);
                PrintingText::PrintCharacters(' ');
            }
        }
    }

    void PrintDayOfTheWeek(enDaysOfWeek Day)
    {
        switch (Day)
        {
        case enDaysOfWeek::Sunday:
            cout << "Sunday";
            break;
        case enDaysOfWeek::Monday:
            cout << "Monday";
            break;
        case enDaysOfWeek::TuesDay:
            cout << "Tuesday";
            break;
        case enDaysOfWeek::Wednesday:
            cout << "Wednesday";
            break;
        case enDaysOfWeek::Thursday:
            cout << "Thursday";
            break;
        case enDaysOfWeek::Friday:
            cout << "Friday";
            break;
        case enDaysOfWeek::Saturday:
            cout << "Saturday";
            break;
        }
    }

    void GetMonthOfTheYear(enMonthsOfTheYear Month)
    {
        switch (Month)
        {
        case enMonthsOfTheYear::Jan:
            cout << "January";
            break;
        case enMonthsOfTheYear::Feb:
            cout << "February";
            break;
        case enMonthsOfTheYear::Mar:
            cout << "March";
            break;
        case enMonthsOfTheYear::Apr:
            cout << "April";
            break;
        case enMonthsOfTheYear::May:
            cout << "May";
            break;
        case enMonthsOfTheYear::Jun:
            cout << "June";
            break;
        case enMonthsOfTheYear::Jul:
            cout << "July";
            break;
        case enMonthsOfTheYear::Aug:
            cout << "August";
            break;
        case enMonthsOfTheYear::Sep:
            cout << "September";
            break;
        case enMonthsOfTheYear::Oct:
            cout << "October";
            break;
        case enMonthsOfTheYear::Nov:
            cout << "November";
            break;
        case enMonthsOfTheYear::Des:
            cout << "December";
            break;
        default:
            cout << "Not a day";
            break;
        }
    }

    void PrintNumberIsPerfectOrNotPerfect(int Number)
    {
        if (MathOperations::isNumberPerfectOrNotPerfect(Number) == enPerfectOrNotPerfect::Perfect)
            cout << Number << " is perfect\n";
        else
            cout << Number << " is not perfect\n";
    }

    void PrintPerfectNumbersFrom1ToN(int Number)
    {
        for (int loop = 1; loop <= Number; loop++)
        {
            if (MathOperations::isNumberPerfectOrNotPerfect(loop) == enPerfectOrNotPerfect::Perfect)
            {
                PrintNumbers::printShortNumber(loop);
                PrintingText::PrintLines();
            }
        }
    }

}

namespace PrintStructures
{
    void PrintTimeInDaysHoursMinutesAndSeconds(stTimeDuration time_duration)
    {
        cout << time_duration.Days << " Days, " << time_duration.Hours << " Hours, " << time_duration.Minutes << " Minutes ," << time_duration.Seconds << " Seconds\n";
    }

    void PrintClientInfo(stClientInfo &ClientInfo)
    {
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("!!!!!! PRINTING CLIENT INFO !!!!!!");
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Account number: ");
        PrintingText::PrintTextOnScreen(ClientInfo.AccountNumber);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Pin code: ");
        PrintingText::PrintTextOnScreen(ClientInfo.PinCode);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Name: ");
        PrintingText::PrintTextOnScreen(ClientInfo.Name);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Phone number: ");
        PrintingText::PrintTextOnScreen(ClientInfo.PhoneNumber);
        PrintingText::PrintLines();
        PrintingText::PrintTextOnScreen("Account balance: ");
        PrintNumbers::PrintDoubleNumber(ClientInfo.AccountBalance);
        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
    }

    void CustomPrintClientInfo(stClientInfo &ClientInfo, int NumberOfCurrentClinets)
    {
        PrintingText::PrintSequenceOfCharacters('-', 161);
        PrintingText::PrintLines();

        cout << "| [" << NumberOfCurrentClinets << "]";
        PrintingText::PrintSpaces(11 - MathOperations::CountDigitsOfNumber(NumberOfCurrentClinets) + 1);
        cout << "| " << left << setw(28) << ClientInfo.AccountNumber;
        cout << "| " << left << setw(12) << ClientInfo.PinCode;
        cout << "| " << left << setw(64) << ClientInfo.Name;
        cout << "| " << left << setw(18) << ClientInfo.PhoneNumber;
        cout << "| " << left << setw(11) << ClientInfo.AccountBalance;
        PrintingText::PrintSpaces(1);
        PrintingText::PrintCharacters('|');

        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('-', 161);
        PrintingText::PrintLines();
    }

    void CustomPrintClientsInfo(vector<stClientInfo> &ClientInfo)
    {
        int Counter = 0;
        for (stClientInfo &client_info : ClientInfo)
        {
            Counter++;
            CustomPrintClientInfo(client_info, Counter);
        }
    }

    void PrintClientsInfoList(string FileName)
    {
        //     //              toe load the data from a file and then convert them into structure and store them in vector
        //     // ------------------------------------------------------------------------------------------------------------
        vector<stClientInfo> ClientsInfo;
        StringsOperations::LoadClientInfoFromFileAndStoreThemIntoVector(FileName, ClientsInfo);
        // ------------------------------------------------------------------------------------------------------------

        //                              print the header of the table
        // -----------------------------------------------------------------------------------------
        PrintingText::PrintTabs(8);
        PrintingText::PrintTextOnScreen("Clients List ");
        PrintingText::PrintCharacters('(');
        PrintNumbers::printShortNumber(ClientsInfo.size());
        PrintingText::PrintCharacters(')');
        PrintingText::PrintCharacters(' ');
        PrintingText::PrintTextOnScreen("Clinets");
        PrintingText::PrintLines();
        // -----------------------------------------------------------------------------------------

        // print the clients data
        // -----------------------------------------------------------------------------------------
        PrintingText::PrintSequenceOfCharacters('-', 161);
        PrintingText::PrintLines();

        cout << left << setw(15) << "| Client Number ";
        cout << left << setw(30) << "| Account Number ";
        cout << left << setw(14) << "| Pin Code ";
        cout << left << setw(66) << "| Client Name ";
        cout << left << setw(20) << "| Phone Number ";
        cout << left << setw(14) << "| Balance ";
        PrintingText::PrintCharacters('|');

        PrintingText::PrintLines();
        PrintingText::PrintSequenceOfCharacters('-', 161);
        PrintingText::PrintLines();
        CustomPrintClientsInfo(ClientsInfo);
        // -----------------------------------------------------------------------------------------
    }

    bool DoesClientExists(vector<stClientInfo> &ClientsInfo, const string &AccountNumber, stClientInfo &ClientInfo)
    {
        for (stClientInfo &Client : ClientsInfo)
        {
            if (Client.AccountNumber == AccountNumber)
            {
                ClientInfo = Client;
                return true;
            }
        }
        return false;
    }

    void PrintingClientInfoByAccountNumber(const string FileName, const string &AccountNumber)
    {
        vector<stClientInfo> ClientsInfo;
        StringsOperations::LoadClientInfoFromFileAndStoreThemIntoVector(FileName, ClientsInfo);
        stClientInfo ClientInfo;
        if (DoesClientExists(ClientsInfo, AccountNumber, ClientInfo))
            PrintClientInfo(ClientInfo);
        else
            PrintingText::PrintTextOnScreen("Client not found");
    }

    void DeleteClientByAccountNumber(const string &FileName, const string &AccountNumber)
    {
        vector<stClientInfo> ClientsInof;
        StringsOperations::LoadClientInfoFromFileAndStoreThemIntoVector(FileName, ClientsInof);

        stClientInfo client_info;
        char Answer = 'n';

        if (DoesClientExists(ClientsInof, AccountNumber, client_info))
        {
            PrintStructures::PrintClientInfo(client_info);
            Answer = _ReadingText::ReadCharacter("Do you want to delete this client[Y/N]: ");
            if (StringsOperations::CovertLetterToLower(Answer) == 'y')
            {
                StringsOperations::SaveClientsDataToFile(FileName, ClientsInof, AccountNumber);
                PrintingText::PrintTextOnScreen("Clients have been deleted !\n");
            }
        }
        else
            PrintingText::PrintTextOnScreen("Clients was not found !\n");
    }

    void UpdateClientInfo(vector<stClientInfo> &ClientInof, const string &AccountNumber, stClientInfo &client_info)
    {
        for(stClientInfo &Client : ClientInof)
        {
            if(Client.AccountNumber == AccountNumber)
                Client = client_info;
        }
    }

    void UpdateClientByAccountNumber(const string &FileName, const string &AccountNumber)
    {
        vector<stClientInfo> ClientsInfo;

         // load all the clients in vector as structures
        StringsOperations::LoadClientInfoFromFileAndStoreThemIntoVector(FileName, ClientsInfo); 
       

        stClientInfo client_info; // to save the clients inof to replace with the old client info
        char Answer = 'n';

        if (DoesClientExists(ClientsInfo, AccountNumber, client_info))
        {
            PrintStructures::PrintClientInfo(client_info);

            Answer = _ReadingText::ReadCharacter("Do you want to update this client info [Y/N]: ");

            if (StringsOperations::CovertLetterToLower(Answer) == 'y')
            {
                _ReadingStructures::ReadClientInfoWithoutAccountNumber(client_info);
                UpdateClientInfo(ClientsInfo, AccountNumber, client_info);
                StringsOperations::SaveClientsDataToFile(FileName, ClientsInfo);
                PrintingText::PrintTextOnScreen("Clients info has beed updated !");
            }
        }
        else
            PrintingText::PrintTextOnScreen("Clients was not found !\n");
    }

}