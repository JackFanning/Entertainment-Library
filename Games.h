
#ifndef GAMES_H
#define GAMES_H
#include "ParentClass.h"

class Games: public ParentClass
{
public:
    Games();
    void setHoursPlayed(float hp);
    void setstorageSize(float s);
    void setGameDetails(string n, string g, float hp, float s);
    void displayDetails();

    ~Games();

    
    void display();

private:

    string name;
    string genre;
    float hoursPlayed;
    float storageSize;

};

#endif
