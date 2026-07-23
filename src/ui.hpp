# pragma once
#include <string>
#include "coffee.hpp"

void printHeader();

void printCoffeeCard(const Coffee& coffee);

int showMainMenu();

void showMainScreen();

void showBrewingScreen();

void showGoodbyeScreen();

std::string ratingToStars(int rating);

void clearScreen();
