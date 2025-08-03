#include <iostream>
#include <cmath>

using namespace std;

short ReadShortNumber()
{
    short Number = 0;

    cin >> Number;

    return Number;
}

short NumberToThePowerOfTwo(short Number)
{
    return round(pow(Number, 2));
}

short NumberToThePowerOfThree(short Number)
{
    return round(pow(Number, 3));
}

short NumberToThePowerOfFour(short Number)
{
    return round(pow(Number, 4));
}

void Print()
{
    cout << "Enter the number you want to get its power to 2 :";
    short NumberTo2 = ReadShortNumber();

    cout << "******************************************************************************\n";
    cout << "The Number your wanted to get to the power of 2 is " << NumberTo2 << ", and its power to 2 is " << NumberToThePowerOfTwo(NumberTo2) << endl;
    cout << "******************************************************************************\n";

    cout << "******************************************************************************\n";
    cout << "The Number your wanted to get to the power of 3 is " << NumberTo2 << ", and its power to 3 is " << NumberToThePowerOfThree(NumberTo2) << endl;
    cout << "******************************************************************************\n";

    cout << "******************************************************************************\n";
    cout << "The Number your wanted to get to the power of 4 is " << NumberTo2 << ", and its power to 4 is " << NumberToThePowerOfFour(NumberTo2) << endl;
    cout << "******************************************************************************\n";
}

