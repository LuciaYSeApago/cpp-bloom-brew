#include "coffee-manager.hpp"
#include "colors.hpp"

#include <iostream>
#include <string>
//for reading from a string
#include <sstream>
#include <limits>

using namespace std;

void CoffeeManager::addCoffee(const Coffee& coffee)
{
    //adds at the end 
    coffees.push_back(coffee);
}

void CoffeeManager::listCoffees()
{

    if (coffees.empty())
    {
        cout
             << Color::MINT
             << "🥨 Your coffee shelf is empty.\n"
             << "Time to brew your first coffee!\n"
             << Color::RESET;
        return;
    }

    cout 
         << Color::LILAC
         << "🍪 Your Coffee Collection\n\n"
         << "✿━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━✿\n\n"
         << Color::RESET;

    //for (int i = 0; i < coffees.size(); i++) ("go through the coffee vector")    
    //for (const Coffee& coffee : coffees)
    for (size_t i = 0; i < coffees.size(); i++)
    {
        cout 
            << Color::CREAM
            << i + 1 << ". ☕ "
            << coffees[i].getName() 
            << "\n"
            << Color::RESET;
    }     

    
}

void CoffeeManager::makeCoffee()
{
    string coffeeName;
    string coffeeOrigin;
    int coffeeRating;
    string coffeeNotes;

    cout 
         << Color::PINK 
         << "Coffee name: " 
         << Color::RESET;
    getline(cin, coffeeName);

    cout 
         << Color::PINK 
         << "Origin: " 
         << Color::RESET;
    getline(cin, coffeeOrigin);

    cout 
         << Color::PINK 
         << "Rating: " 
         << Color::RESET;
    cin >> coffeeRating;
    cin.ignore();

    cout 
         << Color::PINK 
         << "Notes: " 
         << Color::RESET;
    getline(cin, coffeeNotes);

    Coffee coffee(coffeeName, coffeeOrigin, coffeeRating, coffeeNotes);

    this -> addCoffee(coffee);
    this -> saveCoffees();

    cout
         << "\n"
         << Color::PINK
         << "\n🥐 Coffee added to your collection!\n\n"
         << Color::RESET;

    printCoffeeCard(coffee);
}

void CoffeeManager::viewCoffee()
{
    int optionCoffee;

    //this -> listCoffees();

    if (coffees.empty())
    {
        cout << "🥨 Your coffee shelf is empty.\n\n";
        return;
    }

    cout <<"\n Do you want to see more info? [y/n]\n";
    

    char seeMore;
    cin >> seeMore;

    if (seeMore == 'y')
    {
        cout << "\nSelect the coffee: \n"
        << " > \n\n";
        cin >> optionCoffee;

        if (optionCoffee < 1 || optionCoffee > coffees.size())
        {
            cout << "Invalid option. Please try again.\n";
            return;
        }

        printCoffeeCard(coffees[optionCoffee - 1]);
    }

}

void CoffeeManager::saveCoffees() const
{
    cout << "☕ Saving your coffee collection...\n";
    //output file. Tries to open, if not possible, creates the file
    std::ofstream file("coffees.txt");

    if (!file)
    {
        std::cout << "Couldn't open file.\n";
        return;
    }

    for (const Coffee& coffee : coffees)
    {
        //; separates values for easy reading
        file << coffee.getName() << ";"
         << coffee.getOrigin() << ";"
         << coffee.getRating() << ";"
         << coffee.getNotes() << "\n";
    }
}

void CoffeeManager::loadCoffee()
{
    std::ifstream file("coffees.txt");
    
    if (!file)
    {
        return;
    }

    string line;

    //each time a new coffee
    while (std::getline(file, line))
    {
        //fill line with data
        std::stringstream ss(line);

        string name;
        string origin;
        string ratingString;
        string notes;

        //this getline uses ; as a limit 
        getline(ss, name, ';');
        getline(ss, origin, ';');
        getline(ss, ratingString, ';');
        getline(ss, notes);

        //the constructor uses int for rating, we have to change it 
        int rating = stoi(ratingString);

        Coffee coffee(name, origin, rating, notes);
        addCoffee(coffee);
    }
}