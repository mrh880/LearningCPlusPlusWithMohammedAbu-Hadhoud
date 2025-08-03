#include <iostream>

using namespace std;

void LogicExpressions()
{
    bool Result1 = (12 >= 12); // 1
    bool Result2 = (12 > 7); // 1
    bool Result3 = (8 < 6); // 0
    bool Result4 = (8 == 8); // 1
    bool Result5 = (12 <= 12); // 1
    bool Result6 = (7 == 5); // 0

    bool Result7 = !(12 >= 12); // 0
    bool Result8 = !(12 < 7); // 1
    bool Result9 = !(8 < 6); // 1
    bool Result10 = !(8 == 8); // 0
    bool Result11 = !(12 <= 12); // 0
    bool Result12 = !(7 == 5); // 1

    bool Result13 = (1 && 1); // 1
    bool Result14 = (true && 0); // 0
    bool Result15 = (0 || 1); // 1
    bool Result16 = (0 || 0); // 0
    bool Result17 = !(0); // 1
    bool Result18 = !(1 || 0); // 0

    bool Result19 = (7 == 7) && (7 > 5); // 1
    bool Result20 = (7 == 7) && (7 < 5); // 0
    bool Result21 = (7 == 7) || (7 < 5); // 1
    bool Result22 = (7 < 7) || (7 > 5); // 1 
    bool Result23 = !(7 == 7) && (7 > 5); // 0
    bool Result24 = (7 == 7) && !(7 < 5); // 1

    bool Result25 = (5 > 6 && 7 == 7) || (1 || 0); // 1
    bool Result26 = !(5 > 6 && 7 == 7) || (1 || 0); // 1
    bool Result27 = !(5 > 6 && 7 == 7) || !(1 || 0); // 1
    bool Result28 = !(5 > 6 || 7 == 7) && !(1 || 0); // 0
    bool Result29 = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true; // 0
    bool Result30 = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 1)) || true; // 1

    cout << Result1 << endl;
    cout << Result2 << endl;
    cout << Result3 << endl;
    cout << Result4 << endl;
    cout << Result5 << endl;
    cout << Result6 << endl;
    cout << endl;

    cout << Result7 << endl;
    cout << Result8 << endl;
    cout << Result9 << endl;
    cout << Result10 << endl;
    cout << Result11 << endl;
    cout << Result12 << endl;
    cout << endl;

    cout << Result13 << endl;
    cout << Result14 << endl;
    cout << Result15 << endl;
    cout << Result16 << endl;
    cout << Result17 << endl;
    cout << Result18 << endl;
    cout << endl;

    cout << Result19 << endl;
    cout << Result20 << endl;
    cout << Result21 << endl;
    cout << Result22 << endl;
    cout << Result23 << endl;
    cout << Result24 << endl;
    cout << endl;
    
    cout << Result25 << endl;
    cout << Result26 << endl;
    cout << Result27 << endl;
    cout << Result28 << endl;
    cout << Result29 << endl;
    cout << Result30 << endl;
    cout << endl;
}

void Print()
{
    LogicExpressions();
}