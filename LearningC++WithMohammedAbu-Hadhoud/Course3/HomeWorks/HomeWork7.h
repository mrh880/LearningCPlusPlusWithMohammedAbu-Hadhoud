#include <iostream>

using namespace std;

void Question1()
{
    short Num1 = 0, Num2 = 0;

    cout << "Enter the first number: ";
    cin >> Num1;

    cout << "Enter the second number: ";
    cin >> Num2;

    cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
    cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
    cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
    cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
    cout << Num1 << " % " << Num2 << " = " << Num1 % Num2 << endl;
}