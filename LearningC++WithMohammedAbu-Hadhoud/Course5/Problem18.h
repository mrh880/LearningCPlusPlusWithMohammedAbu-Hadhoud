#include <iostream>
#include <string>

using namespace std;

short ReadPositiveNumber(const string& Message)
{
    short Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(Number <= 0);

    return Number;
}

string EncryptA_Message(string Text, short key)
{
    short LengthOfText = Text.length();
    string EncryptedMessage = "";

    for(short loop  = 0; loop < LengthOfText; loop++)
    {
        Text[loop]  = char((int) Text[loop] + key);
    }

    return Text;
}


string DecryptA_Message(string Text, short key)
{
    short LengthOfText = Text.length();
    string DecryptedMessage = "";

    for(short loop = 0; loop < LengthOfText; loop ++)
    {
        Text[loop] += char((int) Text[loop] + key);
        
    }

    return Text;
}

void Print()
{
    string MyMessage = "How are you !";
    const short key = 1;
    string MyMessage1 = EncryptA_Message(MyMessage, key);
    string MyMessage2 = DecryptA_Message(MyMessage1, key);
    cout << MyMessage2 << endl << ":0";
}