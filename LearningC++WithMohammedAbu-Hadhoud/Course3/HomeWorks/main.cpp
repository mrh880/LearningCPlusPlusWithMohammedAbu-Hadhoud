#include <iostream>
// #include "HomeWork1.h"
// #include "HomeWork2.h"
// #include "HomeWork3.h"
// #include "HomeWork4.h"
// #include "HomeWork5.h"?
// #include "HomeWork6.h"
// #include "HomeWork7.h"
// #include "HomeWork8.h"
// #include "HomeWork9.h"
// #include "HomeWork11.h"
// #include "HomeWork12.h"
// #include "HomeWork13.h"
// #include "HomeWork14.h"
// #include "Homework15.h"
// #include "HomeWork16.h"
// #include "HomeWork17.h"
// #include "HomeWork18.h"
// #include "Homework19.h"
// #include "HomeWork20.h"
// #include "HomeWork21.h"
// #include "HomeWork22.h"
// #include "HomeWork23.h"
// #include "HomeWork24.h"
// #include "HomeWork25.h"
#include "HomeWork26.h"


using namespace std;

void JustFun();

int main()
{
    // cout << endl;   
    // Question1();
    // Question2();
    // Question3();
    // Question4();
    // cout << sizeof(string);
    // JustFun();
    // cout << CHAR_MAX;
    // cout << ULLONG_MAX;
    // Question1();
    // Print();
    // Try();  
    Print();
    return 0;
}

void JustFun()
{
    float MonthlySalary = 0;
    point1: 
    float YearlySalary = MonthlySalary * 12;
    // goto point2;

    cout << "Enter your monthly salary: ";
    cin >> MonthlySalary;

    goto point1;

    point2:
    cout << "Your monthly salary is " << MonthlySalary << " and your yearly salary is " << YearlySalary << endl;
}