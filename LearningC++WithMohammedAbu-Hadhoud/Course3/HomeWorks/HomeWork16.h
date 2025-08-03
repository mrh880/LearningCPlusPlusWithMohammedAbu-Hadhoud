#include <iostream>

using namespace std;

short x = 22;

void LocalX()
{
    short x = 4;
    cout << "This is x from inside function local x, and its value: " << x << endl; 
}
void Print()
{
    short x = 6;

    ::x *= 2;
    cout << "Tis is global value of x and it equals " << ::x << endl;   
    LocalX();
    cout << "This is local value value of x inside main and the value of x is " << x << endl;
}