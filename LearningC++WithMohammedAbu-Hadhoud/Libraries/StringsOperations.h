#pragma once

#include <iostream>
#include <ctype.h>
#include <vector>
#include "Structures.h"
#include <string>
#include "FilesOperations.h"

using namespace std;

namespace StringsOperations
{
    void PrintFirstLetterFromEachWordInString(const string &Word)
    {
        bool FirstLetterWasFound = false;
        for (const char &Character : Word)
        {
            if (Character != ' ' && !FirstLetterWasFound)
            {
                cout << Character << " ";
                FirstLetterWasFound = true;
            }
            else
            {
                if (Character == ' ' && FirstLetterWasFound)
                    FirstLetterWasFound = false;
            }
        }
    }

    void MakeEveryFirstLetterOfEachWordCapital(string &Sentence)
    {
        bool FirstLetterWasFound = false;
        for (char &Character : Sentence)
        {
            if (Character != ' ' && !FirstLetterWasFound)
            {
                Character = toupper(Character);
                FirstLetterWasFound = true;
            }
            else
            {
                if (Character == ' ' && FirstLetterWasFound)
                    FirstLetterWasFound = false;
            }
        }
    }

    void MakeEveryFirstLetterOfEachWordSmall(string &Sentence)
    {
        bool FirstLetterWasFound = false;
        for (char &Character : Sentence)
        {
            if (Character != ' ' && !FirstLetterWasFound)
            {
                Character = tolower(Character);
                FirstLetterWasFound = true;
            }
            else
            {
                if (Character == ' ' && FirstLetterWasFound)
                    FirstLetterWasFound = false;
            }
        }
    }

    void MakeWholeSentenceUpper(string &Sentence)
    {
        for (char &Character : Sentence)
            Character = toupper(Character);
    }

    void MakeWholeSentenceLower(string &Sentence)
    {
        for (char &Character : Sentence)
            Character = tolower(Character);
    }

    char CovertLetterToLower(char Character)
    {
        return tolower(Character);
    }
    void ChangeLetterCaseToTheOpssiteCase(char &Character)
    {
        Character = isupper(Character) ? tolower(Character) : toupper(Character);
    }

    void MakeTheWholeSentenceToTheOpssiteCase(string &Word)
    {
        for (char &Character : Word)
            ChangeLetterCaseToTheOpssiteCase(Character);
    }

    int CountCapitalLettersInString(const string &Word)
    {
        int Counter = 0;
        for (const char &Character : Word)
        {
            if (isupper(Character))
                Counter++;
        }
        return Counter;
    }

    int CountSmallLettersInString(const string &Word)
    {
        int Counter = 0;
        for (const char &Character : Word)
        {
            if (islower(Character))
                Counter++;
        }
        return Counter;
    }

    int CountOfLetterInString(const string &Word, const char &CharacterToLookFor)
    {
        int Counter = 0;
        for (const char &CurrentCharacter : Word)
        {
            if (CurrentCharacter == CharacterToLookFor)
                Counter++;
        }
        return Counter;
    }

    int CountOfLetterInString(const string &Word, const char &CharacterToLookFor, bool MatchCase)
    {
        int Counter = 0;
        for (const char &CurrentCharacter : Word)
        {

            if (MatchCase) // if you do not care about letter case !
            {
                if (CurrentCharacter == CharacterToLookFor)
                    Counter++;
            }
            else
            {
                if (tolower(CurrentCharacter) == tolower(CharacterToLookFor))
                    Counter++;
            }
        }
        return Counter;
    }

    bool isVowel(char Character)
    {
        Character = tolower(Character);
        return (Character == 'a' || Character == 'e' || Character == 'i' || Character == 'o' || Character == 'u');
    }

    int CountOfVowelsInString(const string &Word)
    {
        int Counter = 0;
        for (const char &Character : Word)
        {
            if (isVowel(Character))
                Counter++;
        }
        return Counter;
    }

    void PrintVowelsInString(const string &Word)
    {
        int LengthOfWord = Word.length();
        for (int Loop = 0; Loop < LengthOfWord; Loop++)
        {
            if (isVowel(tolower(Word[Loop])))
            {
                if (Loop != LengthOfWord - 1)
                    cout << Word[Loop] << " ";
                else
                    cout << Word[Loop];
            }
        }
    }

    void PrintEachWordInString(string Word)
    {
        string Delimiter = " ";
        int Position = 0;
        string TempWord = "";
        while ((Position = Word.find(Delimiter)) != string::npos)
        {
            TempWord = Word.substr(0, Position);
            if (!TempWord.empty())
                cout << TempWord << endl;
            Word.erase(0, Position + Delimiter.length());
        }
        if (!Word.empty())
            cout << Word;
    }

    int CountWordsInStirng(string Word)
    {
        string Delemiter = " ";
        int Position = 0;
        string TempWord = "";
        int Counter = 0;
        while ((Position = Word.find(Delemiter)) != string::npos)
        {
            TempWord = Word.substr(0, Position);
            if (!Word.empty())
                Counter++;
            Word.erase(0, Position + Delemiter.length());
        }
        if (!Word.empty())
            Counter++;
        return Counter;
    }

    vector<string> SplitWordInSentence(string Word, string Delemiter)
    {
        int LengthOfDelemiter = Delemiter.length();
        int Position = 0;
        string TempWord = "";
        vector<string> TempVector;
        while ((Position = Word.find(Delemiter)) != string::npos)
        {
            TempWord = Word.substr(0, Position);
            if (!TempWord.empty())
                TempVector.push_back(TempWord);
            Word.erase(0, Position + LengthOfDelemiter);
        }
        if (!Delemiter.empty())
            TempVector.push_back(Word);
        return TempVector;
    }

    string TrimFromLeft(string Word, char CharacterToTrim)
    {
        short LengthOfWord = Word.length();
        for (short Loop = 0; Loop < LengthOfWord; Loop++)
        {
            if (Word[Loop] != CharacterToTrim)
                return Word.substr(Loop);
        }
        return "";
    }

    string TrimFromRight(string Word, char CharacterToTrim)
    {
        short LengthOfWord = Word.length();
        for (short Loop = LengthOfWord - 1; Loop >= 0; Loop--)
        {
            if (Word[Loop] != CharacterToTrim)
                return Word.substr(0, Loop + 1);
        }
        return "";
    }

    string TrimFromBothSides(string Word, char CharacterToTrim)
    {
        return TrimFromLeft(TrimFromRight(Word, CharacterToTrim), CharacterToTrim);
    }

    string JoinStrings(vector<string> Words, string Delemiter = " ")
    {
        string JoinedString = "";
        short LengthOfWords = Words.size();

        for (int Loop = 0; Loop < LengthOfWords; Loop++)
        {
            JoinedString += Words[Loop];
            if (Loop != LengthOfWords - 1)
                JoinedString += Delemiter;
        }
        return JoinedString;
    }

    string JoinStrings(string Array[], int LengthOfArray, string Delemiter)
    {
        string JoinedString = "";
        for (int Loop = 0; Loop < LengthOfArray; Loop++)
        {
            JoinedString += Array[Loop];
            if (Loop != LengthOfArray - 1)
                JoinedString += Delemiter;
        }
        return JoinedString;
    }

    string ReverseString(string Word)
    {
        vector<string> TempString;
        TempString = SplitWordInSentence(Word, " ");

        short LengthOfTempStirng = TempString.size();
        string FinalResult = "";

        for (short Loop = LengthOfTempStirng - 1; Loop >= 0; Loop--)
        {
            FinalResult += TempString[Loop];
            if (Loop != 0)
                FinalResult += " ";
        }
        return FinalResult;
    }

    string ReplaceWordInStirngUsingBuiltInFunction(string Word, string WordToReplace, string ReplaceTo)
    {
        short Position = Word.find(WordToReplace);
        short LengthOfWordToReplace = WordToReplace.length();
        while (Position != string::npos)
        {
            Word = Word.replace(Position, LengthOfWordToReplace, ReplaceTo);
            Position = Word.find(WordToReplace);
        }
        return Word;
    }

    string ChangeWordToUpperCase(string Word)
    {
        for (char &Character : Word)
            Character = toupper(Character);
        return Word;
    }

    void ReplaceWordsInVector(vector<string> &Words, string WordToReplace, string ReplaceTo, bool MatchCase)
    {
        for (string &Word : Words)
        {
            if (MatchCase)
            {
                if (Word == WordToReplace)
                    Word = ReplaceTo;
            }
            else
            {
                if (ChangeWordToUpperCase(Word) == ChangeWordToUpperCase(WordToReplace))
                    Word = ReplaceTo;
            }
        }
    }

    string ReplaceFunctionWithSplitFunction(string Word, string WordToReplace, string ReplaceTo, bool MatchCase = true)
    {
        vector<string> TempVector;
        TempVector = SplitWordInSentence(Word, " ");                           // store the word after split them
        ReplaceWordsInVector(TempVector, WordToReplace, ReplaceTo, MatchCase); // Replace the word with the word to replace with
        string Result = JoinStrings(TempVector, " ");                          // To store the word after it was replaced
        return Result;                                                         // no need to tell this just return the sentence after it was replaced
    }

    string RemovePunctuations(string Word)
    {
        string Result = "";
        for (char &Character : Word)
            if (!ispunct(Character))
                Result += Character;
        return Result;
    }

    void StoreClinetInfoInotVector(vector<string> &TempVector, stClientInfo &ClientInfo)
    {
        TempVector.push_back(ClientInfo.AccountNumber);
        TempVector.push_back(ClientInfo.PinCode);
        TempVector.push_back(ClientInfo.Name);
        TempVector.push_back(ClientInfo.PhoneNumber);
        TempVector.push_back(to_string(ClientInfo.AccountBalance));
    }

    string ConvertRecordToLine(stClientInfo ClientInfo)
    {
        vector<string> TempVector;
        StoreClinetInfoInotVector(TempVector, ClientInfo);
        string Result = "";
        Result = JoinStrings(TempVector, "#//#");
        return Result;
    }

    void FillClientInfo(vector<string> &TempVector, stClientInfo &ClientInfo)
    {
        ClientInfo.AccountNumber = TempVector[0];
        ClientInfo.PinCode = TempVector[1];
        ClientInfo.Name = TempVector[2];
        ClientInfo.PhoneNumber = TempVector[3];
        ClientInfo.AccountBalance = stod(TempVector[4]);
    }

    void ConvertLineToRecord(string Line, stClientInfo &ClientInfo)
    {
        vector<string> TempVector;
        TempVector = SplitWordInSentence(Line, "#//#");
        FillClientInfo(TempVector, ClientInfo);
    }

    void StorClientsInfoIntoVector(fstream &File, vector<stClientInfo> &ClientsInfo)
    {
        string Line = "";
        while (getline(File, Line))
        {
            stClientInfo client_info;
            ConvertLineToRecord(Line, client_info);
            ClientsInfo.push_back(client_info);
        }
    }

    void LoadClientInfoFromFileAndStoreThemIntoVector(const string &FileName, vector<stClientInfo> &ClientsInfo)
    {
        string FilePath = FilesOperations::GetFullPathOfFile(FileName);
        fstream UserFile;
        FilesOperations::OpenFile(UserFile, enFileMode::Read, FilePath);
        if (!FilesOperations::Check_If_File_Was_Opend(UserFile))
        {
            cerr << "File could not be opend !" << FilePath << endl;
            return;
        }
        StorClientsInfoIntoVector(UserFile, ClientsInfo);
        FilesOperations::CloseFile(UserFile);
    }

    void SaveClientsDataToFile(const string &FileName,const vector<stClientInfo> &ClientsInfo, const string &AccountNumber)
    {
        string FilePath = FilesOperations::GetFullPathOfFile(FileName);

        fstream userFile;

        FilesOperations::OpenFile(userFile, enFileMode::Write, FilePath);

        if(!FilesOperations::Check_If_File_Was_Opend(userFile))
        {
            cerr << "File could not be opened " << FilePath << endl;
            return;
        }

        for(const stClientInfo &Client : ClientsInfo)
        {
            if(Client.AccountNumber != AccountNumber)
            {
                string Line = ConvertRecordToLine(Client);
                userFile << Line << endl;
            }
        }
        FilesOperations::CloseFile(userFile);
    }

    void SaveClientsDataToFile(const string &FileName,const vector<stClientInfo> &ClientsInfo)
    {
        string FilePath = FilesOperations::GetFullPathOfFile(FileName);

        fstream userFile;

        FilesOperations::OpenFile(userFile, enFileMode::Write, FilePath);

        if(!FilesOperations::Check_If_File_Was_Opend(userFile))
        {
            cerr << "File could not be opened " << FilePath << endl;
            return;
        }

        for(const stClientInfo &Client : ClientsInfo)
        {
            string Line = ConvertRecordToLine(Client);
            userFile << Line << endl;
        }
        FilesOperations::CloseFile(userFile);
    }

}