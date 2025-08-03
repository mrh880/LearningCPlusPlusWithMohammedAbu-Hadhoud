#include <iostream>

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

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    
    return Random;
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
    cout << "You want me to fill your array with random numbers? let's do it now !\n";
    PrintingAline(90);
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

void FillArrayWithRandomNumbers(int Array[100] , int& Size)
{
    for(short loop = 0; loop < Size; loop++)
        Array[loop] = RandomNumber(1, 100);

}

void FillArrayInReverseArray(int OriginalArray[100], int CopyArray[100], int Size)
{
    for(short loop = 0; loop < Size; loop++)
        CopyArray[loop] = OriginalArray[Size - loop - 1];
}

void Print()
{
    srand((unsigned) time(NULL));
    
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();

    int SizeOfArrays = ReadPositiveNumber("Enter the size of your array: ");

    int OriginalArray[100];
    FillArrayWithRandomNumbers(OriginalArray, SizeOfArrays);
    PrintArrayData(OriginalArray, SizeOfArrays, "Original array");

    int CopyArray[100];
    FillArrayInReverseArray(OriginalArray, CopyArray, SizeOfArrays);
    PrintArrayData(CopyArray, SizeOfArrays, "Array in after it is reversed");
}