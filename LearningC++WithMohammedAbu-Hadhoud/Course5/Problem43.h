#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    
    return Random;
}

int ReadPositiveNumber(const string& Message)
{
    int Number = 0;

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
    PrintingAline(80);
    cout << "You want to know if your array is palindrome or not? let's know now !\n";
    PrintingAline(80);
}

void FillArrayWithRAndomNumbers(int Array[100], int SizeOfArray)
{
    for(short loop = 0; loop < SizeOfArray; loop++)
        Array[loop] = RandomNumber(1, 100);
}

bool IsNumberEven(int Number)
{
    return Number % 2 != 1;
}

short CountOfEvenNumbersInArray(int Array[100], int SizeOfArray)
{
    short CountEvenNumbers = 0;

    for(int loop = 0; loop < SizeOfArray; loop++)
        if(IsNumberEven(Array[loop]))
             CountEvenNumbers++;

    return CountEvenNumbers;
}

void PrintArrayData(int Array[100], int Length, const string& Message)
{
    PrintingAline(40);
    cout << Message << endl;
    PrintingAline(40);  
    
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
    srand((unsigned) time(NULL));
    
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();

    int Array[100], SizeOfArray = 0;

    PrintingAline(80);
    SizeOfArray = ReadPositiveNumber("How many elements you want to be in your array: ");
    PrintingAline(80);

    FillArrayWithRAndomNumbers(Array, SizeOfArray);

    PrintArrayData(Array, SizeOfArray, "Your array");

    int Count_Of_Even_Numbers_In_Array = CountOfEvenNumbersInArray(Array, SizeOfArray);

    if(Count_Of_Even_Numbers_In_Array < 1)
        cout << "No any even numbers was found :(\n";
    else 
        cout << Count_Of_Even_Numbers_In_Array << " Even numbers was found in your array :)\n";
}