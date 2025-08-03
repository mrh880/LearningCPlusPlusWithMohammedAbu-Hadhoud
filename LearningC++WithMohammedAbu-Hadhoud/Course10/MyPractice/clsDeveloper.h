#pragma once

#include "clsEmployee.h"

class clsDeveloper : public clsEmployee
{
private:
    std::string _MainProgrammingLanguage = "";

public:
    clsDeveloper(short ID, const std::string &FirstName, const std::string &LastName, const std::string &Email, const std::string &Phone, const std::string &Title, const std::string &Department, const float Salary, const std::string MainProgrammingLanguage);

    // Set Property
    // ----------------------------------------------------------------------------------------
    void SetMainProgrammingLanguage(const std::string &MainProgrammingLanguage);
    // ----------------------------------------------------------------------------------------

    // Get Property
    // ----------------------------------------------------------------------------------------
    std::string MainProgrammingLanguage();
    // ----------------------------------------------------------------------------------------

    void Print();
};