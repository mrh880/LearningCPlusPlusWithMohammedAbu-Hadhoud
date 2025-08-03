#include "clsDeveloper.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


clsDeveloper::clsDeveloper(const std::string &ID, const std::string &FirstName, const std::string &LastName, const std::string &Email, const std::string &PhoneNumber, const std::string &Title, const std::string &Department, const float Salary, const std::string &MainProgrammingLanguage) : clsEmployee(ID, FirstName, LastName, Email, PhoneNumber, Title, Department, Salary)
{
    _MainProgrammingLanguage = MainProgrammingLanguage;
}

void clsDeveloper::SetMainProgrammingLanguage(const string &MainProgrammingLanguage)
{
    _MainProgrammingLanguage = MainProgrammingLanguage;
}

string clsDeveloper::MainProgrammingLanguage() const
{
    return _MainProgrammingLanguage;
}

void clsDeveloper::Print()
{
    cout << "*************************************************************\n";
    cout << "First Name: " << FirstName() << endl;
    cout << "Last Name: " << LastName() << endl;
    cout << "Full Name: " << FullName() << endl;
    cout << "Email: " << Email() << endl;
    cout << "Phone Number: " << PhoneNumber() << endl;
    cout << "Department: " << Department() << endl;
    cout << "Title: " << Title();
    cout << "Salary: " << Salary() << endl;
    cout << "Main Programming Language: " << MainProgrammingLanguage() << endl;
    cout << "*************************************************************\n";
}