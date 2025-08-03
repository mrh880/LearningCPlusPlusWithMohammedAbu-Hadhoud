#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(const string& Message)
{
    int Number = 0;

    do 
    {
        cout <<  Message;

        cin >> Number;
    } while(Number <= 0);

    return Number;
}

int ReadNumber(const string& Message)
{
    cout << Message;

    int Number = 0;

    cin >> Number;

    return Number;
}

void PrintingAline(short lengthOfLine)
{
    for(short loop = 0; loop < lengthOfLine; loop++)
    cout << "*";
    cout << "\n";
}

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    
    return Random;
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

void  FillArrayWithRandomNumber(int Array[100], int SizeOfArray)
{
    for(short loop = 0; loop < SizeOfArray; loop++)
        Array[loop] = RandomNumber(-100, 100);
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

int IsElementInArray(int Array[100], int SizeOfArrray, int Element)
{
    for(short loop = 0; loop <  SizeOfArrray; loop++)
        if(Array[loop] == Element)
            return loop;

    return -1;
}

void Print()
{
    ClearingScreenAndGettingGreenColor();

    int Array[100], SizeOfArray = 0;

    PrintingAline(40);
    SizeOfArray = ReadPositiveNumber("Enter the size of your array: ");
    PrintingAline(40);

    FillArrayWithRandomNumber(Array, SizeOfArray);
    PrintArrayData(Array, SizeOfArray, "Your array");

    PrintingAline(40);
    int Element = ReadNumber("Enter an element that you want to search for: ");
    PrintingAline(40);

    int Result = IsElementInArray(Array, SizeOfArray, Element);
    cout << "Number you are looking for is: " << Element << endl;

    if(Result != -1)
    {
        PrintingAline(40);
        cout << "The number found at position: " << Result << endl;
        cout << "The number found its order: " << Result + 1;
        PrintingAline(40);
    }
    else 
    {
        PrintingAline(40);
        cout << "The number is not found :-(\n"; 
        PrintingAline(40);
    }
}