#pragma once 

#include "clsA.h"



class clsB : protected clsA
{
public:
    void Fun1();
    void ProtectedFunction2InClassA();
};