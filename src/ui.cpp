#include <iostream>
//for the cleaning method
#include <limits>

#include "colors.hpp"
#include "ui.hpp"

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
void clearScreen()
{
    cout << "\033[2J\033[H";
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

void printCoffeeCard (const Coffe&)
{
    
    
    cout 
         << Color::PINK
         << "✿━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━✿\n\n"
         << "            °☆𝙲𝚘𝚏𝚏𝚎★ ☕️✨️\n"
         << "✿━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━✿\n\n"
         << Color::RESET;
         
    cout
         << Color::CREAM
         << "🤎 Name : " << coffee.getName() << "\n"
         << "🧸 Origin : " << coffee.getOrigin() << "\n"
         << "⭐ Rating : " << ratingToStars(coffee.getRating()) << "\n"
         << "📜 Notes : " << coffee.getNotes() << "\n\n"
         << Color::RESET;

}