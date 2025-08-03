#pragma once

#include <iostream>
using namespace std;

struct stTimeDuration
{
    int Days = 0, Hours = 0, Minutes = 0, Seconds = 0;
};

struct stClientInfo
{
    string AccountNumber = "";
    string PinCode = "";
    string Name = "";
    string PhoneNumber = "";
    double AccountBalance = 0.0;
};



