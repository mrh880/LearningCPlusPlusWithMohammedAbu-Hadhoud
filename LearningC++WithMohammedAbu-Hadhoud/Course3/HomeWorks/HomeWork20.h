#include <iostream>

using namespace std;

float ReadFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

void ReadGrades(float Grades[3])
{
    for(short loop = 0; loop < 3; loop++)
    {
        cout << "Enter grade (" << (loop+1) << "): ";
        Grades[loop] = ReadFloatNumber();
    }
}

float GetAvarage(float Grades[3])
{
    float Avarage = 0;
    for(short loop = 0; loop < 3; loop++)
    Avarage += Grades[loop];

    Avarage /= 3;

    return Avarage;
}

void PrintGrades(float Avarage)
{
    cout << "Avarage of all your marks are " << Avarage << endl;
}

void Print()
{
    float Grades[3];
    ReadGrades(Grades);
    float Avarage = GetAvarage(Grades);
    PrintGrades(Avarage);
}