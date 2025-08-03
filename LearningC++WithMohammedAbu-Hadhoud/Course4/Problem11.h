#include <iostream>

using namespace std;
enum enPassOrFail {Pass, Fail};

int ReadIntegerNumber(const string& Message)
{
    cout << Message;

    short Number = 0; 

    cin >> Number;

    return Number;
}

void ReadThreeMarks(int &FirstMark, int &SecondMark, int &ThirdMark)
{
    FirstMark = ReadIntegerNumber("Entre your first mark: ");
    SecondMark = ReadIntegerNumber("Enter your second mark: ");
    ThirdMark = ReadIntegerNumber("Enter your third mark: ");
}

int SumOfThreeMarks(int FirstMark, int SecondMark, int ThirdMark)
{
    return(FirstMark + SecondMark + ThirdMark);
}

float AvarageOfThreeMarks(int FirstMark, int SecondMark, int ThirdMark)
{
    return (float) (SumOfThreeMarks(FirstMark, SecondMark, ThirdMark)) / 3;    
}

enPassOrFail CheckAvarage(float Avarage)
{
    if(Avarage >= 50)
        return enPassOrFail::Pass;

    else 
        return enPassOrFail::Fail;
}

void PrintTheResult(float Number)
{
    if(CheckAvarage(Number) == enPassOrFail::Pass)
        cout << "You Passed\n";

    else 
        cout << "You Failed\n";
}

void Print()
{
    int FirstNumber = 0;
    int SecondNumber = 0; 
    int ThirdNumber = 0;

    ReadThreeMarks(FirstNumber, SecondNumber, ThirdNumber);
    cout << "Avarage: " << AvarageOfThreeMarks(FirstNumber, SecondNumber, ThirdNumber) << endl;
    PrintTheResult(AvarageOfThreeMarks(FirstNumber, SecondNumber, ThirdNumber)); 

}