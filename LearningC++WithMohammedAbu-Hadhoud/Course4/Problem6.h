#include <iostream>
#include <string>

using namespace std;

string ReadString(const string& Message)
{
    cout << Message;

    string String;

    getline(cin, String);

    return String;
}

struct stFullname
{
    string Firstname;
    string Lastname;
};

stFullname ReadFullname()
{
    stFullname Fullname;

    Fullname.Firstname = ReadString("Enter you first name: ");
    Fullname.Lastname = ReadString("Enter you last name: ");

    return Fullname;
}

string GetFullname(stFullname Fullname)
{
        return Fullname.Firstname + " " + Fullname.Lastname;
}

void PrintFullname(string Fullname)
{
    cout << "Your full name is " << Fullname;
}

void Print()
{
    stFullname Fullname;
    PrintFullname(GetFullname(ReadFullname()));
}