#pragma once

#include <vector>
#include "coffee.hpp"

class CoffeeManager
{
private:

    //vector with all the coffees
    std::vector<Coffee> coffees;

public:
    void addCoffee(const Coffee& coffee);

    void listCoffees() const;

    void makeCoffee();

    void viewCoffee();

};