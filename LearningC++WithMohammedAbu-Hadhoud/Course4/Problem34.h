#include <iostream>

using namespace std;

int ReadTotalSalesAmount(const string& Message)
{
    cout << Message;

    int Number = 0;

    cin >> Number;

    return Number;
}

float GetPresentage(int TotalSalesAmount)
{
    if(TotalSalesAmount >= 1000000)
        return  (float) 0.01;

    else if(TotalSalesAmount >= 500000)
        return (float) 0.02;

    else if(TotalSalesAmount >= 100000)
        return (float) 0.03;

    else if(TotalSalesAmount >= 50000)
        return (float) 0.05;

    else 
        return(float)  0;   
}

void PrintTotalCommission(int TotalSales, float Persentage)
{
    cout << "Your got " << TotalSales * Persentage << endl;
}

void GreetingMessage()
{
    cout << "***********************************\n";
    cout << "Did you sale? let's know how much your commission is!\n";
    cout << "***********************************\n";
}

void DrawingALine()
{
    cout << "**********************************\n";
}

void Print()
{
    system("cls");
    system("0A");
    GreetingMessage();
    DrawingALine();
    int TotalAmountOfSales = ReadTotalSalesAmount("Enter how much you did sale: "); // 110,000
    float Persentage = GetPresentage(TotalAmountOfSales); // 110,000 0.03 
    DrawingALine();
    PrintTotalCommission(TotalAmountOfSales, Persentage);
}
