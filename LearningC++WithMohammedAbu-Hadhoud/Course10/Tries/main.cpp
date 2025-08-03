#include "clsPerson.h"
#include "clsEmployee.h"
#include "clsStudent.h"

#include <iostream>

using namespace std;

int main()
{
    // clsEmployee Employee;
    // Employee.FirstName();
    // cout << endl;
    // Employee.PritFullName();

    // clsPerson *Person = &Employee;
    // Person->FirstName();

    // clsPerson Person;
    // clsEmployee *Employee = &Person;

    // clsEmployee Employee;
    // Employee.Print();

    // cslStudnet Studnet;
    // Studnet.Print();

    clsEmployee Employee;
    clsStudent Studnet;
    cout << "Hi are you my friend \n";

    clsPerson *Person1 = &Employee;
    clsPerson *Person2 = &Studnet;

    Person1->Print();
    Person2->Print();
    
    return 0;
}