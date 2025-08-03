#include <iostream>

using namespace std;

void PrintingAline(short lengthOfLine)
{
    for(short loop = 0; loop < lengthOfLine; loop++)
    cout << "*";
    cout << "\n";
}

string ReadString(const string& Message)
{
    cout << Message;
    
    string String = "";

    cin >> String;

    return String;
}

bool login()
{
    PrintingAline(20);
    string PIN = ReadString("Enter you pin: ");
    PrintingAline(20);
    if(PIN == "1234")
        return true;
    else 
        return false;
}

void ClearingScreenAndGettingGreenColor()
{
    system("cls");
    system("color 0A");
}

void GreetingMessage()
{
    PrintingAline(94);
    cout << "You want to check your password, the correct password is 1234, let's try this now !\n";
    PrintingAline(94);
}

void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    if(login()) 
        cout << "Your Balance 7500\n";
    else 
        cout << "Wring Pin\n";
}
