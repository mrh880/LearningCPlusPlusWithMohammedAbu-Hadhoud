#include <iostream>

using namespace std;

void Question1()
{
    string Name = "";
    short Age = 0;
    string City = "";
    string Country = "";
    float MonthlySalary = 0;
    float YearlySalary = MonthlySalary * 12;
    char Gender = '/';
    bool isMarried = false;


    cout << "********************************************************************\n";
    cout << "Enter your name: ";
    cin >> Name;

    cout << "Enter your age: ";
    cin >> Age;

    cout << "Enter your city: ";
    cin >> City;

    cout << "Enter your country: ";
    cin >> Country;

    cout << "Enter your monthly salary: ";
    cin >> MonthlySalary;


    cout << "Enter your Gender, JUST ENTER M FOR MALE, OR F FOR FEMALE: ";
    cin >> Gender;

    cout << "Are your married? IF YES ENTER 1 AND IF NOT ENTER 0: ";
    cin >> isMarried;
    cout << "********************************************************************\n\n";

    YearlySalary = MonthlySalary * 12; 
    /* We must update the yearlySalary because the MonthlySalary = 0 and the YearlySalary = MOnthlySalary * 12 
    and then the user will enter the MOnthlySalary but the YearlySalary will not change 
    */

    
    cout << "********************************************************************\n";
    cout << "Name: " << Name << '\n';
    cout << "Age: " << Age << '\n';
    cout << "City: " <<  City << '\n';
    cout << "Country: " << Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << '\n';
    cout << "Yearly Salary: " << YearlySalary << '\n';
    cout << "Gender: " << Gender << '\n';
    cout << "Married: " << isMarried << endl;
    cout << "********************************************************************\n";
    
    cout << endl;
}

void Question2()
{
    short Num1 = 0, Num2 = 0, Num3 = 0;

    cout << "***********************************\n";
    cout << "Enter the first Number: ";
    cin >> Num1;

    cout << "Enter the Second Number: ";
    cin >> Num2;

    cout << "Enter the third Number: ";
    cin >> Num3;
    cout << "***********************************\n\n";


    cout << Num1 << " +\n";
    cout << Num2 << " +\n";
    cout << Num3 << endl;
    cout << "______________________________________________\n";
    cout << Num1 + Num2 + Num3 << endl;

    cout << endl;
}

void Question3()
{
    short Age = 0;
    short AgeAfter5Years = 0;

    cout << "*******************************\n";
    cout << "Enter your age: ";
    cin >> Age;
    cout << "*******************************\n";

    AgeAfter5Years = Age + 5;
    
    cout << "After 5 years you will be " << AgeAfter5Years << endl;

    cout << endl;
}