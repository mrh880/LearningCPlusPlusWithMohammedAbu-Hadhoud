#pragma once

#include <string>
#include <vector>

std::vector<std::string> SplitWordInSentence(std::string Word, std::string Delemiter);

std::string JoinStrings(std::vector<std::string> Words, std::string Delemiter = " ");

std::string ChangeWordToUpperCase(std::string Word);

void ReplaceWordsInVector(std::vector<std::string> &Words, std::string WordToReplace, std::string ReplaceTo, bool MatchCase);

std::string ReplaceFunctionWithSplitFunction(std::string Word, std::string WordToReplace, std::string ReplaceTo, const std::string Delemiter = " " , bool MatchCase = true);