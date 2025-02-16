
#ifndef GAMES_H
#define GAMES_H

#pragma once
#include <string>

using namespace std;

class Games
{
public:
    Games();
    void setName(string n);
    void setGenre(string g);
    void setHoursPlayed(float hp);
    void setstorageSize(float s);
    void setGameDetails(string n, string g, float hp, float s);
    void displayDetails();

    ~Games();

    


private:

    string name;
    string genre;
    float hoursPlayed;
    float storageSize;

};

#endif