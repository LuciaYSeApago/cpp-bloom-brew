#include <iostream>

#include "ascii.hpp"
#include "colors.hpp"

using namespace std;

void printCoffeeCup()
{
    cout << Color::LILAC;

    cout << R"(

             )))
            (((
         +-----+
         |     |]
         `-----'
       ___________
       `---------'

)";

    cout << Color::RESET;
}

void printCoffeeMachine()
{
    cout << Color::LILAC;

    cout << R"(
               /~~~~~~~~/ |
              / /######/ / |
             / /______/ /  |
            ============ /||
            |__________|/ ||
             |\__,,__/    ||
             | __,,__     ||
             |_\====/%____||    
             | /~~~~\ %  / |
            _|/      \%_/  |
            | |        | | /
            |__\______/__|/
            ~~~~~~~~~~~~~~ 
            )";
    cout << Color::RESET;
}

void printCoffeeShelf()
{
    cout << Color::LILAC;
    cout << R"( 
       .-=-.   .-=-.   .-=-.   .-=-.   .-=-.   .-=-.
      ,|`~'|  ,|`~'|  ,|`~'|  ,|`~'|  ,|`~'|  ,|`~'|
      `|   |  `|   |  `|   |  `|   |  `|   |  `|   |
        `~'     `~'     `~'     `~'     `~'     `~'
     -------------------------------------------------
    │                                                 │
     -------------------------------------------------  
)";
    cout << Color::RESET;
}

void printGoodbye()
{
    cout << Color::LILAC;
    cout << R"(
             ( (
               ) )
            ........
            |      |]
            \      /
             `----'
        
         See you next Cup !
            )";
    cout << Color::RESET;
}
