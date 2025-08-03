#include <iostream>
#include <string>

using namespace std;

void Question1()
{
    string String1 = "";
    string String2 = "";
    string String3 = "";

    cout << "Please enter String1\n";
    getline(cin, String1);
    cout << endl;

    cout << "Enter String2?\n";
    cin >> String2;
    cout << endl;

    cout << "Please enter String3?\n";
    cin >> String3;
    cout << endl;

    cout << "************************************\n";
    cout << "The Length of String1 is " << String1.length() << endl;
    cout << "Characters at 0,2,4,7 are: " << String1[0] << " " << String1[2] << " " << String1[4] << " " << String1[7] << endl;
    cout << "Concatenating String2 and String3 = " << String2 + String3 << endl;
    cout << String2 << " * " << String3 << " = " <<  stoi(String2) * stoi(String3) << endl;
}