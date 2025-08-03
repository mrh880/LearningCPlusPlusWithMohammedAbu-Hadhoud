#include "clsMyClass.h"

#include <iostream>


using namespace std;

clsMyClass::clsMyClass()
{
    _StudentName = "";
    _StudentAge = 0;
    _StudentID = 0;
}

clsMyClass::clsMyClass(const string &StudentName, int Age, int ID)
{
    _StudentName = StudentName;
    _StudentAge = Age;
    _StudentID = ID;
}

void clsMyClass::SetStudentName(const string &StudentName)
{
    _StudentName =  StudentName;
}

void clsMyClass::SetStudentAge(int StudentAge)
{
    _StudentAge = StudentAge;
}

void clsMyClass::SetStudentID(int StudentID)
{
    _StudentID = StudentID;
}

string clsMyClass::StudentName()
{
    return _StudentName;
}

int clsMyClass::StudentAge()
{
    return _StudentAge;
}

int clsMyClass::StudentID()
{
    return _StudentID;
}

string clsMyClass::StudentName(const string &StuentName)
{
    return StuentName;
}

short clsMyClass::StudentAge(short Age)
{
    return Age;
}

short clsMyClass::StudentID(short ID)
{
    return ID;
}

void clsMyClass::Print()
{
    cout << "Studnet Info:\n";
    cout << "*************************************\n";
    cout << "Student Name: " << _StudentName << endl;
    cout << "Studnet Age: " << _StudentAge << endl;
    cout << "Studnet ID: " << _StudentID << endl;
    cout << "*************************************\n";
}