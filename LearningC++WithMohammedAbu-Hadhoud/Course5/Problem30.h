#include <iostream>

using namespace std;

float ReadPositiveNumber(const string &Message)
{
    float Number = 0;

    do
    {
        cout << Message;

        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;

    return Random;
}

void PrintingAline(short lengthOfLine)
{
    for (short loop = 0; loop < lengthOfLine; loop++)
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

void FillArrayWithRandomNumbers(int Array[100], int &Size)
{
    for (short loop = 0; loop < Size; loop++)
        Array[loop] = RandomNumber(1, 100);
}

void PrintArrayData(int Array[100], int Length, const string &Message)
{
    PrintingAline(Message.length() + 10);
    cout << Message << endl;
    PrintingAline(Message.length() + 10);

    PrintingAline(40);
    cout << "[";
    for (int loop = 0; loop < Length; loop++)
    {
        cout << Array[loop] << " ";
    }
    cout << "]\n";
    PrintingAline(40);
}

void SumOfTwoArrays(int FirstArray[100], int SecondArray[100], int ThirdArray[100], int SizeOfAllArrays)
{

    for (short loop = 0; loop < SizeOfAllArrays; loop++)
        ThirdArray[loop] = FirstArray[loop] + SecondArray[loop];
}

void Print()
{
    srand((unsigned)time(NULL));

    ClearingScreenAndGettingGreenColor();
    GreetingMessage();

    PrintingAline(40);
    int SizeOfAllArrays = ReadPositiveNumber("Enter the size of arrays: ");
    PrintingAline(40);

    int FirstArray[100], SizeOfFirstArray = SizeOfAllArrays;
    FillArrayWithRandomNumbers(FirstArray, SizeOfFirstArray);
    PrintArrayData(FirstArray, SizeOfFirstArray, "First array");

    int SecondArray[100], SizeOfSecondArray = SizeOfAllArrays;
    FillArrayWithRandomNumbers(SecondArray, SizeOfSecondArray);
    PrintArrayData(SecondArray, SizeOfSecondArray, "Second array");

    int ThirdArray[100], SizeofThirdArray = SizeOfAllArrays;
    SumOfTwoArrays(FirstArray, SecondArray, ThirdArray, SizeOfAllArrays);
    PrintArrayData(ThirdArray, SizeofThirdArray, "Third array");
}