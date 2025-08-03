#include <iostream>

using namespace std;

float ReadFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

float GetAvarage(float array[] , short size)
{
    float Avarage = 0;

    for(short loop = 0; loop < size; loop++)
    {
        Avarage += array[loop];
    }

    return Avarage /= 3;

}

void Print()
{
    float Grades[3];

    short LenOfGrades = sizeof(Grades) / sizeof(float);


    for(short loop = 0; loop < LenOfGrades; loop++)
    {
        cout << "Enter Mark (" << (loop+1) << "): ";
        Grades[loop] = ReadFloatNumber();
    }

    float Avarage = GetAvarage(Grades, LenOfGrades);

    cout << "The avarage of your marks is " << Avarage << endl;
}