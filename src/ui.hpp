# pragma once
#include "coffee.hpp"

void printHeader();

int showMainMenu();

void clearScreen();

void printCoffeeMachine();

void printCoffeeCard(const Coffee& coffee);

void printEmptyCollection();

void printSuccessMessage();

string ratingToStars(int rating);