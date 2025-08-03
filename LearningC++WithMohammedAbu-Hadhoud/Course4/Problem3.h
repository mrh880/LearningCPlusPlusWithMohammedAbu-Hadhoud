#include <iostream>

using namespace std;

enum enNumberType {Even , Odd};

int ReadIntegerNumber(const string& Message)
{
    cout << Message;

    int Number = 0;

    cin >> Number;

    return Number;
}

enNumberType ReadNumberType(int Number)
{
    if(Number % 2 == 0)
        return enNumberType::Even;

        else 
            return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
    if(NumberType == enNumberType::Even)
        cout << "is even\n";

    else 
    cout << "is odd\n";
}

void Print()
{
    cout << "***************************************\n";
    cout << "IS YOUR NUMBER EVEN OR ODD\n";
    cout << "***************************************\n";

    int Number = ReadIntegerNumber("Enter a number: ");

   
    cout << Number << " ";  
    PrintNumberType(ReadNumberType(Number));
}
