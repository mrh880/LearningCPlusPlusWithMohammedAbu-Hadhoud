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

void FillArrayWithOrderNumbers(int Array[100], int &Size)
{
    for (short loop = 0; loop < Size; loop++)
        Array[loop] = loop + 1;
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

void SwappingTwoNumbers(int &FirstNumber, int &SecondNumber)
{
    int Temp = FirstNumber;
    FirstNumber = SecondNumber;
    SecondNumber = Temp;
}

void ShuffleArray(int Array[100], int Size)
{

    for (short loop = 0; loop < Size; loop++)
    {
        SwappingTwoNumbers(Array[RandomNumber(0, Size)], Array[RandomNumber(0, Size)]);
    }
}

void Print()
{
    srand((unsigned)time(NULL));

    ClearingScreenAndGettingGreenColor();
    GreetingMessage();

    int Array[100], Size = 0;

    Size = ReadPositiveNumber("Enter the Size of your array (1, 100): ");

    FillArrayWithOrderNumbers(Array, Size);

    PrintArrayData(Array, Size, "Array before shuffling");

    ShuffleArray(Array, Size);

    PrintArrayData(Array, Size, "Array After Shuffling");
}