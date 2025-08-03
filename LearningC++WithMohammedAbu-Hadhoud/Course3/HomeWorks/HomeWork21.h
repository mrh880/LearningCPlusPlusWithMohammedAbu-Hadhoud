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

void ReadPeopleInfo(strPersonInfo PeopleInfo[2])
{
    ReadSomeoneInfo(PeopleInfo[0]);
    ReadSomeoneInfo(PeopleInfo[1]);
    // for(short loop = 0; loop < 2; loop++)
    // ReadSomeoneInfo(PeopleInfo[loop]);
}

void PrintPeopleInfo(strPersonInfo PeopleInfo[2])
{
    PrintSomeoneInfo(PeopleInfo[0]);
    PrintSomeoneInfo(PeopleInfo[1]);
    // for(short loop = 0; loop < 2; loop++)
    // PrintSomeoneInfo(PeopleInfo[loop]);
}

void Print()
{
    strPersonInfo PeopleInfo[2];
    ReadPeopleInfo(PeopleInfo);
    PrintPeopleInfo(PeopleInfo);
}