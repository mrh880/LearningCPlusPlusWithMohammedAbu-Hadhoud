#include <iostream>
#include <cmath>

using namespace std;

float GetFloatNumber()
{
    float Number = 0;

    cin >> Number;

    return Number;
}

const float PI = 3.14;

float AreaThroughDiameter(float D)
{
    return (PI * pow(D, 2)) / (4); 
}

void Print()
{
    cout << "Enter D: ";
    float D = GetFloatNumber();

    float Area = AreaThroughDiameter(D);

    Area = ceil(Area);
    
    cout << "Area is " << Area << endl; 

}