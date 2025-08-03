#include <iostream>

using namespace std;

float ReadFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

void ReadMarks(float Marks[3])
{
    cout << "Enter your first mark: ";
    Marks[0] = ReadFloatNumber();

    cout << "Enter your second mark: ";
    Marks[1] = ReadFloatNumber();

    cout << "Enter your thrid mark: ";
    Marks[2] = ReadFloatNumber();
}

float CalculateAvarage(float Marks[3])
{
    return (Marks[0] + Marks[1] + Marks[2]) / (3);
}

bool isPass(float Avarage)
{
    return (Avarage >= 50 ? true : false);
}

void Print()
{
    float Marks[3];
    ReadMarks(Marks);
    // float Avarage = CalculateAvarage(Marks);
    // bool Result = isPass(Avarage);
    // if(Result)
    // cout << "You have passed\n";
    // else 
    // cout << "You have not passed\n";

    cout << (isPass(CalculateAvarage(Marks)) == true ? "You have passed" : "You have not passed");
}