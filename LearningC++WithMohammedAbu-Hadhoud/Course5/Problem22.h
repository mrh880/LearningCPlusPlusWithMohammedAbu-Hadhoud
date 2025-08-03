#include <iostream>
#include <cstdlib>

using namespace std;

float ReadPositiveNumber(const string& Message)
{
    float Number = 0;

    do 
    {
        cout << Message;
        
        cin >> Number;
    } while(Number <= 0);

    return Number;
}
void PrintingAline(short lengthOfLine)
{
    for(short loop = 0; loop < lengthOfLine; loop++)
    cout << "*";
    cout << "\n";
}

void ClearingScreenAndGettingGreenColor()
{
    system("cls");
    system("color 0A");
}

void GreetingMessage()
{
    PrintingAline(90);
    cout << "You want to Know how many times a number appeared in your array? let's know now !\n";
    PrintingAline(90);
}

void ReadArrayData(int Array[100] , int& Size)
{
    cout << "GREETING ARRAY INFO !\n";
    PrintingAline(40);
    for(short loop = 0; loop < Size; loop++)
    {
        cout << "Enter element [" << loop + 1 << "] : ";
        cin >> Array[loop];
    }
    PrintingAline(40);
}

short TimeNumberAppearsInArray(int Array[100], int Size, int Element)
{
    int Counter = 0;
    for(short loop = 0; loop < Size; loop++)
    {
        if(Array[loop] == Element)
            Counter++; 
    }
    return Counter;
}

void PrintArray(int Array[100], int Length)
{
    PrintingAline(20);
    cout << "Your Array\n";
    PrintingAline(20);  
    
    PrintingAline(40);
    cout << "[";
    for(int loop = 0; loop < Length; loop++)
    {
        cout << Array[loop] << " ";
    }
    cout << "]\n";
    PrintingAline(40);
}
void Print()
{
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();

    PrintingAline(40);
    int Array[100], Size = ReadPositiveNumber("Enter how many Elements you want: ");
    PrintingAline(40);

    ReadArrayData(Array, Size);

    PrintArray(Array, Size);

    PrintingAline(70);
    int Element = ReadPositiveNumber("Enter the element that you want to see how many times has appread: ");
    PrintingAline(70);

    PrintingAline(30);
    cout << Element << " Appread " << TimeNumberAppearsInArray(Array, Size, Element) << " Time(s)\n";
    PrintingAline(30);
}