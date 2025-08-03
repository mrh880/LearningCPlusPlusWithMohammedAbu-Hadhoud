#include <iostream>

using namespace std;

enum enOperation {Add = '+', Subtract = '-', Multiply = '*', Divide = '/'};

char chars[4] = {'+', '-', '*', '/'};

short Size = sizeof(chars) / sizeof(char);

bool isCharacterInRange(char chars[4], short Size, char Character)
{
    for(short loop = 0; loop < Size; loop++)
    if(Character == chars[loop])
        return true;

    return false;
}

char ReadCharacter(const string& Message)
{
    char Character = '+';

    do 
    {
        cout << Message;

        cin >> Character;
    } while(!isCharacterInRange(chars, 4, Character));

    return Character;
}

float ReadfloatingPointNumber(const string& Message)
{
    cout << Message;

    float Number = 0;

    cin >> Number;

    return Number;
}

enOperation ReadOperation(char Character)
{
    if(Character == '+')
        return (enOperation) Character;

    else if(Character == '-')
        return (enOperation) Character;

    else if(Character == '*')
        return (enOperation) Character;

    else 
        return (enOperation) Character;
}

void PrintMenu()
{
    cout << "=========================\n";
    cout << "Choose an operation to do\n";
    cout << "=========================\n";
    cout << "**************\n";
    cout << "(+): Add\n";
    cout << "(-): Subtract\n";
    cout << "(*): Multiplay\n";
    cout << "(/): Divide\n";
    cout << "**************\n";
}

void PrintResult(enOperation Operation, float FirstNumber, float SecondNumber)
{
    if(Operation == enOperation::Add)
        cout << FirstNumber  << " + " << SecondNumber << " = " <<FirstNumber + SecondNumber << endl;

    else if(Operation == enOperation::Subtract)
        cout << FirstNumber << " - " << SecondNumber << " = " << FirstNumber - SecondNumber << endl;

    else if(Operation == enOperation::Multiply)
        cout << FirstNumber << " * " <<  SecondNumber << " = " << FirstNumber *  SecondNumber << endl;

    else 
        if(SecondNumber == 0)
            cout << "CANT DIVIDE BY ZERO, RERUN THE PROGRAM AGAIN !\n";
        
        else 
            cout << FirstNumber << " / " <<  SecondNumber << " = " << (float) FirstNumber / SecondNumber << endl;
}

void GreetingMessage()
{
    cout << "************\n";
    cout << "Calculator!\n";
    cout << "************\n";
}

void DrawingALine()
{
    cout << "********************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    PrintMenu();
    DrawingALine();
    enOperation Operation = ReadOperation(ReadCharacter("Choose a character form the list above: "));
    DrawingALine();
    DrawingALine();
    int FirstNumber = ReadfloatingPointNumber("Enter the first number: ");
    int SecondNumber = ReadfloatingPointNumber("Enter the second number: ");
    DrawingALine();
    PrintResult(Operation, FirstNumber, SecondNumber);
}