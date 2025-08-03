#include <iostream>

using namespace std;

short ReadShortNumber()
{
    short Number = 0;

    cin >> Number;

    return Number;
}

short NumberToThePowerOfTwo(short Number)
{
    return Number * Number;
}

short NumberToThePowerOfThree(short Number)
{
    return Number * Number * Number;
}

short NumberToThePowerOfFour(short Number)
{
    return Number * Number * Number * Number;
}

void Print()
{
    cout << "Enter the number you want to get its power to 2 :";
    short NumberTo2 = ReadShortNumber();

    // cout << "Enter the number you want to get its power to 3 :";
    // short NumberTo3 = ReadShortNumber();

    // cout << "Enter the number you want to get its power to 4:";
    // short NumberTo4 = ReadShortNumber();

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

// void Print()
// {
//     cout << "Enter the number you want to get its power to 2 :";
//     short NumberTo2 = ReadShortNumber();

//     cout << "Enter the number you want to get its power to 3 :";
//     short NumberTo3 = ReadShortNumber();

//     cout << "Enter the number you want to get its power to 4:";
//     short NumberTo4 = ReadShortNumber();

//     cout << "The Number your wanted to get to the power of 2 is " << NumberTo2 << ", and its power to 2 is " << NumberToThePowerOfTwo(NumberTo2) << endl;
//     cout << "The Number your wanted to get to the power of 3 is " << NumberTo3 << ", and its power to 3 is " << NumberToThePowerOfThree(NumberTo3) << endl;
//     cout << "The Number your wanted to get to the power of 4 is " << NumberTo4 << ", and its power to 4 is " << NumberToThePowerOfFour(NumberTo3) << endl;
// }