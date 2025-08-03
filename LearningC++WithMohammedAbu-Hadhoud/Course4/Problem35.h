#include <iostream>

using namespace std;

int ReadPositiveNumber(const string& Message)
{
    int Number = 0;

    do 
    {
        cout << Message;

        cin >> Number;
    } while(Number < 1);

    return Number;
}

struct stPiggyBankCnotenet
{
    int Pennies, Nickels, Dimes, Quarters, Dollars; 
};

stPiggyBankCnotenet ReadPiggyBankContent()
{
    stPiggyBankCnotenet PiggyBankCnotenet;
    PiggyBankCnotenet.Pennies = ReadPositiveNumber("Enter how much Pennies you have: ");
    PiggyBankCnotenet.Nickels  =ReadPositiveNumber("Enter how much nickels you have :");
    PiggyBankCnotenet.Dimes = ReadPositiveNumber("Enter how much dimes you have: ");
    PiggyBankCnotenet.Quarters = ReadPositiveNumber("Enter how much quarters you have: ");
    PiggyBankCnotenet.Dollars = ReadPositiveNumber("Enter how much dollars you have: ");

    return PiggyBankCnotenet;
}

int CalculateTotalPennies(stPiggyBankCnotenet tPiggyBankCnotenet)
{
    int TotalPennies = 0;
    TotalPennies = (tPiggyBankCnotenet.Pennies * 1) + (tPiggyBankCnotenet.Nickels * 5) +
                   (tPiggyBankCnotenet.Dimes * 10) + (tPiggyBankCnotenet.Quarters * 25) 
                   + (tPiggyBankCnotenet.Dimes * 100);
    
    return TotalPennies;
}

void GreetingMessage()
{
    cout << "********************************************************************\n";
    cout << "Your want to know how much you have in Penny and dollar?, lent's now!\n";
    cout << "*********************************************************************\n";
}

void DrawingALine()
{
    cout << "********************************\n";
}




void Print()
{
    system("cls");
    system("color 0A");
    GreetingMessage();
    DrawingALine();
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    DrawingALine();
    cout << "Total Pennies = " << TotalPennies << endl;
    cout << "Total Dollars  = " << (float) TotalPennies / 100; 
}


