#include <pthread.h>
#include <iostream>

using namespace std;

namespace ClearingScreenFunction
{
    void clearScreen()
    {
        // ANSI escape code to clear screen and move cursor to the top-left
        cout << "\033[2J\033[H" << flush;
    }
}
