#include <iostream>

using namespace std;

enum enPrimeOrNotPrime {Prime, NotPrime};

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

void AddArrayElement(int Array[100], int& SizeOfArray, int Element)
{
    Array[SizeOfArray] = Element;
    SizeOfArray++;
}

int FindNumberPositionInArray(int Array[100], int SizeOfArrray, int Element)
{
    for(short loop = 0; loop <  SizeOfArrray; loop++)
        if(Array[loop] == Element)
            return loop;

    return -1;
}

bool IsNumberInArray(int Array[100], int SizeOfArray, int Element)
{
    return (FindNumberPositionInArray(Array, SizeOfArray, Element) != -1);
}

void CopyDistinctArray(int OriginalArray[100], int SizeOfOriginalArray, int CopyArray[100], int& SizeOfCopyArray)
{
    for(int loop = 0; loop < SizeOfOriginalArray; loop++)
    {
        if(!IsNumberInArray(CopyArray, SizeOfCopyArray, OriginalArray[loop]))
            AddArrayElement(CopyArray, SizeOfCopyArray, OriginalArray[loop]);
    }   
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

    int OriginalArray[100] = {10, 10, 10, 50, 50, 70, 70, 70, 70, 90}, SizeOfOriginalArray = 10;

    PrintArrayData(OriginalArray, SizeOfOriginalArray, "OriginalArray");    

    int CopyArray[100], SizeOfCopyArray = 0;

    CopyDistinctArray(OriginalArray, SizeOfOriginalArray, CopyArray, SizeOfCopyArray);
    
    PrintArrayData(CopyArray, SizeOfCopyArray, "Copy Array with distinct elements");
}