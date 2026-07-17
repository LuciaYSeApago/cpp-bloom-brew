#include "coffee-manager.hpp"

#include <iostream>

using namespace std;

void CoffeeManager::addCoffee(const Coffee& coffee)
{
    coffees.push_back(coffee);
}

void CoffeeManager::listCoffees() const
{
    for (const Coffee& coffee : coffees)
    {
        coffee.printInfo();
        cout << "\n";
    }
}