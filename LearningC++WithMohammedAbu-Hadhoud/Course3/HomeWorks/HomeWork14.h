#include <iostream>

using namespace std;

void DisplayMyCardInfo()
{
    // Question
    cout << "****************************************\n";
    cout << "Name: mrh.\n";
    cout << "Age: 23.\n";
    cout << "City: Sana'a.\n";
    cout << "Country: Yemen.\n";
    cout << "****************************************\n";
    

    cout << endl;
}

void PrintSquareStars()
{
    cout << "********\n";
    cout << "********\n";
    cout << "********\n";
    cout << "********\n";

    cout << endl;
}

void PrintILoveProgrammin()
{
    cout << "I love programming!\n\n";
    cout << "I promise to be the best developer ever!\n\n";
    cout << "I know it will take some time to practice, but It will achieve my goal.\n\n";
    cout << "Best Regards,\n";
    cout << "mrh\n";

    cout << endl;
}

void PrintH()
{
        cout << "*    *\n";
        cout << "*    *\n";
        cout << "******\n";
        cout << "*    *\n";
        cout << "*    *\n";

        cout << endl;
}

void Print()
{
    DisplayMyCardInfo();
    PrintSquareStars();
    PrintILoveProgrammin();
    PrintH();   
}

#include <string>

void Try()
{
    short Number = 0;
    string Name = "", Country;

    cout << "Enter your Number: ";
    cin >> Number;
    cout << endl;

    cout << "Enter your name: ";
    cin.ignore(1, '\n');
    getline(cin, Name);
    cout << endl;

    cout << "Enter your Country: ";
    cin >> Country;
    cout << endl;

    cout << "Number: " << Number << ", Name: " << Name << ", Country: " << Country << endl; 
}