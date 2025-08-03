#include <iostream>

using namespace std;


short ReadShortNumber()
{
    short Number = 0;

    cin >> Number;

    return Number;
}

void PrintRelationOperator(short FirstNumber, short SecondNumber)
{
    cout << FirstNumber << " = " << SecondNumber  <<  " is " << (FirstNumber == SecondNumber) << endl;
    cout << FirstNumber << " != " << SecondNumber  <<  " is " << (FirstNumber != SecondNumber) << endl;
    cout << FirstNumber << " > " << SecondNumber  <<  " is " << (FirstNumber > SecondNumber) << endl;
    cout << FirstNumber << " < " << SecondNumber  <<  " is " << (FirstNumber < SecondNumber) << endl;
    cout << FirstNumber << " >= " << SecondNumber  <<  " is " << (FirstNumber >= SecondNumber) << endl;
    cout << FirstNumber << " <= " << SecondNumber  <<  " is " << (FirstNumber <= SecondNumber) << endl;

    cout << endl;
}
void Print()
{
    cout << "Enter the first number: ";
    short FirstNumber = ReadShortNumber();

    cout << "Enter the second Number: ";
    short SecondNumber = ReadShortNumber();

    cout << endl;

    PrintRelationOperator(FirstNumber, SecondNumber);
}