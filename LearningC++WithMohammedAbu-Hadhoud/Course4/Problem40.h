#include <iostream>

using namespace std;

 float ServiceFee = 1.1;
float SalesTax = 1.16;

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

void GreetingMessage()
{
    cout << "***********************************************************************************\n";
    cout << "Have ever ate in a restaurant, Today you will  eat in our restaurant, let's go now!\n";
    cout << "***********************************************************************************\n";
}

float CalculateTotalBillAfterAddingServiceFee(float BillValue)
{
    return BillValue * ServiceFee;
}

float CalculateTotalBillAfterAddingSalesTax(float BillValue)
{
    return BillValue * SalesTax;
}

float CalculateTotalBillAfterAddingServiceFeeAndSalesTax(float BillValue)
{
    BillValue *= ServiceFee;
    BillValue *= SalesTax;
    return BillValue;
}


void Summary(float BillValue)
{
  cout << "***************************************************************************\n";
  cout << "Total Bill value after adding service fee " << CalculateTotalBillAfterAddingServiceFee(BillValue) << endl;
  cout << "Total Bill value after adding sales tax = " << CalculateTotalBillAfterAddingServiceFeeAndSalesTax(BillValue) << endl;
  cout << "Total Bill value after adding service fee and sales tax = " << CalculateTotalBillAfterAddingServiceFeeAndSalesTax(BillValue) << endl;
  cout << "***************************************************************************\n";
}

void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    Summary(ReadPositiveNumber("Enter you much your total bill: "));
}