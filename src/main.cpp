#include <iostream>
#include "coffee.hpp"

using namespace std;

int main()
{
    Coffee coffee;

    coffee.setName("Vanilla Latte");

    cout << coffee.getName() << '\n';

    return 0;
}