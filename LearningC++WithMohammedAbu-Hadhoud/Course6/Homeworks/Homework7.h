#pragma once

#include <vector>
#include <algorithm>
#include "..\..\Libraries\ReadingInputs.h"
#include "..\..\Libraries\PrintingOutputs.h"

struct stEmployeesInfo
{
    string Firstname = "", LastName = "", PhoneNumber = "";
};

void PrintingMessage()
{
    PrintingText::PrintSequenceOfCharacters('*', 40);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Getting employee info");
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 40);
    PrintingText::PrintLines();
}

void ReadEmployeesInfo(vector<stEmployeesInfo> &EmployeesInfo)
{
    stEmployeesInfo TempEmployeeInfo;
    string Answer = "y";

    while (Answer == "y" || Answer == "yes")
    {

        PrintingMessage();

        PrintingText::PrintTextOnScreen("Enter the employee  first name: ");
        TempEmployeeInfo.Firstname = ReadText::ReadTextOnScreen();

        PrintingText::PrintTextOnScreen("Enter the employee second name: ");
        TempEmployeeInfo.LastName = ReadText::ReadTextOnScreen();

        PrintingText::PrintTextOnScreen("Enter your employee PhoneNumber: ");
        TempEmployeeInfo.PhoneNumber = ReadText::ReadTextOnScreen();

        EmployeesInfo.push_back(TempEmployeeInfo);

        PrintingText::PrintTextOnScreen("Do you want to add one more employee [Y/N]: ");
        Answer = ReadText::ReadTextOnScreen();
        transform(Answer.begin(), Answer.end(), Answer.begin(), ::tolower);
    }

    PrintingText::PrintLines();
}

void PrintEmployeesInfo(vector<stEmployeesInfo> &EmployeesInfo)
{
    PrintingText::PrintSequenceOfCharacters('*', 20);
    PrintingText::PrintLines();
    PrintingText::PrintTextOnScreen("Employees Info: ");
    PrintingText::PrintLines();
    PrintingText::PrintSequenceOfCharacters('*', 20);

    for(stEmployeesInfo EmployeeInfo : EmployeesInfo)
    {
        PrintingText::PrintLines(); 
        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("First Name: ");
        PrintingText::PrintTextOnScreen(EmployeeInfo.Firstname);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Last Name: ");
        PrintingText::PrintTextOnScreen(EmployeeInfo.LastName);
        PrintingText::PrintLines();

        PrintingText::PrintTextOnScreen("Phone Number: ");
        PrintingText::PrintTextOnScreen(EmployeeInfo.PhoneNumber);
        PrintingText::PrintLines();

        PrintingText::PrintSequenceOfCharacters('*', 40);
        PrintingText::PrintLines();
    }
}

void Print()
{
    vector<stEmployeesInfo> EmployeesInfo;
    long long Array[268435456];
    ReadEmployeesInfo(EmployeesInfo);
    PrintEmployeesInfo(EmployeesInfo);
}