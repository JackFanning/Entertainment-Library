#ifndef GAMES_H
#define GAMES_H
#include "MediaItem.h"
#include "Publisher.h"

class Games: public MediaItem          //Implemenation of inheritence relationship: games class is inhereting from MediaItem
{
public:
    Games();                            // default parameterless constructor

    void display();

    void setHoursPlayed(float hp);                       //data integrity checks (mutators)
    void setstorageSize(float s);                        //data integrity checks (mutators)
    void setGameDetails(string n, string g, float hp, float s);
    void setGameDetails(float hp, float s); // data integrity checks (mutators)

    ~Games();

private:   //data hiding
    float hoursPlayed;
    float storageSize;

};

#endif
