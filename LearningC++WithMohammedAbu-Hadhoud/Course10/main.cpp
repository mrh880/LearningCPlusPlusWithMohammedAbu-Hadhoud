#include "clsPerson.h"
#include "clsCalculator.h"
#include "clsStudent.h"
#include "clsEmployee.h"
#include "clsDeveloper.h"
#include "MyPractice/clsPerson.h"
#include "Projects/StringLibrary/clsString.h"

#include <iostream>

using namespace std;

int main()
{
    // clsPerson Me;
    // Me.SetAge(23);
    // Me.SetFirstName("Hisham");
    // Me.SetLastName("Dabwan");
    // Me.PrintPersonInfo();

    // clsCalculator MyCalculator;

    // MyCalculator.Add(10);
    // MyCalculator.PrintResult();
    // MyCalculator.Add(100);
    // MyCalculator.PrintResult();
    // MyCalculator.Add(200);
    // MyCalculator.PrintResult();
    // MyCalculator.Subtract(10);
    // MyCalculator.PrintResult();
    // MyCalculator.Clear();
    // MyCalculator.PrintResult();
    // MyCalculator.Add(10);
    // MyCalculator.PrintResult();
    // MyCalculator.CancelLastOPeration();
    // MyCalculator.PrintResult();
    // MyCalculator.Add(12);
    // MyCalculator.PrintResult();
    // MyCalculator.CancelLastOPeration();
    // MyCalculator.CancelLastOPeration();

    // MyCalculator.Add(10);
    // MyCalculator.PrintResult();
    // MyCalculator.Add(12);
    // MyCalculator.PrintResult();
    // MyCalculator.CancelLastOPeration();
    // MyCalculator.PrintResult();

    // clsStudent Student1(23, "Hisham Ahmed");
    // clsStudent a(4, "44");
    // clsStudent Student2 = a;
    // Student2.PrintStudentInfo();
    // // Student1.PrintStudentInfo();

    // clsStudent Student1;
    // clsStudent Student2;
    // clsStudent Student3;
    // clsStudent Student4;
    // clsStudent Students[10];
    // clsStudent a[1100];
    // // clsStudent::Age();  

    // cout << "Number of objects has created till now >== " << Student4.NumberOfObjectsHasCreated() << endl;

    // clsPerson Me("444", "Hisham", "Dabwan", "mrh@gmail.com", "+967736535350");
    // Me.PrintPersonInfo();
    // cout << endl;
    // Me.SendEmail("mrh", "How are you :)");
    // cout << endl;
    // Me.SendSMS("Where are you now :(");

    // clsEmployee Me("44", "Hisham", "Dabwan", "mrh@gmail.com", "+967736535350", "Software Engnering", "ff", 44);
    // Me.Print(); 
    // // Me.Print();
    // cout << endl;
    // Me.SendEmail("mrh", "How are you :)");
    // cout << endl;
    // Me.SendSMS("Where are you now :(");

    // clsDeveloper Me("44", "Hisham", "Dabwan", "mrh@gmail.com", "+967736535350", "Software Engnering", "ff", 44, "C++");
    // clsDeveloper Mee("44", "Hisham", "Dabwan", "mrh@gmail.com", "+967736535350", "Software Engnering", "ff", 44, "Python");

    // Me.Print();

    // clsPerson Person1(22, "Hisham", "Dabwan", "mrh@gmail.com", "+967 736535350");
    // Person1.Print();
    // cout << endl;

    // Me.Print(); 
    // // Me.Print();
    // cout << endl;
    // Me.SendEmail("mrh", "How are you :)");
    // cout << endl;
    // Me.SendSMS("Where are you now :(");

    vector<string>MyVector;
    clsString MyString("Hesham Ahmed Dabwan", ' ', 'H', " ");
    MyString.MakeAllStringToLower();
    cout << MyString.Value() << endl;
    return 0;
}