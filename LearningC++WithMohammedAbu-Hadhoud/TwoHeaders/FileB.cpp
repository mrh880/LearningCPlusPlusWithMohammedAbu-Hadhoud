#include "FileB.h"
#include "FileA.h"

#include <iostream>

using namespace  std;
void PrintA();


void PrintB()
{
    cout << "B\n";
}

void BGreetingMessage()
{
    cout << "Hi I am form B and i say hi to "; PrintA();
}