#include <iostream>

#include "StringLibrary/clsString.h"
#include "DateLibrary/clsDate.h"
#include "DateLibrary/ClearingScreenFunctionsLibrary/ClearingScreenFunctions.h"
#include "DateLibrary/PrintingOutputsLibrary/PrintingOutputs.h"
#include "DateLibrary/clsPeriod.h"

using namespace std;

int main()
{
    clsString MyString;
    // MyString.SetValue("mrh/mrr/mry/mra");
    // MyString.SetDelemiter("/");
    // MyString.SplitWordsInSentenceForVector();
    // MyString.PrintTheSplitSentenceWithVector();
    // MyString.JoinStringsWithVector();
    // cout << "Your words after it was speerted and rejoin is =>> " << MyString.JoinedStringForVector() << endl;

    // MyString.SetValue("mrh/mrr/mry/mra");
    // MyString.SetDelemiter("/");
    // MyString.SplitWordsInSentenceForArray();
    // MyString.PrintTheSplitSentenceWithArray();
    // MyString.JoinedStringForArray();
    // cout << "Your words after it was speerted and rejoin is =>> " << MyString.JoinedStringForArray() << endl;

    // string Word = "mrh/mrr/mry/mra";
    //    const  int MaxSize = 1000;
    //     string Array[MaxSize];
    //     int SizeOfArray =  0;
    //     string Delemiter = "/";

    //     clsString::SplitWordsInSentenceForArray(Word, Array, Delemiter, SizeOfArray, MaxSize);

    //     for(short loop = 0; loop < SizeOfArray; loop++)
    //     {
    //         cout << Array[loop] << " ";
    //     }
    //     cout << endl;

    //     string JoinedStrin = "";
    //     JoinedStrin = clsString::JoinStringsWithArray(Array, SizeOfArray, Delemiter);
    //     cout << JoinedStrin << endl;

    //     MyString.SetValue("I am mrh :)");
    //     MyString.ReverseString();
    //     cout << "My string after is reversed =>> " << MyString.Value() << endl;

    //     MyString.ReverseString();
    //     cout << "My string after is reversed =>> " << MyString.Value() << endl;

    //     MyString.ReverseString();
    //     cout << "My string after is reversed =>> " << MyString.Value() << endl;

    //     MyString.ReverseString();
    //     cout << "My string after is reversed =>> " << MyString.Value() << endl;

    //     MyString.SetValue("She is honey, she is honey, she is honey, she is honey");
    //     MyString.SetWordToReplace("honey");
    //     MyString.SetReplaceTo("my heart");
    //     MyString.ReplaceWordInStirngUsingBuiltInFunction();
    //     cout << MyString.Value() << endl;

    //     MyString.SetValue("hi, i am mrh :)");
    //     MyString.ChangeWordToUpperCase();
    //     cout << "Your word after it has been changed to upper case =>> " << MyString.Value() << endl;

    //     MyString.SetValue("HI, I AM MRH :)");
    //     MyString.ChangeWordToLowerCase();
    //     cout << "Your word after it has been changed to upper case =>> " << MyString.Value() << endl;

    // clsString::SplitWordsInSentenceForArray()

    // MyString.JoinedStringForArray();
    // cout << "The String after it is joined: " << MyString.JoinedStringForArray() << endl;

    // MyString.SetValue("***mrh***");
    // MyString.SetCharacter('*');
    // MyString.TrimFromLeft();
    // cout << "The String After is is trimmed from the left: " << MyString.Value() << endl;
    // MyString.TrimFromRight();
    // cout << "The String After is is trimmed from the right: " << MyString.Value() << endl;
    // MyString.SetValue("***mrh***");
    // MyString.TrimStringFromBothSides();
    // cout << "The String After is is trimmed from the left and right: " << MyString.Value() << endl;

    // MyString.SetValue("888mrh");
    // if(MyString.CheckIfStringHasPunctuationsOrSpecialCharacters())
    // {
    //     cout << "Yes, your string has punctuation or special character :)\n";
    // }
    // else
    // {
    //     cout << "No, your string has no punctuation or special character :)\n";

    // }

    // MyString.SetValue("I, Love You So Much :)");

    // cout << "Your String Length: " << MyString.Length() << endl;
    // cout << "Your String Length: " << clsString::Length("mrh :)") << endl;

    // MyString.PrintFirstLetterFromEachWordInString();
    // cout << endl;

    // MyString.SetValue("i love you so much :)");

    // MyString.MakeEveryFirstLetterOfEachWordCapital();

    // cout << MyString.Value() << endl;

    // string S1 = "you, are the best :)";
    // clsString::MakeEveryFirstLetterOfEachWordCapital(S1);
    // cout << S1 << endl;

    // MyString.SetValue("mrh/mrr/mry/mra");
    // MyString.SetDelemiter("/");
    // MyString.SplitWordsInSentenceForVector();
    // MyString.PrintTheSplitSentenceWithVector();
    // cout << endl;

    // MyString.SetWordToReplace("Mrh");
    // MyString.SetReplaceTo("mrk");
    // // MyString.SetMatchCase(true);
    // MyString.ReplaceWordsInVector();

    // MyString.PrintTheSplitSentenceWithVector();

    // MyString.JoinStringsWithVector();
    // cout << "Joined String =>> " << MyString.JoinedStringForVector() << endl;
    // cout << "Value =>> " << MyString.Value() << endl;

    // MyString.SetValue("mrh mrr mry mrb");
    // MyString.SetWordToReplace("mrh");
    // MyString.SetReplaceTo("mrk");
    // MyString.ReplaceFunctionWithSplitFunction();
    // cout << MyString.JoinedStringForVector() << endl;
    // cout << MyString.JoinedString() << endl;

    // MyString.SetValue("Hello, world! How are you today?");
    // cout << "Your string now is =>> " << MyString.Value() << endl;
    // MyString.RemovePunctuations();
    // cout << "Your string after removing punctuations is =>>     " << MyString.Value() << endl;

    // MyString.JoinedStringForVector();
    // cout << MyString.Value() << endl;
    // MyString.SetWordToReplace("missa");
    // MyString.SetReplaceTo("mrk");
    // MyString.ReplaceWordInStirngUsingBuiltInFunction();
    // cout << MyString.Value() << endl;

    // MyString.SetValue("I Love You, So Much :)");

    // MyString.MakeEveryFirstLetterOfEachWordSmall();

    // cout << "Your string after make each letter of each word small: " << MyString.Value() << endl;

    // MyString.SetValue("Hi how are you :)");
    // MyString.MakeWholeSentenceUpper();
    // cout << "You string after make whole string to upper: " << MyString.Value() << endl;

    // MyString.SetValue("Hi how are you :)");
    // MyString.MakeAllStringToLower();
    // cout << "You string after make whole string to lower: " << MyString.Value() << endl;

    // MyString.SetLetter('R');
    // MyString.ChangeLetterCaseToTheOpssiteCase();
    // cout << "Your letter after chaning it to the oppsite way: " << MyString.Letter() << endl;

    // MyString.SetLetter('r');
    // MyString.ChangeLetterCaseToTheOpssiteCase();
    // cout << "Your letter after chaning it to the oppsite way: " << MyString.Letter() << endl;

    // MyString.SetLetter('H');
    // MyString.ChangeLetterCaseToTheOpssiteCase();
    // cout << "Your letter after chaning it to the oppsite way: " << MyString.Letter() << endl;

    // MyString.SetLetter('h');
    // MyString.ChangeLetterCaseToTheOpssiteCase();
    // cout << "Your letter after chaning it to the oppsite way: " << MyString.Letter() << endl;

    // MyString.SetValue("hi how are you :)");
    // MyString.MakeTheWholeSentenceToTheOpssiteCase();
    // cout << "You string after make whole string to the oppsite way: " << MyString.Value() << endl;

    // MyString.SetValue("HI HOW ARE YOU :)");
    // MyString.MakeTheWholeSentenceToTheOpssiteCase();
    // cout << "You string after make whole string to the oppsite way: " << MyString.Value() << endl;

    // MyString.SetValue("Hi, YOu Are mrh :)");
    // cout << "The capital upper case in you sentence is =>> " << MyString.CountCapitalLettersInString() << endl;

    // MyString.SetValue("hI, yoU aRE mrh :)");
    // cout << "The capital lower case in you sentence is =>> " << MyString.CountSmallLettersInString() << endl;

    // MyString.SetValue("Hi, HOW ARE :)");
    // cout << "The capital lower case in you sentence is =>> " << MyString.CountSmallLettersInString() << endl;

    // MyString.SetValue("hIiii");
    // cout << "The capital lower case in you sentence is =>> " << MyString.CountSmallLettersInString() << endl;

    // MyString.SetCharacter('I');
    // MyString.SetValue("I am mrh and I am a programmer :)");
    // cout << "The count of specific letter you look for has apper " << MyString.CountOfLetterInString()  << " times :)\n";

    // MyString.SetValue("I am mrh :), and I am a programmer ii ii :)");
    // MyString.SetCharacter('I');
    // MyString.SetMatchCase(false);
    // cout << "We found the letter you look for " << MyString.CountOfLetterInStringWithMatchCase() << " times \n";

    // MyString.SetCharacter('I');

    // if(MyString.isVowel())
    // {
    //     cout << "Your character is vowel :)\n";
    // }

    // else
    // {
    //     cout << "Your character is not vowel :(\n";
    // }

    // MyString.SetCharacter('h');

    // if(MyString.isVowel())
    // {
    //     cout << "Your character is vowel :)\n";
    // }

    // else
    // {
    //     cout << "Your character is not vowel :(\n";
    // }

    // MyString.SetValue("I am mrh, and I love programming so much :)");
    // cout << "Your sentence has " << MyString.CountOfVowelsInString() << " vowels\n";

    // MyString.SetValue("I am mrh :), I am mrh :)");
    // MyString.PrintVowelsInString();
    // cout << endl << endl;

    // MyString.SetValue("I am mrh and i love programming");
    // MyString.PrintEachWordInString();
    // cout << endl;

    // MyString.SetValue("Hi I am mrh and I love programming so much :)");
    // cout << "Your stirng has " << MyString.CountWordsInStirng() << " words :)\n";

    // cout << "Yes, date is fine :)\n";
    // clsDate Date;
    // // Date.PrintDate(2, 2, 2);
    // Date.PrintDate(Date);
    // Date.PrintDate(Date, '|');

    // cout << "Number of days in year =>> " << clsDate::NumberOfDaysInYear(2025) << endl;
    // cout << "Number of hours in year =>> " << clsDate::NumberOfHoursInYear(2025) << endl;
    // cout << "Number of minutes in year =>> " << clsDate::NumberOfMinutesInYear(2025) << endl;
    // cout << "Number of seconds in year =>> " << clsDate::NumberOfSecondsInYear(2025) << endl;

    // cout << "Number of days in month =>> " << clsDate::NumberOfDaysInMonth(7, 2025) << endl;
    // cout << "Number of hours in year =>> " << clsDate::NumberOfHoursInMonth(7, 2025) << endl;
    // cout << "Number of minutes in year =>> " << clsDate::NumberofMinutesInMonth(7, 2025) << endl;
    // cout << "Number of seconds in year =>> " << clsDate::NumberofSecondsInMonth(7, 2025) << endl;

    // clsDate Date;
    // clsDate::PrintDateAndDay(Date, '/');

    // cout << clsDate::CalculateDayOrder(2, 12, 2025) <<  endl;
    // cout << clsDate::DayOrderName(1) << endl;

    // cout << clsDate::ConvertMonthIntoText(7) << endl;

    // clsDate::PrintMonthCalender(7, 2025);
    // clsDate::PrintYearCalender(2025);
    // cout << endl;

    // cout << clsDate::CalculateDayOrder(15, 12, 2025) << endl;

    // cout << clsDate::NumberOfDaysFromTheBeginingOfTheYear(22, 7, 2025) << endl;
    // clsDate Date;

    // Date.GetCurrentDateAndCurrentDayName();

    // clsDate::GetCurrentDateAndCurrentDayName();
    // // Date.SetDay(15);
    // // Date.SetMonth(12);
    // // Date.SetYear(2001);
    // // Date.SetDayName("Wednesday");

    // clsDate::PrintDateAndDay();

    // clsDate::PrintIfIsEndOfTheWeek();

    // clsDate::PrintIfWeekEnd();

    // clsDate::PrintIfItIsBusinessDay();

    // clsDate Date(23, 9, 2022);

    // cout << Date.DaysUntilTheEndOfTheWeek() << endl;
    // cout << Date.DaysUntilTheEndOfTheMonth(true) << endl;
    // cout << Date.DaysUntilTheEndOfTheYear() << endl;

    // PrintingText::PrintLines(4);

    // Date.PrintDate();
    // Date.PrintIfIsEndOfTheWeek();
    // Date.PrintIfWeekEnd();
    // Date.PrintIfItIsBusinessDay();

    // cout << Date.DaysUntilTheEndOfTheWeek() << endl;
    // cout << Date.DaysUntilTheEndOfTheMonth(true) << endl;
    // cout << Date.DaysUntilTheEndOfTheYear() << endl;

    // PrintingText::PrintTextOnScreen("The vacation days =>> ");
    // PrintNumbers::printShortNumber(clsDate::CalculateVacationDays(clsDate(1, 9, 2022), clsDate(5, 9, 2022)));
    // PrintingText::PrintLines();

    // PrintingText::PrintLines(2);

    // clsDate Date1(1, 9, 2022);
    // clsDate Date2(5, 9, 2022);

    // PrintingText::PrintTextOnScreen("The vacation days =>> ");
    // PrintNumbers::printShortNumber(Date1.CalculateVacationDays(Date1, Date2));
    // PrintingText::PrintLines();

    // clsDate::PrintDate();
    // clsdclsDate::CalculateVacationReturnDate(clsDate(1, 1, 2022), 23);

    // clsDate Date = clsDate::CalculateVacationReturnDate(clsDate(1, 1, 2022), 23);

    // Date.PrintDate();
    // PrintingText::PrintLines();

    // clsDate Date1(1, 1, 2022);
    // clsDate Date2;
    // Date2 = Date2.CalculateVacationReturnDate(Date1, 23);

    // Date2.PrintDate();

    // PrintingText::PrintLines();

    // cout << clsDate::CompreTwoDates(clsDate(1, 1, 2000), clsDate(1, 1, 2022)) << endl;
    // cout << clsDate::CompreTwoDates(clsDate(1, 1, 2000), clsDate(1, 1, 2000)) << endl;
    // cout << clsDate::CompreTwoDates(clsDate(1, 1, 2022), clsDate(1, 1, 2000)) << endl;

    // PrintingText::PrintLines(4);

    // clsDate Date1(1, 1, 2000);
    // clsDate Date2(1, 1, 2022);
    // cout << Date1.CompreTwoDates(Date1, Date2) << endl;

    //   clsDate Date1(1, 1, 2000);
    // clsDate Date2(1, 1, 2000);
    // cout << Date1.CompreTwoDates(Date1, Date2) << endl;

    //       clsDate Date1(1, 1, 2022);
    // clsDate Date2(1, 1, 2000);
    // cout << Date1.CompreTwoDates(Date1, Date2) << endl;

    // clsDate Date;

    // PrintingText::PrintTextOnScreen(Date.FormatDate("dd|mm|yyyy", "|"));
    // PrintingText::PrintLines();

    // PrintingText::PrintTextOnScreen(clsDate::FormatDate(clsDate(), "dd|mm|yyyy", ""));
    // PrintingText::PrintLines();

    string DateInString  = clsDate::ReadDateInstring("dd|mm|yyyy");

    clsDate Date = clsDate::ConvertDateFromStringToStructure(DateInString, "|");

    Date.PrintDate();

    PrintingText::PrintLines();
    Date.SetYear(2000);

    cout << Date.isYearLeap() << endl;
    Date.SetYear(2025); 
    cout << Date.NumberOfDaysInYear() << endl;

    



        // Date = clsDate::GetSystemDate();

        // // cout << Date.Day() << "/" << Date.Month() << "/" << Date.Year() << endl;
        // // Date.PrintDate(D

        // cout << clsDate::CalculateDayOrder(23, 7, 2025) << endl;
        // cout << clsDate::CalculateDayOrder(Date) << endl;

        // cout << "Today is " << clsDate::GetDayNameFromDayOrder(clsDate::CalculateDayOrder(Date)) << endl;

        // ClearScreen();

        // clsDate Date1;
        // clsDate Date2;

        // clsDate::ReadDate(Date1, "Reading Date 1");

        // clsDate::ReadDate(Date2, "Reading Date 2");

        // if(clsDate::isDate1LessThanDate2(Date1, Date2))
        // {
        //     cout << "Yes, Date 1 is less than Date2 :) \n";
        // }
        // else
        // {
        //     cout << "No, Date 1 is not less than date 2\n";
        // }

        // ClearScreen();

        // clsDate Date1;
        // clsDate Date2;

        // clsDate::ReadDate(Date1, "Reading Date 1");

        // clsDate::ReadDate(Date2, "Reading Date 2");

        // if (clsDate::isDate1EqualsToDate2(Date1, Date2))
        // {
        //     cout << "Yes, Date 1 is equal to Date 2 :) \n";
        // }
        // else
        // {
        //     cout << "No, Date 1 is not equal to date 2\n";
        // }

        // ClearScreen();

        // clsDate Date;

        // clsDate::ReadDate(Date);

        // if(clsDate::isLastDayInMonth(Date))
        // {
        //     cout << "Yes " << Date.Day() << " is last day in month " << clsDate::ConvertMonthIntoText(Date.Month()) << endl;
        // }

        // else
        // {
        //     cout << "No " << Date.Day() << " is not last day in month " << clsDate::ConvertMonthIntoText(Date.Month()) << endl;
        // }

        // ClearScreen();

        // clsDate Date;

        // clsDate::ReadDate(Date);

        // if (clsDate::isLastMonthInYear(Date.Month()))
        // {
        //     cout << "Yes " << "month " << Date.Month() << " " << clsDate::ConvertMonthIntoText(Date.Month()) << " is the last month in the year " << Date.Year() << endl;
        // }

        // else
        // {
        //     cout << "No " << "month " << Date.Month() << " " << clsDate::ConvertMonthIntoText(Date.Month()) << " is not the last month in the year " << Date.Year() << endl;
        // }

        // ClearScreen();

        // clsDate Date1;
        // clsDate Date2;

        // clsDate::ReadDate(Date1, "Reading Date 1");

        // clsDate::ReadDate(Date2, "Reading Date 2");

        // if(clsDate::isDate1AfterDate2(Date1, Date2))
        // {
        //     cout << "Yes, Date 1 is after Date2 :) \n";
        // }
        // else
        // {
        //     cout << "No, Date 1 is not after date 2\n";
        // }

        // ClearScreen();

        // clsDate Date = clsDate::GetCurrentDateAndCurrentDayName();
        // clsDate Date;

        // clsDate::ReadDate(Date);
        // clsDate::PrintDate(Date);

        // clsDate::PrintDate(Date);

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("01-Adding one day is: ");
        // Date = clsDate::IncreaseDateByOneDay(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("02-Adding 10 days is: ");
        // Date = clsDate::IncreaseDateByXDayes(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("03-Adding one week is: ");
        // Date = clsDate::IncreaseDateByOneWeek(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("04-Adding 10 weeks is: ");
        // Date = clsDate::IncreaseDateByXWeeks(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("05-Adding one month is: ");
        // Date = clsDate::IncreaseDateByOneMonth(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("06-Adding 5 month is: ");
        // Date = clsDate::IncreaseDateByXMonths(Date, 5);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("07-Adding one year is: ");
        // Date = clsDate::IncreaseDateByOneYear(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("08-Adding 10 years is: ");
        // Date = clsDate::IncreaseDateByXYears(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("09-Adding 10 years (falster) is: ");
        // Date = clsDate::IncreaseDateByXYearsFaster(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("10-Adding one decade  is: ");
        // Date = clsDate::IncreaseDateByOneDecade(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("11-Adding 10 decades  is: ");
        // Date = clsDate::IncreaseDateByXDecades(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("12-Adding 10 decades (faster) is: ");
        // Date = clsDate::IncreaseDateByXDecadesFaster(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("13-Adding one century (faster) is: ");
        // Date = clsDate::IncreaseDateByOneCentury(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("14-Adding one millennium (faster) is: ");
        // Date = clsDate::IncreaseDateByOneMillennium(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // if(clsDate::isFirstDayInMonth(Date.Day()))
        // {
        //     cout << "Yes " << Date.Day() << " is the first day in the month " << clsDate::ConvertMonthIntoText(Date.Month()) << endl;
        // }

        // else
        // {
        //     cout << "No " << Date.Day() << " is the first day in the month " << clsDate::ConvertMonthIntoText(Date.Month()) << endl;
        // }

        // if(clsDate::isFirstMonthInYear(Date.Month()))
        // {
        //     cout << "Yes " << Date.Month() << " is the first month in the year\n";
        // }

        // else
        // {
        //     cout << "NO " << Date.Month() << " is not the first month in the year\n";
        // }

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("01-Subtracting one day is: ");
        // Date = clsDate::DecreaseDateByOneDay(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("02-Subtracting 10 days is: ");
        // Date = clsDate::DecreaseDateByXDays(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("03-Subtracting one week is: ");
        // Date = clsDate::DecreaseDateByOneWeek(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("04-Subtracting 10 weeks is: ");
        // Date = clsDate::DecreaseDateByXWeeks(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("05-Subtracting one month is: ");
        // Date = clsDate::DecreaseDateByOneMonth(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("06-Subtracting 5 month is: ");
        // Date = clsDate::DecreaseDateByXMonths(Date, 5);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("07-Subtracting one year is: ");
        // Date = clsDate::DecreaseDateByOneYear(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("08-Subtracting 10 years is: ");
        // Date = clsDate::DecreaseDateByXYears(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("09-Subtracting 10 years (falster) is: ");
        // Date = clsDate::DecreaseDateByXYearsFaster(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("10-Subtracting one decade  is: ");
        // Date = clsDate::DecreaseDateByOneDecade(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("11-Subtracting 10 decades  is: ");
        // Date = clsDate::DecreaseDateByXDecades(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("12-Subtracting 10 decades (faster) is: ");
        // Date =  clsDate::DecreaseDateByXDecadesFaster(Date, 10);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("13-Subtracting one century (faster) is: ");
        // Date = clsDate::DecreaseDateByOneCentury(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("14-Subtracting one millennium (faster) is: ");
        // Date = clsDate::DecreaseDateByOneMillennium(Date);
        // clsDate::PrintDate(Date);
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // Date = clsDate::GetDateFromNumberOfDays(204, 2025);
        // clsDate::PrintDate(Date);

        // Date = clsDate::GetCurrentDateAndCurrentDayName();
        // Date.PrintDateAndDay(Date, '/');

        // cout << endl;

        // ClearScreen();

        // clsDate Date1;
        // clsDate Date2;

        // clsDate::ReadDate(Date1, "Reading Date 1");
        // clsDate::ReadDate(Date2, "Reading Date 2");

        // PrintingText::PrintTextOnScreen("Printing Dates");
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 50);
        // PrintingText::PrintLines();

        // PrintingText::PrintTextOnScreen("Dates before swapping: ");
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("Date 1 =>> ");
        // clsDate::PrintDate(Date1);

        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("Date 2 =>> ");
        // clsDate::PrintDate(Date2);

        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 50);
        // PrintingText::PrintLines();

        //    PrintingText::PrintTextOnScreen("Printing Dates");
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 50);
        // PrintingText::PrintLines();

        // clsDate::SwappingTwoDates(Date1, Date2);

        // PrintingText::PrintTextOnScreen("Dates after swapping: ");
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("Date 1 =>> ");
        // clsDate::PrintDate(Date1);

        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("Date 2 =>> ");
        // clsDate::PrintDate(Date2);

        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 50);
        // PrintingText::PrintLines();

        // ClearScreen();

        // clsDate Date1;
        // // clsDate Date2;

        // // clsDate::ReadDate(Date1, "Reading Date 1");
        // // clsDate::ReadDate(Date2, "Reading Date 2");

        // // PrintingText::PrintTextOnScreen("Difference is ");
        // // PrintNumbers::PrintIntegerNumber(clsDate::GetDifferentBetweenTwoDates(Date1, Date2));
        // // PrintingText::PrintTextOnScreen(" Day(s)");
        // // PrintingText::PrintLines(2);

        // // PrintingText::PrintTextOnScreen("Difference is ");
        // // PrintNumbers::PrintIntegerNumber(clsDate::GetDifferentBetweenTwoDates(Date1, Date2, true));
        // // PrintingText::PrintTextOnScreen(" Day(s)");
        // // PrintingText::PrintLines(2);

        // ClearScreen();

        // clsDate Date;

        // clsDate::ReadDate(Date, "Reading BirthDay");

        // PrintingText::PrintTextOnScreen("Your age in days =>> ");
        // PrintNumbers::PrintIntegerNumber(clsDate::GetAgeInNumberOfDays(Date));
        // PrintingText::PrintTextOnScreen(" Day(s)");
        // PrintingText::PrintLines();

        // ClearScreen();

        // // clsDate Date = clsDate::GetSystemDate();
        // clsDate Date;

        // Date.SetDay(26);
        // Date.SetMonth(7);
        // Date.SetYear(2025);

        // if(clsDate::isEndOfWeek(Date))
        // {
        //     PrintingText::PrintTextOnScreen("Yes ");
        //     clsDate::PrintDate(Date);
        //     PrintingText::PrintTextOnScreen(" is end of the week :)");
        //     PrintingText::PrintLines();
        // }

        // else
        // {

        //     PrintingText::PrintTextOnScreen("No ");
        //     clsDate::PrintDate(Date);
        //     PrintingText::PrintTextOnScreen(" is end of the week :)");
        //     PrintingText::PrintLines();
        // }

        // cout << "Hi\n";

        // clsDate Date;

        // clsDate::ReadDate(Date);

        // if(clsDate::isWeekEnd(Date))
        // {
        //     PrintingText::PrintTextOnScreen("Yes, it is end of week");
        //     PrintingText::PrintLines();
        // }

        // else
        // {
        //      PrintingText::PrintTextOnScreen("No, it is not end of week");
        //     PrintingText::PrintLines();
        // }

        // clsDate Date = clsDate::GetCurrentDateAndCurrentDayName();

        // clsDate::PrintDateAndDay(Date, '/');

        // PrintingText::PrintLines();

        // clsDate Date;
        // Date.SetDay(15);
        // Date.SetMonth(12);
        // Date.SetYear(20);

        // cout << "Days until the end of the year, " << clsDate::DaysUntilTheEndOfTheYear(Date) << " dya(s)\n";

        // clsDate Date = clsDate::GetSystemDate();

        // clsDate MyBirthDate;
        // MyBirthDate.SetDay(15);
        // MyBirthDate.SetMonth(12);
        // MyBirthDate.SetYear(2025);

        // cout << clsDate::GetDifferentBetweenTwoDates(Date, MyBirthDate) << " Day(s) lift for your birthday :)\n" ;

        // clsDate Result =
        // short _NumberOfDaysFromTheBegingOfTheYear = clsDate::NumberOfDaysFromTheBeginingOfTheYear(Date);
        // // short NumberOfDays = clsDate::NumberOfDaysFro
        // // cout << "This month name is =>> " << clsDate::ConvertMonthIntoText(Date.Month()) << endl;

        // clsDate SystemDate = clsDate::GetSystemDate();

        // clsDate MyDate;

        // short NumberOfDaysForDate = clsDate::NumberOfDaysFromTheBeginingOfTheYear(SystemDate);

        // MyDate = clsDate::GetDateFromNumberOfDays((NumberOfDaysForDate + 141), 2025);

        // clsDate::PrintDate(MyDate);
        // cout << endl;

        // clsDate Date;
        // Date.SetDay(26);
        // Date.SetMonth(7);
        // Date.SetYear(2025);

        // Date = clsDate::DecreaseDateByXYears(Date, 21);

        // cout << "Going back through time 21 years =>> ";
        // clsDate::PrintDate(Date);
        // cout << endl;

        // clsDate Date1;
        // clsDate Date2;

        // clsPeriod::ReadPeriod(Date1, Date2);

        // clsDate::PrintDate(Date1);
        // PrintingText::PrintLines();
        // clsDate::PrintDate(Date2);
        // PrintingText::PrintLines();

        // clsDate Dates[4];

        // for(short loop = 0; loop < 4; loop++)
        // {
        //     string Message = "Reading Date " + to_string(loop + 1);
        //     clsDate::ReadDate(Dates[loop], Message);
        // }

        // clsPeriod Period1;
        // clsPeriod Period2;

        // clsPeriod::ReadPeriod(Period1, 1);
        // clsPeriod::ReadPeriod(Period2, 2);

        // clsDate CurrentDate = clsDate::GetCurrentDateAndCurrentDayName();
        // clsDate::PrintDateAndDay(CurrentDate, "/");

        // clsDate MyDate;
        // MyDate.SetDelemiter("/");
        // MyDate.PrintDate();
        // cout << MyDate.GetDayNameFromDayOrder() << endl;
        // cout << MyDate.CalculateDayOrder() << endl;
        // cout << MyDate.DayName() << endl;

        // clsDate Date;
        // Date.PrintDate();
        // cout << Date.DayName() << endl;
        // cout << Date.ConvertMonthIntoText() << endl;
        // Date.PrintMonthCalender();
        // PrintingText::PrintLines();
        // Date.PrintYearCalender();
        // PrintingText::PrintLines();
        // cout << Date.NumberOfDaysFromTheBeginingOfTheYear() << endl;
        // Date.GetDateFromNumberOfDays();

        // clsDate Date;

        // clsDate Date2("22/7/2025");

        //    PrintingText::PrintTextOnScreen("Date 1 =>> ");
        //     Date.PrintDate();
        //     PrintingText::PrintLines();

        //     PrintingText::PrintTextOnScreen("Date 2 =>> ");
        //     Date2.PrintDate();
        //     PrintingText::PrintLines();

        // if (Date.isDateLessThanDate2(Date2))
        // {
        //     PrintingText::PrintTextOnScreen("Yes, date 1 is less than date 2\n");
        // }
        // else
        // {
        //     PrintingText::PrintTextOnScreen("No, date 1 is not less than date 2\n");
        // }

        // clsDate Date;

        // clsDate Date2("22/7/2025");

        // PrintingText::PrintTextOnScreen("Date 1 =>> ");
        // Date.PrintDate();
        // PrintingText::PrintLines();

        // PrintingText::PrintTextOnScreen("Date 2 =>> ");
        // Date2.PrintDate();
        // PrintingText::PrintLines();

        // if (Date.isDateEqualsToDate2(Date2))
        // {
        //     PrintingText::PrintTextOnScreen("Yes, date 1 is equal to date 2\n");
        // }
        // else
        // {
        //     PrintingText::PrintTextOnScreen("No, date 1 is not equal to date 2\n");
        // }

        //     clsDate Date("21/7/2025");

        // clsDate Date2("22/7/2025");

        // PrintingText::PrintTextOnScreen("Date 1 =>> ");
        // Date.PrintDate();
        // PrintingText::PrintLines();

        // PrintingText::PrintTextOnScreen("Date 2 =>> ");
        // Date2.PrintDate();
        // PrintingText::PrintLines();

        // if (Date.isDateAfterDate2(Date2))
        // {
        //     PrintingText::PrintTextOnScreen("Yes, date 1 is after  date 2\n");
        // }
        // else
        // {
        //     PrintingText::PrintTextOnScreen("No, date 1 is not after  date 2\n");
        // }

        // clsDate Date;
        // Date.SetDay(31);

        // Date.PrintDate();

        // if (Date.isLastDayInMonth())
        // {
        //     PrintingText::PrintTextOnScreen("yes it is last day in month\n");
        // }
        // else
        // {
        //     PrintingText::PrintTextOnScreen("No it is not last day in month\n");
        // }

        // clsDate Date;
        // Date.SetMonth(12);

        // Date.PrintDate();

        // if (Date.isLastMonthInYear())
        // {
        //     PrintingText::PrintTextOnScreen("yes it is last month in Year\n");
        // }
        // else
        // {
        //     PrintingText::PrintTextOnScreen("No it is not last month in year\n");
        // }

        // clsDate Date;
        // Date.IncreaseDateByOneDay();

        // Date.PrintDateAndDay("/");

        // clsDate Date("31/12/2022");

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("01-Adding one day is: ");
        // Date.IncreaseDateByOneDay();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("02-Adding 10 days is: ");
        // Date.IncreaseDateByXDayes(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("03-Adding one week is: ");
        // Date.IncreaseDateByOneWeek();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("04-Adding 10 weeks is: ");
        // Date.IncreaseDateByXWeeks(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("05-Adding one month is: ");
        // Date.IncreaseDateByOneMonth();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("06-Adding 5 month is: ");
        // Date.IncreaseDateByXMonths(5);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("07-Adding one year is: ");
        // Date.IncreaseDateByOneYear();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("08-Adding 10 years is: ");
        // Date.IncreaseDateByXYears(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("09-Adding 10 years (falster) is: ");
        // Date.IncreaseDateByXYearsFaster(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("10-Adding one decade  is: ");
        // Date.IncreaseDateByOneDecade();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("11-Adding 10 decades  is: ");
        // Date.IncreaseDateByXDecades(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("12-Adding 10 decades (faster) is: ");
        // Date.IncreaseDateByXDecades(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("13-Adding one century (faster) is: ");
        // Date.IncreaseDateByOneCentury();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("14-Adding one millennium (faster) is: ");
        // Date.IncreaseDateByOneMillennium();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // clsDate Date(31, 12, 2022);

        // PrintingText::PrintTextOnScreen("The current date now is =>> ");
        // Date.PrintDate();
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("01-Subtracting one day is: ");
        // Date.DecreaseDateByOneDay();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("02-Subtracting 10 days is: ");
        // Date.DecreaseDateByXDays(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("03-Subtracting one week is: ");
        // Date.DecreaseDateByOneWeek();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("04-Subtracting 10 weeks is: ");
        // Date.DecreaseDateByXWeeks(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("05-Subtracting one month is: ");
        // Date.DecreaseDateByOneMonth();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("06-Subtracting 5 month is: ");
        // Date.DecreaseDateByXMonths(5);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("07-Subtracting one year is: ");
        // Date.DecreaseDateByOneYear();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("08-Subtracting 10 years is: ");
        // Date.DecreaseDateByXYears(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("09-Subtracting 10 years (falster) is: ");
        // Date.DecreaseDateByXYearsFaster(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("10-Subtracting one decade  is: ");
        // Date.DecreaseDateByOneDecade();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("11-Subtracting 10 decades  is: ");
        // Date.DecreaseDateByXDecades(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("12-Subtracting 10 decades (faster) is: ");
        // Date.DecreaseDateByXDecadesFaster(10);
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("13-Subtracting one century (faster) is: ");
        // Date.DecreaseDateByOneCentury();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();
        // PrintingText::PrintTextOnScreen("14-Subtracting one millennium (faster) is: ");
        // Date.DecreaseDateByOneMillennium();
        // Date.PrintDate();
        // PrintingText::PrintLines();
        // PrintingText::PrintSequenceOfCharacters('*', 60);
        // PrintingText::PrintLines();

        // clsDate Date;

        // PrintingText::PrintTextOnScreen("Date before reading the date again =>> ");
        // Date.PrintDate();
        // PrintingText::PrintLines(2);

        // Date.ReadDateString("dd|mm|yyy", "|");

        // Date.IncreaseDateByOneDay();
        // PrintingText::PrintTextOnScreen("The date after we read it again and one day extra =>> ");
        // Date.PrintDate();
        // PrintingText::PrintLines();

        // clsDate Date;

        // PrintingText::PrintTextOnScreen(Date.FormatDate("dd|mm|yyyy", "|"));
        // PrintingText::PrintLines();

        // PrintingText::PrintTextOnScreen(Date.FormatDate("dd||mm||yyyy", "||"));
        // PrintingText::PrintLines();

        // clsDate::PrintDateAndDay();

        // clsDate::PrintIfItIsBusinessDay();
        // clsDate::PrintMonthCalender(Date.Month(), Date.Year());
        // cout << endl;

        // clsDate::PrintYearCalender(Date.Year());
        // cout << endl;

        // cout << "Number of days has been left from 01/01/2025 to ";
        // clsDate::PrintDate(Date);

        // cout << clsDate::NumberOfDaysFromTheBeginingOfTheYear(Date.Day(), Date.Month(), Date.Year());
        // cout << " days\n";

        // cout << "Number of days has been left from 01/01/2025 to ";
        // clsDate::PrintDate(Date);

        // cout << clsDate::NumberOfDaysFromTheBeginingOfTheYear(Date);
        // cout << " days\n";
        return 0;
}