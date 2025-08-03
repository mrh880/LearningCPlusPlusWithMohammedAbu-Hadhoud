#include <iostream>

using namespace std;

int  ReadShortNumber(const string& Message)
{
    cout << Message;
    
    int  Number = 0;
    cin >> Number;
    return Number;
}

float GetTotalCommission(int TotalSales)
{
    if(TotalSales >= 1000000)
    return TotalSales * 0.01;
    else if(TotalSales >= 500000)
    return TotalSales * 0.02;
    else if(TotalSales >= 100000)
    return TotalSales * 0.03;
    else if(TotalSales >= 50000)
    return TotalSales * 0.05;
    else 
    return TotalSales * 0;
}

void PrintTotalCommission(float TotalCommission)
{
    cout << "Total commission your got is " << TotalCommission << endl;
}

void Print()
{
    int TotalSales = ReadShortNumber("Enter your total sales: ");
    PrintTotalCommission(GetTotalCommission(TotalSales));
}