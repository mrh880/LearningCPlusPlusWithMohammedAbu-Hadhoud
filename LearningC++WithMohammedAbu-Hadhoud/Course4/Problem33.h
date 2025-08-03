#include <iostream>

using namespace std;

enum enGrades {A, B, C, D, E, F};    

bool isNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

short ReadMark(const string& Message)
{
    short Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(!isNumberInRange(Number, 0, 100));
    
    return Number;
}

enGrades CheckMark(short Gread)
{
    if(Gread >= 90)
        return enGrades::A;

    else if(Gread >= 80)
        return enGrades::B;

    else if(Gread >= 70)
        return enGrades::C;

    else if(Gread >= 60)
        return enGrades::D;

    else if(Gread >= 50)
        return enGrades::E;

    else 
    return enGrades::F;
}

void PrintResult(enGrades Grade)
{
    if(Grade == enGrades::A)
        cout << "You got A\n";

    else if(Grade == enGrades::B)
        cout << "You Got B\n";

    else if(Grade == enGrades::C)
        cout << "You got C\n";
    
    else if(Grade == enGrades::D)
        cout << "You got D\n";

    else if(Grade == enGrades::E)
        cout << "You got E\n";

    else 
        cout << "You got F\n";
}

void GreetingMessage()
{
    cout << "***********************************\n";
    cout << "What grade you got, let's know now!\n";
    cout << "***********************************\n";
}

void DrawingALine()
{
    cout << "**********************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    DrawingALine();
    PrintResult(CheckMark(ReadMark("Enter you mark: ")));
    DrawingALine();
}