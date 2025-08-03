#include <iostream>

using namespace std;

enum enPrimeOrNotPrime {Prime, NotPrime};

int ReadIntegerNumber(const string& Message)
{
    int Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(Number < 0);
    return Number;
}

enPrimeOrNotPrime CheckPrime(int Number)
{
    int TimesToCheck = Number / 2;
    for(int loop = 2; loop <= TimesToCheck; loop++)
        if(Number % loop == 0)
            return enPrimeOrNotPrime::NotPrime;

    return enPrimeOrNotPrime::Prime;
}

void PrintNumberType(int Number)
{
    if(CheckPrime(Number) == enPrimeOrNotPrime::Prime)
        cout << Number << " is prime\n";
    else
    cout << Number << " is not prime\n";
}

void Print()
{
    PrintNumberType(ReadIntegerNumber("Enter a number: "));
}