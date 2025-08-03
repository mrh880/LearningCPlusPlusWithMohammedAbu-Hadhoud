#include <iostream>

using namespace std;

short ReadShortNumber(string Message)
{
    short Age = 0;
    cout << Message;
    cin >> Age;
    return Age;
}

bool checkAgeBetweenToNumbers(short Age)
{
    return (Age >= 18 && Age <= 45);
}
void Print()
{
    short Age = ReadShortNumber("Enter your age: ");
    cout << (checkAgeBetweenToNumbers(Age) ? "Valid age\n" : "Invalid age\n");
}