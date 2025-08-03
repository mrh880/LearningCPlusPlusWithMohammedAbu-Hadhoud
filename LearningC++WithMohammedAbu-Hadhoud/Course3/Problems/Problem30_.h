#include <iostream>

using namespace std;

int ReadIntNumber(const string& Message)
{
    cout << Message;

    int Number = 0;

    cin >> Number;

    return Number;
}

bool isItANegativeNumber(int Number)
{
    return (Number < 0 ? true : false); 
}

int GetFactorialOfN(int Number)
{
    if(Number == 0)
        return 0;

    int Factorial = 1;
    int loop = 1;
    while(loop <= Number)
    {
        Factorial *= loop;

        loop++; 
    }
    return Factorial;
}

void Print()
{
    int Factorial = ReadIntNumber("Enter a number to give its factorial: ");
    while(isItANegativeNumber(Factorial))
        Factorial = ReadIntNumber("Enter a number to give its factorial: ");
    cout << "The factorial of " << Factorial << " is " << GetFactorialOfN(Factorial) << endl;
}