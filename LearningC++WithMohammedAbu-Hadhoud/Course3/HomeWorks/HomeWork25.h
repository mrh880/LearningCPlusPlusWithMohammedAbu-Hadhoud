#include <iostream>

using namespace std;

short FindInAnArray(short Array[100], short Size, short Element)
{
    int Result = 0;
    for(short loop = 0; loop < Size; loop++)
    {
        if(Array[loop] == Element)
        {
            Result = loop;
            break;
        }
    }
    return Result;  
}

void Print()
{
    short MyArray[100] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};
    short Element = FindInAnArray(MyArray, 10, 20);
    cout << "The element you search for is at index " << Element << endl;
}