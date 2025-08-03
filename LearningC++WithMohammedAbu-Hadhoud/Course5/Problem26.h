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

int SumOfArray(int Array[100], int Size)
{
    int Sum = 0;

    for(int loop = 0; loop < Size; loop++)
        Sum += Array[loop];

    return Sum;
}

void PrintArrayData(int Array[100], int Length)
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
    srand((unsigned) time(NULL));
    
    ClearingScreenAndGettingGreenColor();
    GreetingMessage();

    int Array[100], Size = 0;

    PrintingAline(44);
    Size = ReadPositiveNumber("Enter how many elements do your want: ");
    PrintingAline(44);

    FillArrayWithRandomNumbers(Array, Size);

    PrintArrayData(Array, Size);

    PrintingAline(30);
    cout << "The sum of all element is " << SumOfArray(Array, Size) << endl;
    PrintingAline(30); 
}