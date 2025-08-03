#include "clsStudent.h"

#include <iostream>

using std::cout;
using std::endl;
using std::string;


void clsStudent::SetAge(short Age)
{
    _Age = Age;
}

short clsStudent::Age()

{
    return _Age;
}

void clsStudent::SetName(const string &FullName)
{
    _FullName = FullName;
}

string clsStudent::FullName()
{
    return _FullName;
}


void clsStudent::PrintStudentInfo()
{
    cout << "Age: " << _Age << endl;
    cout << "Full Name: " << _FullName;
}

clsStudent::clsStudent(short Age, const std::string &FullName)
{
    _Age = Age;
    _FullName = FullName;
}

clsStudent::clsStudent(clsStudent &Student)
{
    _Age = Student.Age();
    _FullName = Student.FullName();
}

clsStudent::clsStudent()
{
    ObjectNumber++;
}

short clsStudent::ObjectNumber = 0;

short clsStudent::NumberOfObjectsHasCreated()
{
    return ObjectNumber;
}
