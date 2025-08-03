#include <iostream>

using namespace std;

int ReadIntNumber(const string& Message)
{
    cout << Message;

    int Number = 0;

    cin >> Number;

    
    return Number;
}
int GetFactorialOfN(int Number)
{
    int Factorial = 1;
    for(short loop = 1; loop <= Number; loop++)
    Factorial *= loop;
    
    return Factorial;
}

void Print()
{
    int Factorial = ReadIntNumber("Enter a number to give its factorial: ");
    cout << "The factorial of " << Factorial << " is " << GetFactorialOfN(Factorial) << endl;
}