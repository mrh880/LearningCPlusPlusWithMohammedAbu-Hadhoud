#pragma once

#include <string>

class clsTry
{
private:
    struct StudentInfo
    {
        std::string FirstName = "";
        std::string LastName = "";

        int ID = 0;
        short Age = 0;
    };

    StudentInfo _StudentInfo;

public:
    clsTry(const std::string &FirstName, const std::string &LastName, const int ID, const short Age);

    void SetFirstName(const std::string &FirstName);
    void SetLastName(const std::string &LastName);
    void SetID(int ID);
    void SetAge(short Age);

    std::string FirstName() const;
    std::string LastName() const;
    int ID() const;
    short Age() const;

    std::string FullName() const;

    void Print() const;
};