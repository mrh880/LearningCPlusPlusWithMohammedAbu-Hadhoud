#include <iostream>

using namespace std;

short ReadShortNumer(const string& Message)
{
    cout << Message;

    int Number = 0; 

    cin >> Number;

    return Number;
}

short GetMark(short Number)
{
    return Number;
}

bool isPassOrFail(short Mark)
{
    return(Mark >= 50 ? true : false);
}

void PrintResult(bool Expresion)
{
    if(Expresion)
        cout << "YOU pass\n";
    else 
        cout << "You fail\n";
}
void Print()
{
    PrintResult(isPassOrFail(GetMark(ReadShortNumer("Enter your mark: "))));
}