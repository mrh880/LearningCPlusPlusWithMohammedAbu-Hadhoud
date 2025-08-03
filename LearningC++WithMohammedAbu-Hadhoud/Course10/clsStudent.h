#pragma once

#include <string>

class clsStudent
{
private:
    short _Age = 0;
    std::string _FullName = "";
    static short ObjectNumber;

public:
    void SetAge(short Age);

    clsStudent(short Age, const std::string &FullName);

    clsStudent(clsStudent &Student);
    clsStudent();
    short Age();

    void SetName(const std::string &FullName);

    std::string FullName();

    void PrintStudentInfo();

    short NumberOfObjectsHasCreated();
};
