#include <iostream>
#include <string>

using namespace std;

short ReadShortNumber()
{
    short Number = 0;

    cin >> Number;

    return Number;
}
string ReadString()
{
    string String = "";

    cin >> String;

    return String;
}

string ReadStringWithGetLine()
{
    string String = "";

    getline(cin, String);

    return String;
}


struct strPersonInfo
{
    string FirstName = "";
    string LastName = "";
    short Age = 0;
    string PhoneNumber = "";
};

void ReadSomeoneInfo(strPersonInfo &SomeoneInfo)
{
    cout << "********************************************\n";
    cout << "Enter your name first name: ";
    SomeoneInfo.FirstName = ReadString();

    cout << "Enter your last name: ";
    SomeoneInfo.LastName = ReadString();

    cout << "Enter your age: ";
    SomeoneInfo.Age = ReadShortNumber();

    cout << "Enter your phone numer: ";
    SomeoneInfo.PhoneNumber = ReadString();
    cout << "********************************************\n";

    cout << endl;
}

void PrintSomeoneInfo(strPersonInfo SomeoneInfo)
{
    cout << "********************************************\n";
    cout << "First name: " << SomeoneInfo.FirstName << endl;
    cout << "Last name: " << SomeoneInfo.LastName << endl;
    cout << "Age: " << SomeoneInfo.Age << endl;
    cout << "Phome number: " << SomeoneInfo.PhoneNumber << endl;
    cout << "********************************************\n";

    cout << endl;
}

void ReadPeopleInfo(strPersonInfo PeopleInfo[100], short Size)
{
    for(short loop = 0; loop < Size; loop++)
    {
        cout << "*******************************\n";
        cout << "ENTER INFORMATION FOR PERSON " << loop + 1 << endl;
        cout << "*******************************\n";
        ReadSomeoneInfo(PeopleInfo[loop]);
    }
}

void PrintPeopleInfo(strPersonInfo PeopleInfo[2], short Size)
{
    for(short loop = 0; loop < Size; loop++)
    {
        PrintSomeoneInfo(PeopleInfo[loop]);
    }
}

short ReadSizeOfArray(const string& Message)
{
    cout << Message;

    short Number = 0;

    cin >> Number;

    return Number;
}
void Print()
{

    strPersonInfo PeopleInfo[100];
    short Size = ReadSizeOfArray("Enter how many people you have: ");
    ReadPeopleInfo(PeopleInfo, Size);
    cout << "********************************************************\n\n";
    PrintPeopleInfo(PeopleInfo, Size);
}