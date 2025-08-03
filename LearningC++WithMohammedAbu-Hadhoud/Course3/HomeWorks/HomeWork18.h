#include <iostream>
#include <string>

using namespace std;

short ReadShortNumber()
{
    short Number = 0;

    cin >> Number;

    return Number;
}

// enum enGender {Male, Female};
// enum enMatrealstarts {Single, Married};
struct PersonInfo
{
        string Name = "";
        short Age = 0;
        string City = "";
        string Country = "";
        float MonthlySalary = 0;
        float YearlySalary = 0;
        // enGender Gender;
        // enMatrealstarts isMarried;
        char Gender = '?';
        bool isMarried = false;
};

void ReadPersonInfo(PersonInfo &SomeoneInfo) // personInfo MyInfo / MyInfo
{
    system("color 2");
    cout << "Enter your name: ";
    getline(cin, SomeoneInfo.Name);

    cout << "Enter your age: ";
    // cin >> SomeoneInfo.Age;
    SomeoneInfo.Age = ReadShortNumber();

    cout << "Enter your city: ";
    cin >> SomeoneInfo.City;

    cout << "Enter your country: ";
    cin >> SomeoneInfo.Country;

    cout << "Enter your monthly salary: ";
    cin >> SomeoneInfo.MonthlySalary;

    SomeoneInfo.YearlySalary = SomeoneInfo.MonthlySalary * 12;

    // cout << "Enter your Gender, (ENTER 0 FOR M), (AND 1 FOR F): ";
    // cin >> SomeoneInfo.Gender;

    // cout << "Enter if your are your married or not, (ENTER 0 FOR NO), (AND 1 FOR YES): ";
    // cin >> SomeoneInfo.isMarried;

    cout << "Enter your Gender, (M FOR MALE), (AND F FOR FEMALE): ";
    cin >> SomeoneInfo.Gender;

    cout << "Enter if your are your married or not, (ENTER 0 FOR NO), (AND 1 FOR YES): ";
    cin >> SomeoneInfo.isMarried;
}

void printPersonInfo(PersonInfo Someone)
{
    cout << "***********************************************\n";
    cout << "Name: " << Someone.Name << endl;

    cout << "Age: " << Someone.Age << endl;

    cout << "City: " << Someone.City << endl;

    cout << "Country: " << Someone.Country << endl;

    cout << "Monthly salary: " << Someone.MonthlySalary << endl;

    cout << "Yearly salary: " << Someone.YearlySalary << endl;

    cout << "Gender: " << Someone.Gender << endl;

    cout << "Married: " << Someone.isMarried << endl;

    cout << "***********************************************\n";
}


string GetStringAfterAddingSymbol(short TheLengthOfTheInput, short TheLengthOMainWord, char TheSymbolToADd)
{
    string FinalResult = "";
    short TheFinalLength = TheLengthOMainWord - TheLengthOfTheInput;

    for(short loop = 0; loop < TheFinalLength; loop++)
    {
        FinalResult += TheSymbolToADd;
    }

    return FinalResult;
}

string solution(int n) 
{
    string nToString = to_string(n);
    
    string Result = "Value is " + GetStringAfterAddingSymbol(5, nToString.length() - 1, '0');

    return Result;

}

void Print()
{
    PersonInfo MyInfo;

    ReadPersonInfo(MyInfo);
    printPersonInfo(MyInfo);
    cout << solution(0) << endl;
}
