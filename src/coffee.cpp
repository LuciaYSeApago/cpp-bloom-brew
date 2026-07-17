#include "coffee.hpp"

using namespace std;

Coffee::Coffee()
{
    NAME = "";
    ORIGIN = "";
    RATING = 0;
    NOTES = "";
}

void Coffee::setName(const string& NAME)
{
    //this means that whatever were using is withing THIS object)
    this -> NAME = NAME;
}

string Coffee::getName() const
{
    return NAME;
}

void Coffee::setOrigin(const string& ORIGIN)
{
    this -> ORIGIN = ORIGIN;
}

string Coffee::getOrigin() const
{
    return ORIGIN;
}

void Coffee::setRating(int RATING)
{
    this -> RATING = RATING;
}

int Coffee::getRating()  const
{
    return RATING;
}

void Coffee::setNotes(const string& NOTES)
{
    this -> NOTES = NOTES;
}

string Coffee::getNotes() const
{
    return NOTES;
}