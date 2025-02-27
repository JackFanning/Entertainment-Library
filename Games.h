#ifndef GAMES_H
#define GAMES_H
#include "MediaItem.h"
#include "Publisher.h"

class Games: public MediaItem          //Implemenation of inheritence relationship: games class is inhereting from MediaItem
{
public:
    Games();
    void setHoursPlayed(float hp);                       //data integrity checks (mutators)
    void setstorageSize(float s);                        //data integrity checks (mutators)
    void setGameDetails(float hp, float s);              //data integrity checks (mutators)
    void displayDetails();

    ~Games();

    void display();
private:   //data hiding
    float hoursPlayed;
    float storageSize;

};

#endif
