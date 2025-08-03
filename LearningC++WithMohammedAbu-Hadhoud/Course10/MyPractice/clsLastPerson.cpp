#include "clsLastPerson.h"

#include <iostream>
#include <string>

using namespace std;

// Class Last Person
// -------------------------------------------------------------------------------------------------------------------------------
clsLastPerson::clsLastPerson(const string &AddressLine1, const string &AddressLine2, const string &City, const string &Country, const string &FullName)
: 
Address(AddressLine1, AddressLine2, City, Country) // ✅ Correctly initialize nested object
{
    _FullName = FullName;
}

void clsLastPerson::SetFullName(const string &FullName)
{
    _FullName = FullName;
}

string clsLastPerson::FullName()
{
    return _FullName;
}
// -------------------------------------------------------------------------------------------------------------------------------

// Class Address
// -------------------------------------------------------------------------------------------------------------------------------
clsLastPerson::clsAddress::clsAddress(const string &AddressLine1, const string &AddressLine2, const string &City, const string &Country)
{
    _AddressLine1 = AddressLine1;
    _AddressLine2 = AddressLine2;
    _City = City;
    _Country = Country;
}

void clsLastPerson::clsAddress::SetAddressLine1(const string &AddressLine1)
{
    _AddressLine1 = AddressLine1;
}

void clsLastPerson::clsAddress::SetAddressLine2(const string &AddressLine2)
{
    _AddressLine2 = AddressLine2;
}

void clsLastPerson::clsAddress::SetCity(const string &City)
{
    _City = City;
}

void clsLastPerson::clsAddress::SetCountry(const string &Country)
{
    _Country = Country;
}

string clsLastPerson::clsAddress::AddressLine1()
{
    return _AddressLine1;
}

string clsLastPerson::clsAddress::AddressLine2()
{
    return _AddressLine2;
}

string clsLastPerson::clsAddress::City()
{
    return _City;
}

string clsLastPerson::clsAddress::Country()
{
    return _Country;
}

void clsLastPerson::clsAddress::Pirnt()
{
    cout << "Person Info: \n";
    cout << "******************************************************\n";
    cout << "AddressLine: " << _AddressLine1 << endl;
    cout << "AddressLine: " << _AddressLine2 << endl;
    cout << "AddressLine: " << _City << endl;
    cout << "AddressLine: " << _Country << endl; 
    cout << "******************************************************\n";
}
// -------------------------------------------------------------------------------------------------------------------------------
