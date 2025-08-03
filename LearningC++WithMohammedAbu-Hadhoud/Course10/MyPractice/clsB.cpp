#include "clsB.h"

#include <iostream>

using namespace std;

void clsB::Fun1()
{
    cout << "This Fun 1 form class B \n";
}

void clsB::ProtectedFunction2InClassA()
{
    clsA::Fun2();
}

