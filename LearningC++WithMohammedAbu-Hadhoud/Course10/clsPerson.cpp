#include "clsPerson.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;



clsPerson::clsPerson(const std::string &ID,const std::string &FirstName, const std::string &LastName, const std::string &Email, const std::string &PhoneNumber)
{
    _ID = ID;
    _FirstName = FirstName;
    _LastName = LastName;
    _Email = Email;
    _PhoneNumber = PhoneNumber;
}


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

void clsPerson::SetPhoneNumber(const string &PhoneNumber)
{
    _PhoneNumber = PhoneNumber;
}

string clsPerson::ID()
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

string clsPerson::FullName()
{
    return _FirstName + " " + _LastName;
}

string clsPerson::Email()
{
    return _Email;
}

string clsPerson::PhoneNumber()
{
    return _PhoneNumber;
}

void clsPerson::SendEmail(const string &Subject, const string &Body)
{
    cout << "The following Message was successfully sent to emil " << _Email << endl;
    cout << "Subject: " << Subject << endl;
    cout << "Body: " << Body << endl;
}

void clsPerson::SendSMS(const string &Message)
{
    cout << "The following SMS was successfully sent to phone " << _PhoneNumber << endl;
    cout << Message << endl;
}

void clsPerson::Print()
{
    cout << "*******************************************\n";
    cout << "First Name: " << _FirstName << endl;
    cout << "Last Name: " << _LastName << endl;
    cout << "Full Name: " << FullName() << endl;    
    cout << "Email: " << _Email << endl;
    cout << "Phone Number: " << _PhoneNumber << endl;
    cout << "*******************************************\n";

}

