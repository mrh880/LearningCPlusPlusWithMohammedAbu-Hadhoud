#include "clsEmployee.h"

#include <iostream>

using namespace std;

clsEmployee::clsEmployee(short ID, const std::string &FirstName, const std::string &LastName, const std::string &Email, const std::string &Phone, const std::string &Title, const std::string & Department, const float Salary)
: 
clsPerson(ID, FirstName, LastName, Email, Phone)
{
    _Title = Title;
    _Department = Department;
    _Salary = Salary;
}

// Set Property
// -------------------------------------------------
void clsEmployee::SetTitle(const string &Title)
{
    _Title = Title;
}

void clsEmployee::SetDepartment(const string &Department)
{
    _Department = Department;
}

void clsEmployee::SetSalary(float Salary)
{
    _Salary = Salary;
}
// -------------------------------------------------

// Get Property
// -------------------------------------------------
string clsEmployee::Title()
{
    return _Title;
}

string clsEmployee::Department()
{
    return _Department;
}

float clsEmployee::Salary()
{
    return _Salary;
}
// -------------------------------------------------

void clsEmployee::Print()
{
    cout << "Employee Info: \n";
    cout << "******************************************************\n";
    cout << "ID: " << ID() << endl;
    cout << "First Name: " << FirstName() << endl;
    cout << "Last Name: " << LastName() << endl;
    cout << "Full Name: " << FullName() << endl;
    cout << "Email: " << Email();
    cout << "Phone: " << Phone() << endl;
    cout << "Tile: " << _Title << endl;
    cout << "Department: " << _Department << endl;
    cout << "Salary: " << _Salary << endl;
    cout << "******************************************************\n";
}




