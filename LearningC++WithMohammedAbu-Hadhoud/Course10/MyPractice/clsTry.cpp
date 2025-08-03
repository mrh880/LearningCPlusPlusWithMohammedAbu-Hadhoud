#include "clsTry.h"

#include <iostream>
#include <string>

using namespace std;

clsTry::clsTry(const std::string &FirstName, const std::string &LastName, const int ID, const short Age)
:
 _StudentInfo{FirstName, LastName, ID, Age}
{
}

void clsTry::SetFirstName(const string &FirstName)
{
    _StudentInfo.FirstName = FirstName;
}

void clsTry::SetLastName(const string &LastName)
{
    _StudentInfo.LastName = LastName;
}

void clsTry::SetID(int ID)
{
    _StudentInfo.ID = ID;
}

void clsTry::SetAge(short Age)
{
    _StudentInfo.Age = Age;
}

string clsTry::FirstName() const
{
    return _StudentInfo.FirstName;
}

string clsTry::LastName() const
{
    return _StudentInfo.LastName;
}

int clsTry::ID() const
{
    return _StudentInfo.ID;
}

short clsTry::Age() const
{
    return _StudentInfo.Age;
}

string clsTry::FullName() const
{
    return _StudentInfo.FirstName + " " + _StudentInfo.LastName;
}

void clsTry::Print() const
{
    cout << "Student Info\n";
    cout << "**********************************************\n";
    cout << "First Name: " << _StudentInfo.FirstName << endl;
    cout << "Last Name: " << _StudentInfo.LastName << endl;
    cout << "ID: " << _StudentInfo.ID << endl;
    cout << "Age: " << _StudentInfo.Age << endl;
    cout << "Full Name: " << _StudentInfo.FirstName + " " << _StudentInfo.LastName << endl;
    cout << "**********************************************\n";
}
