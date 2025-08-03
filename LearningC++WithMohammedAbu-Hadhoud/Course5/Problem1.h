#include <iostream>

using namespace std;

void PrintHeader()
{
    cout << "\t\t\t\t\t\t\t\tMultiplication Table From 1 To 10\n\n\t";
    for(short loop = 1; loop <= 10; loop++)
        cout << loop << "\t\t ";
    cout << endl << endl;

    for(short loop = 0; loop < 165; loop++)
        cout << "_";
    cout << endl;
}

string spaces(short Number)
{
    if(Number < 10)
        return "  |";
    else 
        return " |";
}

void PrintMultiplicationBody()
{
    for(short OuterLoop = 1; OuterLoop <= 10; OuterLoop++)
    {
        cout << OuterLoop << spaces(OuterLoop) << "    ";
        for(short InnerLoop = 1; InnerLoop <= 10; InnerLoop++)
        {
            cout << InnerLoop * OuterLoop << "\t\t ";
        }
        cout << endl;
    }
}

void Print()
{
    system("color 0A");
    PrintHeader();
    PrintMultiplicationBody();
}