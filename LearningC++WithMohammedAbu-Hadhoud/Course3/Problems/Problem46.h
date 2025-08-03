#include <iostream>

using namespace std;

void PrintLettersFromAtoZ()
{
    cout << "***************\n";
    for(short loop = 65; loop <= 90; loop++)
    cout << char(loop) << endl;
    cout << "***************\n";
}

void PrintLettersFrom_a_to_z()
{
    cout << "***************\n";
    for(short loop = 97; loop <= 122; loop++)
    cout << char(loop) << endl;
    cout << "***************\n";
}

void Print()
{
    PrintLettersFromAtoZ();
    cout << "**************************************************\n";
    PrintLettersFrom_a_to_z();
}