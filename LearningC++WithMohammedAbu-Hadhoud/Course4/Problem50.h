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
    string PIN = "";
    short Tries = 3;

    do 
    {
        PrintingAline(30);
        PIN = ReadString("Enter your pin: ");
        PrintingAline(30);
        Tries--;

        if(PIN == "1234")
            return true;
        else 
        {
            cout << "Wrong pin!\n";
            system("color 4F");
        }
    } while(Tries != 0 && PIN != "1234");

    return false;
}

void ClearingScreenAndGettingGreenColor()
{
    system("cls");
    system("color 0A");
}

void GreetingMessage()
{
    PrintingAline(120);
    cout << "You want to check your password, the correct password is 1234, and note you have only 3 times let's try this now !\n";
    PrintingAline(120);
}

void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();
    if(login()) 
    {
        system("color 2F");
        cout << "Your Balance 7500\n";
    }
    else 
    {
        system("color 4F");
        cout << "Wrong Pin and you used all your tries\n";
    }
}
