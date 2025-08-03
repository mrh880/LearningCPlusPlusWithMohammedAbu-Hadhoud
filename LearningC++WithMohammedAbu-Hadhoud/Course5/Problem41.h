#include <iostream>

using namespace std;

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

void FillArray(int Array[100], int SizeOfArray)
{

    PrintingAline(80);
    for(short loop = 0; loop < SizeOfArray; loop++)
    {
        cout << "Enter element [" << loop + 1 << "] : ";
        Array[loop] = ReadNumber("");
    }
    PrintingAline(80);
}

bool IsArrayPalindrome(int Array[100], int SizeOfArray)
{
    for(int loop = 0; loop < SizeOfArray; loop++)
        if(Array[loop] != Array[SizeOfArray - loop - 1])
        return false;

    return true;
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

    int UserArray[100], SizeOfUserArray = 0;

    PrintingAline(80);
    SizeOfUserArray = ReadPositiveNumber("Enter how many elements you want to fill in your array: ");
    PrintingAline(80);

    FillArray(UserArray, SizeOfUserArray);

    PrintArrayData(UserArray, SizeOfUserArray, "Your array");

    if(!IsArrayPalindrome(UserArray, SizeOfUserArray))
        cout << "Your array is not palindrome :(\n";
    else 
        cout << "Your array is palindrome :)\n";
}