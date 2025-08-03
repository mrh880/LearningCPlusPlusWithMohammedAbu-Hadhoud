#include <iostream>
#include <string>

using namespace std;

void PrintName(const string& Name)
{
    cout << "Your name is " << Name;
}

string GetName(const string& Message)
{
    cout << Message;

    string Name = "";

    getline(cin, Name);

    return Name;
}

void Print()
{
    PrintName(GetName("Enter you name: ")); 
}