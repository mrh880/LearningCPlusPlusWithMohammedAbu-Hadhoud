#pragma once

class clsPerson
{
    int a = 0;
public:
    virtual void Print();
    friend class clsEmployee;
    friend class clsStudent;    
};