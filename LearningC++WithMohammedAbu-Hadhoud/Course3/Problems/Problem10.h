#include <iostream>

using namespace std;

static short Counter = 0;

short GetShortNumber()
{
    short Number = 0;
    cout << "Enter mark (" << ++Counter << "): " ;
    cin >> Number;

    return Number;
}

void PrintTheAvarageOf3Subjects(short Subject1, short Subject2, short Subject3)
{
    cout << (Subject1 + Subject2 + Subject3) / 3;
}

void Print()
{
    short Subject1 = GetShortNumber();
    short Subject2 = GetShortNumber();
    short Subject3 = GetShortNumber();
    
    PrintTheAvarageOf3Subjects(Subject1, Subject2, Subject3);
}