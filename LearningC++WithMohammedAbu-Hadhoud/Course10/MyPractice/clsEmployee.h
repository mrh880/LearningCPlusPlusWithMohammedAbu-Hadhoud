#pragma once 

#include "clsPerson.h"

#include <string>

class clsEmployee : public clsPerson
{
private:
    std::string _Title = "";
    std::string _Department = "";
    float _Salary = 0.0;

public:

    clsEmployee(short ID, const std::string &FirstName, const std::string &LastName, const std::string &Email, const std::string &Phone, const std::string &Title, const std::string & Department,const float   Salary);
    // Set Property
    // -------------------------------------------------
    void SetTitle(const std::string &Title);

    void SetDepartment(const std::string &Department);

    void SetSalary(float Salary);

    // -------------------------------------------------

    
     // Get Property
    // -------------------------------------------------
    std::string Title();

    std::string Department();

    float Salary();
    // -------------------------------------------------

    void Print();

};