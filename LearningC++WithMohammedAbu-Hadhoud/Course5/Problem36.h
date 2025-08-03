#include <iostream>

using namespace std;

int ReadNumber(const string& Message)
{
    cout << Message;

    int Number = 0;

    cin >> Number;

    return Number;
}

bool ReadBooleanExpiration(const string& Message)
{
    cout << Message;

    bool BooleanExpiration = false;

    cin >> BooleanExpiration;

    return BooleanExpiration;
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
    cout << "You want to get random Keys Like activation keys you see on websites? let's see know !\n";
    PrintingAline(90);
}

void AddArrayElement(int Array[100], int& SizeOfArray, int Element)
{
    Array[SizeOfArray] = Element;
    SizeOfArray++;
}

void ReadDynamicArray(int Array[100], int& SizeOfArray)
{
    bool Answer = 0;

    PrintingAline(50);
    do 
    {
        AddArrayElement(Array, SizeOfArray, ReadNumber("Enter a number to add it to your  array: "));
        Answer = ReadBooleanExpiration("Do you want do add more elements to your array (0 FOR NO), AND (1 FOR YES): ");

        cout << endl;
    } while(Answer);
    PrintingAline(50);
}

void PrintArrayData(int Array[100], int Length, const string& Message)
{
    PrintingAline(Message.length() + 10);
    cout << Message << endl;
    PrintingAline(Message.length() + 10);  
    
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

    int Array[100], SizeOfArray = 0;

    ReadDynamicArray(Array, SizeOfArray);

    PrintingAline(80);
    cout << "Array Length " << SizeOfArray << endl;
    PrintArrayData(Array, SizeOfArray , "Array elements ");
    PrintingAline(80);
}