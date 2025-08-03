#pragma once

#include "InterfaceClsStudent.h"

#include <string>

class clsMyClass : public clsInterfaceStudent
{
private:
    std::string _StudentName = "";
    int _StudentAge = 0;
    int _StudentID = 0;

public:
    clsMyClass();
    clsMyClass(const std::string &StudentName, int Age, int ID);
    void SetStudentName(const std::string &StudnetName);
    void SetStudentAge(int Age);
    void SetStudentID(int ID);

    std::string StudentName();
    int StudentAge();
    int StudentID();

    std::string StudentName(const std::string &StudnetName) override;
    short StudentAge(short Age) override;
    short StudentID(short ID) override;
    void Print() override;
};