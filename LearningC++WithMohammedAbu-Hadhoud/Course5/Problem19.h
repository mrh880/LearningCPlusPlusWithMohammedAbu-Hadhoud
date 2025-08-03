#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    
    return Random;
}

void Print()
{
    srand((unsigned) time(NULL));  
    cout << RandomNumber(10, 100) << endl;
}