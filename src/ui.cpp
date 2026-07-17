#include <iostream>
//for the cleaning method
#include <limits>

#include "ui.hpp"

using namespace std;

void printHeader()
{
    cout
        << "✿━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━✿\n\n"
        << "            ☕ BloomBrew\n\n"
        << "               ݁₊ ⊹🌸⊹ ₊ ݁\n\n"
        << "✿━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━✿\n\n";

}

int showMainMenu()
{
    int option;

    cout << "1. ☕ Add Coffee\n";
    cout << "2. 🚪 Exit\n\n";

    cout << "> ";
    cin >> option;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return option;
    
}
void clearScreen()
{
    cout << "\033[2J\033[H";
}