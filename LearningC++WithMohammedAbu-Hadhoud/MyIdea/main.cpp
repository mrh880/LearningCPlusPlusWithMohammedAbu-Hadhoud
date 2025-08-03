#include <iostream>
#include <string>

using namespace std;

void EachLetterCApp(string &Sentence)
{
    short LengthOfWord = Sentence.length();
    bool isInWord = false;

    for(short loop = 0; loop < LengthOfWord; loop++)
    {
        if(Sentence[loop] != ' ')
        {
            isInWord = true;
            Sentence[loop] = toupper(Sentence[loop]);
        }
        else 
        {
            isInWord = false;
        }
    }
    cout << Sentence << endl;
}

void LongestWordInSentence(string &Word)
{
    short LengthOfWord = Word.length();

    bool isInWord = false;

    short CurentCount = 0;
    short LastCount = 0;
    string FinalWord = "";

    for(short loop = 0; loop < LengthOfWord; loop++)
    {
        if(Word[loop] != ' ')
        {
            CurentCount++;
            FinalWord += Word[loop];
            isInWord = true;
        }
        else 
            isInWord = false;
    }
}

int findSecondLargest(int arr[], int size) 
{
    short FirstSmallestNumberInArray = arr[0];
    short SecondSmallNumberInArray = arr[1];
    for(short loop = 0; loop < size; loop++)
    {
        if(arr[loop] <= FirstSmallestNumberInArray)
            FirstSmallestNumberInArray = arr[loop];

        if(SecondSmallNumberInArray > FirstSmallestNumberInArray)
            SecondSmallNumberInArray = arr[loop + 1];

    }

    return SecondSmallNumberInArray;
    // 1 2 3 4 5 6 
}

short SummationOfNumber(short Number1)
{
    int Number = 0;
    for(short loop = 1; loop <= Number; loop++)
        Number += loop;
    return Number;
}

short FindMissingNumberInAnArray(int arr[], int size)
{
    return 0;
}

int main()
{
    int a;
    int arr[7] = {12, 35, 1, 10, 34, 1};
    int size = 6;
    cout << findSecondLargest(arr, size) << endl;
    return 0;
}