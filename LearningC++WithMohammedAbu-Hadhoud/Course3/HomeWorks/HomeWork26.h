#include <iostream>

using namespace std;

short CalculateNumberLessThan50()
{
    short Number;
    short Sum = 0;

    for(short loop = 0; loop < 5; loop++)
    {
        cout << "Enter a number: ";
        cin >> Number;

        if(Number > 50)
            continue;
            
            Sum += Number;
    }

    return Sum;
}
void Print()
{
    cout << "The sum is " << CalculateNumberLessThan50();
}