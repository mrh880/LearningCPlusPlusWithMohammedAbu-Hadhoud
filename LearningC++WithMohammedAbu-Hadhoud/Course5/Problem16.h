#include <iostream>

using namespace std;


void PrintLettersFormAAAToZZZ()
{
    for(short FirstLoop = 65; FirstLoop <= 90; FirstLoop++)
    {
        for(short SecondLoop = 65; SecondLoop <= 90; SecondLoop++)
        {
            for(short ThirdLoop = 65; ThirdLoop <= 90; ThirdLoop++)
                cout << char(FirstLoop) << char(SecondLoop) << char(ThirdLoop) << endl;

            cout << endl;
        }
    }
}
void Print()
{
    system("cls");
    system("color 0A");
    PrintLettersFormAAAToZZZ();
}