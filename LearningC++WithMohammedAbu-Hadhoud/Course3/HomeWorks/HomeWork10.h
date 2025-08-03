#include <iostream>

using namespace std;
struct PersonInfo
{
    string name = "";
    short Age = 0;
    string City = "";
    string Country = "";
    float MonthlySalary = 0.0f;
    float YearlySalary = MonthlySalary * 12;
    char Gender = '/';
    bool isMarried = false;
};

void Print()
{
    PersonInfo MyInfo;
    MyInfo.name = "mrh";
    MyInfo.Age = 23;
    MyInfo.City = "Sana'a";
    MyInfo.Country = "Yemen";
    MyInfo.MonthlySalary = 6000;
    MyInfo.YearlySalary = MyInfo.MonthlySalary * 12;
    MyInfo.Gender = 'M';
    MyInfo.isMarried = false;

    boolalpha;
    cout << "**************************************************\n";
    cout << "Name: " << MyInfo.name << endl;
    cout << "Age: " << MyInfo.Age << endl;
    cout << "City: " << MyInfo.City << endl;
    cout << "Country: " << MyInfo.Country << endl;
    cout << "Monthly salary: " << MyInfo.MonthlySalary << endl;
    cout << "Yearly salary: " << MyInfo.YearlySalary << endl;
    cout << "Gender: " << MyInfo.Gender << endl;
    cout << "Married: " << MyInfo.isMarried << endl;
    cout << "**************************************************\n";
}