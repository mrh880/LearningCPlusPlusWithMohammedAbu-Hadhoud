#pragma once

#include <string>

class clsPerson
{
private:
    short _ID = 0;
    std::string _FirstName = "";
    std::string _LastName = "";
    std::string _Email = "";
    std::string _Phone = "";

public:
    clsPerson(short ID, const std::string &FirstName, const std::string &LastName, const std::string &Email, const std::string &Phone);


    // Set Property
    // ------------------------------------------------------------------
    void SetFirstName(const std::string &FirstName);

    void SetLastName(const std::string &LastName);

    void SetEmail(const std::string &Email);

    void SetPhone(const std::string &Phone);
    // ------------------------------------------------------------------


    // Get Property
    // ------------------------------------------------------------------
    short ID();
    std::string FirstName();
    std::string LastName();
    std::string Email();
    std::string Phone();
    std::string FullName();
    // ------------------------------------------------------------------

    void Print();

    void SendEmail(const std::string &Subject, const std::string &Body);

    void SendSMS(const std::string &TextMessage);

    // friend class clsEmployee;

    // friend class clsEmployee;  

    friend std::string GetFullName(clsPerson &Person);

};