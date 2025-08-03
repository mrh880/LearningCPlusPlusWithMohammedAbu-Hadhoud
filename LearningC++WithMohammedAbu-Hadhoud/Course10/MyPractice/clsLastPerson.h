#pragma once

#include <string>


class clsAddress {};

class clsLastPerson
{
private:
    std::string _FullName = "";

    class clsAddress
    {
    private:
        std::string _AddressLine1 = "";
        std::string _AddressLine2 = "";
        std::string _City = "";
        std::string _Country = "";

    public:
        clsAddress(const std::string &AddressLine, const std::string &AddressLine2, const std::string &City, const std::string &Country);

        // Set propety
        // -------------------------------------------------------------------------------
        void SetAddressLine1(const std::string &AddressLine1);

        void SetAddressLine2(const std::string &AddressLine2);

        void SetCity(const std::string &City);

        void SetCountry(const std::string &Country);
        // -------------------------------------------------------------------------------

        // Get propety
        // -------------------------------------------------------------------------------
        std::string AddressLine1();

        std::string AddressLine2();

        std::string City();

        std::string Country();
        // -------------------------------------------------------------------------------

        void Pirnt();
    };


public:

    clsLastPerson(const std::string &AddressLine1, const std::string &AddressLine2, const std::string &City, const std::string &Country, const std::string &FullName);

    // Set propety
    // -------------------------------------------------------------------------------
    void SetFullName(const std::string &FullName);
    // -------------------------------------------------------------------------------

    // Get propety
    // -------------------------------------------------------------------------------
    std::string FullName();
    // -------------------------------------------------------------------------------

    clsAddress Address;
};