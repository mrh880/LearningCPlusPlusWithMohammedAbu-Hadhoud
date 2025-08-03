#include <iostream>

using namespace std;

short ReadShortNumber(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}

bool Read_A_BooleanExpresion(const string& Message)
{
    cout << Message;

    bool BooleanExpresion = false;

    cin >> BooleanExpresion;

    return BooleanExpresion;
}

struct SomeoneInfo
{
    short Age = 0;
    bool HasAdriverLicence = false;
    bool HasRecommendation = false;
};

SomeoneInfo ReadSomeoneInfo(SomeoneInfo Someone)
{
    Someone.Age = ReadShortNumber("Enter your age: ");
    Someone.HasAdriverLicence = Read_A_BooleanExpresion("Enter if you have a licence driving, (ENTER 1 FOR YES, AND 0 FOR NO): ");
    Someone.HasRecommendation = Read_A_BooleanExpresion("Enter if you have a Recommendation, (ENTER 1 FOR YES AND 0 FOR NO): ");
    return Someone;
}

bool isAccepted(SomeoneInfo Someone)
{
    if(Someone.HasRecommendation)
        return true;
    else
        return (Someone.Age > 21 && Someone.HasAdriverLicence);
}

void PrintResult(SomeoneInfo Someone)
{
    if(isAccepted(Someone))
        cout << "Hired\n";
    else 
        cout << "Not Hired\n";
}

void GreetingMessage()
{
    cout << "******************************************************************************\n";
    cout << "WELCOME TO THE HIRING PAGE :)\n";
    cout << "NOW YOU WILL BE ASKED ABOUT A FEW QUESTIONS TO KNOW IF YOU ARE HIRED OR NOT :)\n";
    cout << "******************************************************************************\n";
}

void Print()
{
    SomeoneInfo Someone;
    GreetingMessage();
    PrintResult(ReadSomeoneInfo(Someone));

}