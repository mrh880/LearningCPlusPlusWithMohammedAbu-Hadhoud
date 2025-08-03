#include "clsClearingScreenFunctions.h"

#include <iostream>
#include <cstdlib>

void clsClearingScreenFunctions::ClearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    std::cout << "\033c" << std::flush; // ANSI: reset terminal (Git Bash compatible)
#endif
}