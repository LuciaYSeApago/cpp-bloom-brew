#pragma once
#include <string>


//Coffee class (duh)
class Coffee
{
private:
    std::string NAME;
    std::string ORIGIN;
    int RATING;
    std::string NOTES;

//encapsulation (only the same class can change things, we have to use setters & getters)
public:
    Coffee();

    void setName(const std::string& NAME);
    std::string getName() const;

    void setOrigin(const std::string& ORIGIN);
    std::string getOrigin() const;

    void setRating(const int RATING);
    int getRating() const;

    void setNotes(const std::string& NOTES);
    std::string getNotes() const;
};