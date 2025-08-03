#include <iostream>

#include "clsPerson.h"
#include "clsEmployee.h"
#include "clsDeveloper.h"
#include "clsA.h"
#include "clsB.h"
#include "clsC.h"
#include "clsFather.h"
#include "clsSon.h"
#include "clsPerson_1.h"
#include "clsEmployee_1.h"
#include "clsStudent_1.h"
#include "clsMyClass.h"
#include "clsTry.h"
#include "clsLastPerson.h"


using namespace std;    
int main()
{
    // clsPerson Person1(22, "Hisham", "Dabwan", "mrh@gmail.com", "+967 736535350");
    // Person1.Print();

    // cout << endl;

    // Person1.SendEmail("talking about our work", "when you will come");

    // cout << endl;

    // Person1.SendSMS("How are you my friend");

    // cout << endl;
    // cout << "\033[1;91mRed Text\033[0m" << std::flush << endl;

    // clsEmployee Employee1(22, "Hisham", "Dabwan", "mrh@gmail.com", "+967 736535350", "Softer eng", "hi", 55000.215);
    // Employee1.Print();

    // cout << endl;

    // Employee1.SendEmail("jj", "dd");

    // cout << endl;

    // cout << endl;

    // Employee1.SendSMS("jlfdaj;jkf;ajf");

    // clsDeveloper Developer1(22, "Hisham", "Dabwan", "mrh@gmail.com", "+967 736535350", "Softer eng", "hi", 55000.215, "C++");

    // Developer1.Print();

    // cout << endl;

    // Developer1.SendEmail("jj", "dd");

    // cout << endl;

    // cout << endl;

    // Developer1.SendSMS("jlfdaj;jkf;ajf");

    // clsB B1;
    // B1.Fun1();
    // B1.Fun3();
    // cout << "Var 3 form class A = " << B1.Var3 << endl;
    // B1.ProtectedFunction2InClassA();

    // clsC C1;
    // C1.Fun1();
    // C1.ProtectedFunction2InClassA();

    // clsC C1;

    // C1.Fun5();
    // C1.Fun1();
    // C1.ProtectedFunction2InClassA();
    // C1.Fun3();
    // C1.Var3;

    // C1.Fun5();
    // C1.Fun1();
    // C1.ProtectedFunction2InClassA();
    // C1.Fun3();
    // C1.Var3;

    // C1.Fun1();
    // C1.ProtectedFunction2InClassA();

    // clsFather Father;

    // cout << Father.EyeColor << endl;
    // cout << Father.SkinColor << endl;

    // clsSon Son;
    
    // cout << Son.LifeSkill << endl;

    // clsFather *FatherPointer = &Son;

    // cout << FatherPointer->EyeColor << endl;
    // cout << FatherPointer->SkinColor << endl;

    
    // clsSon * Son = &Father;

    clsPerson_1 Person_1;
    clsEmployee_1 Employee_1;
    clsStudent_1 Studnet_1;

    // Person_1.Print();
    // Employee_1.Print();
    // Studnet_1.Print();

        // clsPerson_1 *Person1 = &Employee_1;
        // clsPerson_1 *Person2 = &Studnet_1;

        // Person1->Print();
        // Person2->Print();

    // clsMyClass MyClass;

    // MyClass.SetStudentName("mrh");
    // MyClass.SetStudentAge(23);
    // MyClass.SetStudentID(224488);

    // MyClass.Print();


    // clsPerson Person1(22, "Hisham", "Dabwan", "mrh@gmail.com", "+967 736535350");

    // cout << "Full Name: " << GetFullName(Person1) << endl;

    // clsTry Try("Hisham", "Dabwan", 22, 23);
    // // Try.SetAge(24);
    // // Try.Print();
    // // cout << endl << Try.FullName();
    
    // Try.SetFirstName("Raed");
    // Try.SetLastName("Dabwan");
    // Try.SetID(22352);
    // Try.SetAge(18);

    // Try.Print();    


    clsLastPerson LastPerson1("al", "b", "c", "d", "Hisham Dabwan");

    LastPerson1.Address.SetAddressLine1 ("Al raqas street");

    cout << LastPerson1.FullName() <<endl;


    LastPerson1.Address.Pirnt();
    return 0;
}