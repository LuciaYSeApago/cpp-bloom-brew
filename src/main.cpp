#include <iostream>
#include "coffee.hpp"
#include "ui.hpp"

using namespace std;

int main()
{
    bool playing = true;

    while(playing)
    {
        clearScreen();

        printHeader();

        int selection = showMainMenu();

        //this switch uses {} because of the initialitation of the class coffee 
        // (you cant initialice a class just in one case, but with the {} the compiler 
        // reads them as two different scopes)
        switch(selection)
        {
            case 1:
            {
                Coffee coffee;

                string NAME;
                string ORIGIN;
                int RATING;
                string NOTES;

                cout << "Coffee name: ";
                getline(cin, NAME);

                cout << "Origin: ";
                getline(cin, ORIGIN);

                cout << "Rating: ";
                cin >> RATING;
                cin.ignore();

                cout << "Notes: ";
                getline(cin, NOTES);

                coffee.setName(NAME);
                coffee.setOrigin(ORIGIN);
                coffee.setRating(RATING);
                coffee.setNotes(NOTES);

                cout << "\nCoffee added!\n\n";

                coffee.printInfo();

                cout << "Press ENTER...";
                cin.get();

                break;
            }    
            case 2:
            {
                playing = false;
                break;
            }    
        }
    }

    return 0;
}