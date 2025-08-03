#include <iostream>

using namespace std;

void Question1()
{
    string Name = "mrh";
    short Age = 23;
    string City = "Sana'a";
    string Country = "Yemen";
    float MonthlySalary = 6000;
    char Gender = 'M';
    bool isMarried = false;

    cout << "********************************************************************\n";
    cout << "Name: " << Name << '\n';
    cout << "Age: " << Age << '\n';
    cout << "City: " <<  City << '\n';
    cout << "Country: " << Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << '\n';
    cout << "Yearly Salary: " << MonthlySalary * 12 << '\n';
    cout << "Gender: " << Gender << '\n';
    cout << "Married: " << isMarried << endl;
    cout << "********************************************************************\n";
    
    cout << endl;
}

void Question2()
{
    short Num1 = 10, Num2 = 20, Num3 = 30;

    cout << Num1 << " +\n";
    cout << Num2 << " +\n";
    cout << Num3 << endl;
    cout << "______________________________________________\n";
    cout << Num1 + Num2 + Num3 << endl;

    cout << endl;
}

void Question3()
{
    short Age = 25;
    cout << "After 5 years you will be " << Age + 5 << endl;

    cout << endl;
}