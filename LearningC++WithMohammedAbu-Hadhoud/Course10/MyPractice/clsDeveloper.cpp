#include "clsDeveloper.h"

#include <iostream>
#include <string>

using namespace std;

clsDeveloper::clsDeveloper(short ID, const std::string &FirstName, const std::string &LastName, const std::string &Email, const std::string &Phone, const std::string &Title, const std::string &Department, const float Salary, const std::string MainProgrammingLanguage)
    : clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
{
    _MainProgrammingLanguage = MainProgrammingLanguage;
}

// Set Property
// ----------------------------------------------------------------------------------------
void clsDeveloper::SetMainProgrammingLanguage(const string &MainProgrammingLanguage)
{
    _MainProgrammingLanguage = MainProgrammingLanguage;
}
// ----------------------------------------------------------------------------------------

// Get Property
// ----------------------------------------------------------------------------------------
string clsDeveloper::MainProgrammingLanguage()
{
    return _MainProgrammingLanguage;
}
// ----------------------------------------------------------------------------------------

void clsDeveloper::Print()
{
    cout << "Employee Info: \n";
    cout << "*************************************************************\n";
    cout << "ID: " << ID() << endl;
    cout << "First Name: " << FirstName() << endl;
    cout << "Last Name: " << LastName() << endl;
    cout << "Full Name: " << FullName() << endl;
    cout << "Email: " << Email();
    cout << "Phone: " << Phone() << endl;
    cout << "Tile: " << Title() << endl;
    cout << "Department: " << Department() << endl;
    cout << "Salary: " << Salary() << endl;
    cout << "Main Programming Language: " << _MainProgrammingLanguage << endl; 
    cout << "*************************************************************\n";
}
