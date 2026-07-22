#pragma once

#include <vector>
//library that works with docs
#include <fstream>
#include "coffee.hpp"

class CoffeeManager
{
private:

    //vector with all the coffees
    std::vector<Coffee> coffees;

public:
    void addCoffee(const Coffee& coffee);

    void listCoffees();

    void makeCoffee();

    void viewCoffee();

    //const. It doesnt modify the objects from the class "coffee-manager".
    //It reads the vector coffees and copies it to the .txt
    void saveCoffees() const;
    //no const. It modifies the vector coffees (eg:with pushback or clear)
    void loadCoffee();

};