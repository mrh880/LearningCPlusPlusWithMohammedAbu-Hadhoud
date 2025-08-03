#pragma once

#include <string>

#include "clsEmployee.h"

class clsDeveloper : public clsEmployee
{
private:
   std::string _MainProgrammingLanguage = "";
   public:
    clsDeveloper(const std::string &ID, const std::string &FirstName, const std::string & LastName, const std::string &Email, const std::string &PhoneNumber, const std::string &Title, const std::string &Department, const float Salary, const std::string &MainProgrammingLanguage);

    void SetMainProgrammingLanguage(const std::string &MainProgrammingLanguage);

    std::string MainProgrammingLanguage() const;
    void Print();
};