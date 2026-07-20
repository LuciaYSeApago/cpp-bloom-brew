#include "coffee-manager.hpp"

#include <iostream>

using namespace std;

void CoffeeManager::addCoffee(const Coffee& coffee)
{
    //adds at the end 
    coffees.push_back(coffee);
}

void CoffeeManager::listCoffees() const
{

    if (coffees.empty())
    {
        cout << "No coffees saved yet.\n";
        return;
    }

    cout << "🍪 Your Coffees\n\n";

    //for (int i = 0; i < coffees.size(); i++) ("go through the coffee vector")    
    //for (const Coffee& coffee : coffees)
    for (size_t i = 0; i < coffees.size(); i++)
    {
        cout << i + 1 << ". " << coffees[i].getName() << "\n";
    }     
}

void CoffeeManager::makeCoffee()
{
    string coffeeName;
    string coffeeOrigin;
    int coffeeRating;
    string coffeeNotes;

    cout << "Coffee name: ";
    getline(cin, coffeeName);

    cout << "Origin: ";
    getline(cin, coffeeOrigin);

    cout << "Rating: ";
    cin >> coffeeRating;
    cin.ignore();

    cout << "Notes: ";
    getline(cin, coffeeNotes);

    Coffee coffee(coffeeName, coffeeOrigin, coffeeRating, coffeeNotes);

    this -> addCoffee(coffee);
    cout << "\nCoffee added!\n\n";

    coffee.printInfo();
}

void CoffeeManager::viewCoffee()
{

    int option;

    this -> listCoffees();

    cout << "\nChoose a coffee: \n";
    cout << " > \n\n";
    cin >> option;

    if (option < 1 || option > coffees.size())
    {
        cout << "Invalid option.\n";
        return;
    }

    coffees[option - 1].printInfo();

}