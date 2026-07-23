#include <iostream>
#include <string>
#include <limits>
#include "coffee.hpp"
#include "ui.hpp"
#include "coffee-manager.hpp"

using namespace std;

int main()
{
    bool playing = true;

    CoffeeManager manager;

    manager.loadCoffee();

    while(playing)
    {
        clearScreen();

        showMainScreen();

        int selection = showMainMenu();

        //this switch uses {} because of the initialitation of the class coffee 
        // (you cant initialice a class just in one case, but with the {} the compiler 
        // reads them as two different scopes)
        switch(selection)
        {
            case 1:
            {
                manager.makeCoffee();

                cout << "Press ENTER...";
                cin.get();

                break;
            }    
            case 2:
            {
                manager.listCoffees();
                manager.viewCoffee();
                
                break;
            }
            case 3:
            {
                showGoodbyeScreen();
                playing = false;
                break;
            }        
        }
    }

    return 0;
}