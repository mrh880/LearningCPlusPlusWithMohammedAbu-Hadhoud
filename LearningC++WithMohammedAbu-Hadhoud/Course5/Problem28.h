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

void FillArrayWithRandomNumbers(int Array[100] , int& Size)
{
    for(short loop = 0; loop < Size; loop++)
        Array[loop] = RandomNumber(1, 100);

}

void CopyArray(int SourceArray[100], int CopyArray[100], int Size)
{
    for(short loop = 0; loop < Size; loop++)
        CopyArray[loop] = SourceArray[loop];
}

void PrintArrayData(int Array[100], int Length, const string& Message)
{
    PrintingAline(20);
    cout << Message << endl;
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
    srand((unsigned) time(NULL));
    
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();

    int Array[100], Size = 0;

    PrintingAline(44);
    Size = ReadPositiveNumber("Enter how many elements do your want: ");
    PrintingAline(44);

    FillArrayWithRandomNumbers(Array, Size);

    PrintArrayData(Array, Size, "Original Array");

    int Array1[100];
    CopyArray(Array, Array1, Size);
    PrintArrayData(Array1, Size, "Copy Array");
}