#pragma once

#include <string>

class clsInterfaceStudent
{
public:
    virtual std::string StudentName(const std::string &StudnetName) = 0;
    virtual short StudentAge(short Age) = 0;
    virtual short StudentID(short ID) = 0;
    virtual void Print() = 0;
};