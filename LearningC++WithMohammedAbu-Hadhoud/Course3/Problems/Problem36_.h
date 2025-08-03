#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

char ReadChar(const string& Message)
{

    cout << Message;

    char character = '+';

    cin >> character;

    return character;
}

// string GetTheREsult(char Operation)
// {
//     switch(Operation)
//     {
//         case '+': 
//             return "+";

//         case '-': 
//             return "-";

//         case '*': 
//             return "*";

//          case '/': 
//             return "/";

//         default: 
//             return "Invalid operation.\n";
//     }
// }

void PrintTheResult(char Operation, short FirstNumber, short SecondNumber)
{
    switch(Operation)
    {
        case '+':
            cout << FirstNumber << " + " << SecondNumber << " = " << FirstNumber + SecondNumber << endl;
            break;

        case '-': 
            cout << FirstNumber << " - " << SecondNumber << " = " << FirstNumber - SecondNumber << endl; 
            break;

            case '*':
                cout << FirstNumber <<  " * " << SecondNumber << " = " << FirstNumber * SecondNumber;
                break;

                case '/': 
                    if(SecondNumber == 0)
                        cout << "CAN NOT DIVIDE BY ZERO\n";
                    else
                    cout << FirstNumber << " / " << SecondNumber << " = " << FirstNumber / SecondNumber << endl;
                    break;

                default:
                    cout << "Invalid operation.\n";
    }
}

void Print()
{
    short FirstNumber = ReadShortNumber("Enter the first number: ");
    char Operation = ReadChar("Enter the operation you want to perform with the two numbers: ");
    short SecondNumber = ReadShortNumber("Enter the second number: ");
    // GetTheREsult(Operation);
    PrintTheResult(Operation, FirstNumber, SecondNumber);
    // cout<< GetTheREsult(Operation);
}