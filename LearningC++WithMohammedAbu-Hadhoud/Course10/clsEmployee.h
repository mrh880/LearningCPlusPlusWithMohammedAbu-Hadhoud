#pragma once

#include "clsPerson.h"

#include <string>



class clsEmployee : public clsPerson
{
private:
    std::string _Title = "";
    std::string _Department = "";
    float _Salary = 0;
public:
    void SetTitle(const std::string &Title);
    void SetDepartment(const std::string &Department);
    void SetSalary(const float Salary);

    clsEmployee(const std::string &ID, const std::string &FirstName, const std::string & LastName, const std::string &Email, const std::string &PhoneNumber, const std::string &Title, const std::string &Department, const float Salary);

    std::string Title();
    std::string Department();
    float Salary();

    void Print();
};