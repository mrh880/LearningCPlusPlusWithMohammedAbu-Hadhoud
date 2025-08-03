#include <iostream>
#include <cmath>

using namespace std;

int MyCeil(float Number)
{
    if(int(Number) == Number) // if the fraction is 0
        return (int) Number;
    else 
    {
        if(Number > 0)
            return int(Number) + 1;
        else 
            return int(Number);
    }
}

void Print()
{
    cout << MyCeil(11.1) << endl;
    cout << ceil(11.1) << endl;
}