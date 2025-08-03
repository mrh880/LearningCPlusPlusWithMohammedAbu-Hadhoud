#include <iostream>

using namespace std;

short ReadShortNumber()
{
    short Number = 0;

    cin >> Number;

    return Number;
}

bool ReadBoolValue()
{
    bool Expresion = false;

    cin >> Expresion;
    
    return Expresion;
}

bool isHired(short Age, bool hasAdriverLicence)
{
    return (Age > 21 && hasAdriverLicence == true);
}

void Print()
{
    cout << "Enter your age: ";
    short Age = ReadShortNumber();

    cout << "Do you have a driver licence: ";
    bool has_A_Driver_Licence = ReadBoolValue();

    bool Result = isHired(Age, has_A_Driver_Licence);

    if(Result)
    cout << "Your are Hired\n";

    else 
    cout << "Your are not hired\n";
}