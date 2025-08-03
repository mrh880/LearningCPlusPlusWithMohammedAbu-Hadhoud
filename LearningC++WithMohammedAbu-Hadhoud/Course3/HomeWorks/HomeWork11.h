#include <iostream>

using namespace std;

enum Gender  {Male, Female };
enum MaritalStatus {Single, Married};
enum Color {Red, Green, Blue, Yellow, Brown, Purple};

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
    string Color = "";
};

void Print()
{
    Gender MyGender;
    MyGender = Gender::Male;

    MaritalStatus MyMaritalStatus;
    MyMaritalStatus = MaritalStatus::Single;

    Color MyColor;
    MyColor = Color::Purple;

    PersonInfo MyInfo;
    MyInfo.name = "mrh";
    MyInfo.Age = 23;
    MyInfo.City = "Sana'a";
    MyInfo.Country = "Yemen";
    MyInfo.MonthlySalary = 6000;
    MyInfo.YearlySalary = MyInfo.MonthlySalary * 12;
    MyInfo.Gender = MyGender;
    MyInfo.isMarried = MyMaritalStatus;
    MyInfo.Color = MyColor;
    

    if(MyGender == Gender::Male)
        MyInfo.Gender = 'M';
    else 
        MyInfo.Gender = 'F';
    if(MyColor == Color::Red)
        MyInfo.Color = "Red";
    else if (MyColor == Color::Green)
        MyInfo.Color = "Green";
    else if(MyColor == Color::Blue)
        MyInfo.Color = "Blue";
    else if (MyColor == Color::Yellow)
        MyInfo.Color = "Yellow";
    else if (MyColor == Color::Brown)
        MyInfo.Color = "Brown";
    else 
        MyInfo.Color = "Purple";

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
    cout << "Color: " << MyInfo.Color << endl;
    cout << "**************************************************\n";
}