#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

char GetOperation(const string& Message)
{
    char Operation = '+';
_get_purecall_handler();
    cout << Message;

    cin >> Operation;

    return Operation;
}

short CalculateTwoNumbers(short FirstNumber, short SecondNumber, char Operation)
{
    if(Operation == '+')
    return FirstNumber + SecondNumber;
    else if(Operation == '-')
    return FirstNumber - SecondNumber;
    else if(Operation == '*')
    return FirstNumber * SecondNumber;
    else if(Operation == '/')
    {
        if(SecondNumber == 0)
        return 0;
        else 
        return FirstNumber / SecondNumber;
    }
    else 
    return 0;
}

void PrintTheResult(short Result, short FirstNumber, short SecondNumber, char Operation)
{
    cout << FirstNumber <<  " " << Operation << " " << SecondNumber << " = " << Result << endl;
}
void Print()
{
    short FirstNumber = ReadShortNumber("Enter the first number: ");
    short SecondNumber = ReadShortNumber("Enter the second number: ");
    char Operation = GetOperation("Enter the operation you want to perform, choose whether(+, -, *, /): ");
    // CalculateTwoNumbers(FirstNumber, SecondNumber, Operation);
    PrintTheResult(CalculateTwoNumbers(FirstNumber, SecondNumber, Operation), FirstNumber, SecondNumber, Operation);
}