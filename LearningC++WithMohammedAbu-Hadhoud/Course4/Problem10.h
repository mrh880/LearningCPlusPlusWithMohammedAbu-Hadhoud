#include <iostream>

using namespace std;

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

float AvarageOfThreeMarks(int Number)
{
    return (float) (Number) / 3;
}


void PrintTheResult(float Number)
{
    cout << "The avarage of you marks is " << Number << endl;
}

void Print()
{
    int FirstNumber = 0;
    int SecondNumber = 0; 
    int ThirdNumber = 0;

    ReadThreeMarks(FirstNumber, SecondNumber, ThirdNumber);
    PrintTheResult(AvarageOfThreeMarks(SumOfThreeMarks(FirstNumber, SecondNumber, ThirdNumber)));  

}