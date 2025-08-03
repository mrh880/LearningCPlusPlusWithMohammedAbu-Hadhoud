#include <iostream>

using namespace std;

string ReadPassword(string Message)
{
    cout << Message;

    string Password = "";

    cin >> Password; // cin is good, no need to use getline() 
                     //cuz we will not need to have spaces in the password when we get it form the user.

    return Password;
}

 string CorrectPassword = "1234";
 short Balance = 7500;

bool checkPassword(string Password)
{
    return (Password == CorrectPassword);
}
void Print()
{
   
    string Password = ReadPassword("Enter your Pin: ");
    // (checkPassword(Password) == true ? cout << "Your balance is " << Balance << endl : cout << "Wrong Password");
    if(checkPassword(Password))
    cout << "Your balance is " << Balance << endl;

    else 
    cout << "Wrong Password\n";
}