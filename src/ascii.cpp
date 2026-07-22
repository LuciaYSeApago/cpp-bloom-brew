#include <iostream>

#include "ascii.hpp"
#include "colors.hpp"

using namespace std;

void printCoffeeCup()
{
    cout
         << Color::LILAC

         //with the R"()" serves as lots of <<"\n"
         R"(    )))
                (((
              +-----+
              |     |]
              `-----'
            ___________
            `---------'  )"

         << Color::RESET;
}

void printCoffeeMachine()
{
    cout
         << Color::LILAC

         R"(
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
            )"
         << Color::RESET;
}

void printCoffeeShelf()
{
    cout 
         << Color::LILAC
         R"( 
               .-=-.   .-=-.   .-=-.   .-=-.   .-=-.   .-=-.
              ,|`~'|  ,|`~'|  ,|`~'|  ,|`~'|  ,|`~'|  ,|`~'|
              `|   |  `|   |  `|   |  `|   |  `|   |  `|   |
                `~'     `~'     `~'     `~'     `~'     `~'
             -------------------------------------------------
            │                                                 │
             -------------------------------------------------  
             )"
}

void printGoodbye(
    {
        R"(
            ( (
              ) )
            ........
            |      |]
            \      /
             `----'
             
        See you next cup! ☕🌸
        )"
    }
)