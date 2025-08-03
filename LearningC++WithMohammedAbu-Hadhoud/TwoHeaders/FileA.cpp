#include "FileA.h"
#include "FileB.h"

#include <iostream>
void PrintB();

using namespace std;

void PrintA()
{
    cout << "a\n";
}

void AGreetingMessage()
{
    cout << "Hi I am a and i say hi to "; PrintB();
}