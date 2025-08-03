#include "StringsOperations.h"

#include <string>
#include <vector>

using namespace std;

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

  string JoinStrings(vector<string> Words, string Delemiter)
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


string ReplaceFunctionWithSplitFunction(string Word, string WordToReplace, string ReplaceTo, const string Delemiter,  bool MatchCase)
{
    vector<string> TempVector;
    TempVector = SplitWordInSentence(Word, Delemiter);                           // store the word after split them
    ReplaceWordsInVector(TempVector, WordToReplace, ReplaceTo, MatchCase); // Replace the word with the word to replace with
    string Result = JoinStrings(TempVector, Delemiter);                          // To store the word after it was replaced
    return Result;                                                         // no need to tell this just return the sentence after it was replaced
}