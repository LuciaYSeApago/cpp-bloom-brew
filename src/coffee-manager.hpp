#pragma once

#include <vector>
#include "coffee.hpp"

class CoffeeManager
{
private:
    std::vector<Coffee> coffees;

public:
    void addCoffee(const Coffee& coffee);

    void listCoffees() const;
};