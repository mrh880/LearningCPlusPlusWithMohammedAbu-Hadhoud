#include "clsPerson.h"

#include <iostream>

using namespace std;

clsPerson::clsPerson(short ID, const std::string &FirstName, const std::string &LastName, const std::string &Email, const std::string &Phone)
{
    _ID = ID;
    _FirstName = FirstName;
    _LastName = LastName;
    _Email = Email;
    _Phone = Phone;
}

// Set Property
// ---------------------------------------------------------------
void clsPerson::SetFirstName(const string &FirstName)
{
    _FirstName = FirstName;
}

void clsPerson::SetLastName(const string &LastName)
{
    _LastName = LastName;
}

void clsPerson::SetEmail(const string &Email)
{
    _Email = Email;
}

void clsPerson::SetPhone(const string &Phone)
{
    _Phone = Phone;
}
// ---------------------------------------------------------------

// Get Property
// ---------------------------------------------------------------
short clsPerson::ID()
{
    return _ID;
}

string clsPerson::FirstName()
{
    return _FirstName;
}

string clsPerson::LastName()
{
    return _LastName;
}

string clsPerson::Email()
{
    return _Email;
}

string clsPerson::Phone()
{
    return _Phone;
}

string clsPerson::FullName()
{
    return _FirstName + _LastName;
}
// ---------------------------------------------------------------

void clsPerson::Print()
{
    cout << "Person Info: \n";
    cout << "******************************************************\n";
    cout << "ID: " << _ID << endl;
    cout << "First Name: " << _FirstName << endl;
    cout << "Last Name: " << _LastName << endl;
    cout << "Full Name: " << FullName() << endl;
    cout << "Email: " << _Email;
    cout << "Phone: " << _Phone << endl;
    cout << "******************************************************\n";
}

void clsPerson::SendEmail(const string &Subject, const string & Body)
{
    cout << "The following message sent successfully to email " << _Email << endl;
    cout << "Subject: " << Subject << endl;
    cout << "Body: " << Body << endl;
}

void clsPerson::SendSMS(const string &TextMessage)
{
    cout << "The following SMS sent successfully to phone " << _Phone << endl;
    cout << TextMessage << endl;
}


string GetFullName(clsPerson &Person)
{
    return Person.FullName();
}