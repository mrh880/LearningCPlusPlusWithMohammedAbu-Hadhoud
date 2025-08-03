#include <iostream>

using namespace std;

short ReadShortNumber()
{
    short Number = 0;

    cin >> Number;

    return Number;
}

bool isPass(short mark)
{
    return (mark >= 50 ? true : false);
}

void Print()
{
    cout << "Enter your mark: ";
    short mark = ReadShortNumber();

    if(isPass(mark))
    cout << "You have passed\n";

    else 
    cout << "You have not passed\n";  
}
