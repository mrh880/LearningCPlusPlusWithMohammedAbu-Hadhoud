#include "clsEmployee.h"

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

void clsEmployee::SetTitle(const std::string &Title)
{
    _Title = Title;
}

void clsEmployee::SetDepartment(const std::string &Department)
{
    _Department = Department;
}

void clsEmployee::SetSalary(const float Salary)
{
    _Salary = Salary;
}

clsEmployee::clsEmployee(const std::string &ID, const std::string &FirstName, const std::string & LastName, const std::string &Email, const std::string &PhoneNumber, const std::string &Title, const std::string &Department, const float Salary) :
clsPerson(ID, FirstName, LastName, Email, PhoneNumber)
{
    _Title = Title;
    _Department = Department;
    _Salary = Salary;
}

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

void clsEmployee::Print()
{
    cout << "*******************************************\n";
    cout << "First Name: " << FirstName() << endl;
    cout << "Last Name: " << LastName() << endl;
    cout << "Full Name: " << FullName() << endl;    
    cout << "Email: " << Email() << endl;
    cout << "Phone Number: " << PhoneNumber() << endl;
    cout <<  "Department: " << Department() << endl;
    cout << "Title: " << Title();
    cout << "Salary: " << Salary() << endl;
    cout << "*******************************************\n";
}
