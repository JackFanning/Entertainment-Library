#ifndef GAMES_H
#define GAMES_H
#include "MediaItem.h"
#include "Publisher.h"

class Games: public MediaItem          //Implemenation of inheritence relationship: games class is inhereting from MediaItem
{
public:
    Games();                            // default parameterless constructor
    Games(string n, string g, float hp, float s); //Overloaded constructor with 4 parameters

    Games(string n, string g, float hp, float s, Publisher *pub);   //Overloaded constructor with 5 parameters

    void display();

    void setHoursPlayed(float hp);                       //data integrity checks (mutators)
    void setstorageSize(float s);                        //data integrity checks (mutators)
    void setGameDetails(string n, string g, float hp, float s);
    void setGameDetails(float hp, float s); // data integrity checks (mutators)

    Games(const Games& other); // Deep copy constructor
    Games& operator=(const Games& other); // Deep copy assignment operator

    ~Games();//destructor

     //Overloaded comparison operators
    friend bool operator<(const Games& g1, const Games& g2);
    friend bool operator>(const Games& g1, const Games& g2);
    friend bool operator==(const Games& g1, const Games& g2);
    friend bool operator!=(const Games& g1, const Games& g2);


    //Overloaded ostream & istream operators
    friend ostream& operator<<(ostream& os, const Games& game);
    friend istream& operator>>(istream& is, Games& game);


private:   //data hiding
    float hoursPlayed;
    float storageSize;

    Publisher* publisher;

};

#endif
