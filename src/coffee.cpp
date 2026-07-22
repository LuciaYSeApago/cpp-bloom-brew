#include <iostream>

#include "coffee.hpp"
#include "colors.hpp"

using namespace std;

//default constructor (empty)
Coffee::Coffee()
{
    NAME = "";
    ORIGIN = "";
    RATING = 0;
    NOTES = "";
}

//parameterized constructor

/* This version: Creates the obj + NAME, ORIGIN, NOTES are created empty + we write in them

Coffee::Coffee(const string& NAME,const string& ORIGIN, int RATING, const string& NOTES)
{
    this -> NAME = NAME;
    this -> ORIGIN = ORIGIN;
    this -> RATING = RATING;
    this -> NOTES = NOTES;
} */

//This version: Creates the obj + NAME, ORIGIN, RATING, NOTES are created with the correct value

Coffee::Coffee(const string& NAME,const string& ORIGIN,int RATING,const string& NOTES)
    : NAME(NAME),
      ORIGIN(ORIGIN),
      RATING(RATING),
      NOTES(NOTES)
{}

//------------------------------------------------------------------


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
