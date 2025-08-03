#include <iostream>

using namespace std;

// leave the lights

short ReadShortNumber()
{
    short Number = 0;

    cin >> Number;

    return Number;
}

short TotalPennies(short Pennies, short Nickels, short Dimes, short Quarters, short Dollars)
{
    return Pennies * 1 + Nickels * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100;
}

float TotalDollars(short TotalPennies)
{
    return (float) TotalPennies / 100;
}

void Print()
{
    cout << "Enter how many Penny: ";
    short Penny = ReadShortNumber();

    cout << "Enter how many Nickel: ";
    short Nickel = ReadShortNumber();

    cout << "Enter how many Dime: ";
    short Dime = ReadShortNumber();

    cout << "Enter how many Quarter: ";
    short Quarter = ReadShortNumber();

    cout << "Enter how many Dollar: ";
    short Dollar = ReadShortNumber();

    short Result = TotalPennies(Penny, Nickel, Dime, Quarter, Dollar);
    float TotalResult = TotalDollars(Result);

    cout << "Total Pennies is " << Result << endl;
    cout << "Total Dollars is " << TotalResult << endl;
}