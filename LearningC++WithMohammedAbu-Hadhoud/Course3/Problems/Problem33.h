#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

bool isGradeBetweenToNumbers(short Grade)
{
    return (Grade < 0 || Grade > 100);
}

// void PrintIsGradeIsNotBetweenTheRange(const string& Message, bool expresion)
// {
//     if(expresion)
//     cout << Message << endl;
// }

char GetGrade(short Grade)
{
    if(Grade >= 90)
    return 'A';
    else if(Grade >= 80)
    return 'B';
    else if(Grade >= 70)
    return 'C';
    else if(Grade >= 60)
    return 'D';
    else if(Grade >= 50)
    return 'E';
    else 
    return 'F';
}


// void PrintIsGradeIsNotBetweenTheRange(const string& Message, bool expresion, short Grade)
// {
//     while(expresion)
//     {
//         cout << Message << endl;
//         GetGrade(GetGrade(Grade));
//     }
// }

void PrintGrade(char Symbol)
{
    cout << "You Got " << Symbol << endl;
}

void Print()
{
    short Grade = ReadShortNumber("Enter your mark: ");
    // PrintIsGradeIsNotBetweenTheRange("Invalid Grade", isGradeBetweenToNumbers(Grade), Grade);
    while(isGradeBetweenToNumbers(Grade))
    {
        cout << "************************************\n";
        cout << "Invalid mark :(\n";
        Grade = ReadShortNumber("Enter your mark: ");
        cout << "************************************\n";

    }
    PrintGrade(GetGrade(Grade)); 
}