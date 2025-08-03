#pragma once 

#include <iostream>


using namespace std;

string spaces(short Number)
{
    if(Number < 10)
        return "  |";
    else 
        return " |";
}