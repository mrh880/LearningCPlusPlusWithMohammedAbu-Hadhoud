#include <iostream>
#include <string>

using namespace std;

void Question1()
{
    string MyString = "43.22";

    int StringToFInt = stoi(MyString);
    float StringToFloat = stof(MyString);
    double StringToDouble = stod(MyString);

    cout << "\"43.22\" = " << StringToFInt << " in int\n";
    cout << "\"43.22\" = " << StringToFloat << " in float\n";
    cout << "\"43.22\" = " << StringToDouble << " in double\n";
}

void Question2()
{
    int MyInteger = 1345552560;
    string MyString = to_string(MyInteger);

    cout << MyInteger << " = \" " << MyString << "\" in string\n";
}

void Question3()
{
    double MyDouble = 33.5;
    string MyString = to_string(MyDouble);

    cout << MyDouble << " = \"" << MyString << "\" in string\n";
}

void Question4()
{
    float MyFloat = 55.23;

    string MyString = to_string(MyFloat);

    // int MyInteger = MyFloat;
    // int MyInteger = (int) MyFloat;
    int MyInteger = int(MyFloat);

    cout << MyFloat << " = " << "\"" << MyString << "\" in string\n";
    cout << MyFloat << " = " << MyInteger << " in integer\n";
}