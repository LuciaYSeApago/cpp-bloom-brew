#include <iostream>
#include <string>
//for the cleaning method
#include <limits>
#include <thread>
#include <chrono>


#include "colors.hpp"
#include "ui.hpp"
#include "ascii.hpp"

using namespace std;

void printHeader()
{
    
    cout
        << Color::PINK
        << "✿━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━✿\n\n"
        << "            ☕ BloomBrew\n\n"
        << "               ݁₊ ⊹🌸⊹ ₊ ݁\n\n"
        << "✿━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━✿\n\n"
        << Color::RESET;

}

void printCoffeeCard (const Coffee& coffee)
{
    
    
    cout 
         << Color::PINK
         << "✿━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━✿\n\n"
         << "        ☕ " << coffee.getName() << "\n\n"
         << "✿━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━✿\n\n"
         << Color::RESET;
         
    cout
         << Color::CREAM
         << "🤎 Name    : " << coffee.getName() << "\n"
         << "🧸 Origin  : " << coffee.getOrigin() << "\n"
         << "⭐ Rating  : " << ratingToStars(coffee.getRating()) << "\n"
         << "📜 Notes   : " << coffee.getNotes() << "\n\n"
         << Color::RESET;

}

int showMainMenu()
{
    int option;

    cout
        << Color::CREAM
        << "1. ☕ Add Coffee\n"
        << "2. 🤎 Show Coffees\n"
        << "3. 🚪 Exit\n\n"
        << Color::PINK
        << "> "
        << Color::RESET;

    cin >> option;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return option;
    
}

void showMainScreen()
{
    clearScreen();

    printCoffeeCup();

    printHeader();
}

void showBrewingScreen()
{

    using namespace std::chrono_literals;
    for (int progress =  0; progress <= 5; progress++)
    {
        clearScreen();
        printCoffeeMachine();
        
        cout
             << Color::PINK
             << "\n☕ Brewing your coffee...\n"
             << Color::RESET;

        cout << Color::CREAM;

        for(int i = 0; i  < progress; i++)
        {
            cout << "■ ";
        }
        for (int i = progress; i < 5; i++)
        {
            cout << "▱ ";
        }

        cout << Color::RESET << "\n";

        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }

    cout << "\n"
         << Color::PINK
         << "\n☕ Coffee added to your collection!\n\n"
         << Color::RESET;

    std::this_thread::sleep_for(700ms);

}

void showGoodbyeScreen()
{
    clearScreen();

    printGoodbye();

}

string ratingToStars(int rating)
{
    string stars;

    for (int i = 0; i < rating; i++)
    {
        stars += "⭐";
    }

    for (int i = rating; i < 5; i++)
    {
        stars += "☆";
    }

    return stars;
}

void clearScreen()
{
    cout << "\033[2J\033[H";
}
