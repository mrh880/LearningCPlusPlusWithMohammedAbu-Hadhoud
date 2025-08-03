#include <iostream>

using namespace std;

void Shape1()
{
    for(short OuterLoop = 65; OuterLoop <= 90; OuterLoop++)
    {
        cout << "All " << char(OuterLoop) << " Possibilities are " << endl;
        cout << "***********************************************\n";
        for(short InnerLoop = 65; InnerLoop <= 90; InnerLoop++)
        {
             cout << char(OuterLoop) << char(InnerLoop) << endl;
        }
        cout << "***********************************************\n";

        cout << endl;
    }
}



void Shape2()
{
    for(short OuterLoop = 10; OuterLoop >= 1; OuterLoop--)
    {
        for(short InnerLoop = 1; InnerLoop <= OuterLoop; InnerLoop++)
        cout << "* ";

        cout << endl;
    }
}

void Shape3()
{
    for(short OuterLoop = 10; OuterLoop >= 1; OuterLoop--)
    {
        for(short InnerLoop = 1; InnerLoop <= OuterLoop; InnerLoop++)
        cout << InnerLoop << " ";

        cout << endl;
    }
}


void Shape4()
{
    for(short OuterLoop = 1; OuterLoop <= 10; OuterLoop++)
    {
        for(short InnerLoop = 1; InnerLoop <= OuterLoop; InnerLoop++)
            cout << InnerLoop << " ";

        cout << endl;
    }
}


void Shape5()
{
    for(short OuterLoop = 65; OuterLoop <= 70; OuterLoop++)
    {
        for(short InnerLoop = 65; InnerLoop <= OuterLoop; InnerLoop++)
            cout << char(InnerLoop) << " ";

        cout << endl;
    }
}


void Shape6()
{
    for(short OuterLoop = 1; OuterLoop <= 10; OuterLoop++)
    { 
        for(short InnerLoop = OuterLoop; InnerLoop <= 10; InnerLoop++)
            cout << InnerLoop << " ";

        cout << endl;
    }
}


void Print()
{
    // Shape1();
    // Shape2();
    // Shape3();
    // Shape4();
    // Shape5();
    Shape6();
}