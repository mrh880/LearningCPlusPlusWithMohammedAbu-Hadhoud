#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
    string String = "";

    getline(cin, String);

    return String;
}

void PrintName(string Name)
{
    cout << Name << endl;
}

void Print()
{
    cout << "Enter your name: ";
    
    string Name = ReadString();

    PrintName(Name);
}