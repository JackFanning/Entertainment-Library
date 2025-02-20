#ifndef GAMES_H
#define GAMES_H
#include "ParentClass.h"

class Games: public ParentClass
{
public:
    Games();
    void setHoursPlayed(float hp);
    void setstorageSize(float s);
    void setGameDetails(float hp, float s);
    void displayDetails();

    ~Games();

    void display();
private:
    float hoursPlayed;
    float storageSize;

};

#endif
