#include <iostream>
#include <cmath>

using namespace std;


int MySqrt(int Number)
{
    return pow(Number, 0.5);
}

void Print()
{
    cout << "My Pow " << MySqrt(25) << endl;
    cout << "C++ Pow " << sqrt(25) << endl;
}