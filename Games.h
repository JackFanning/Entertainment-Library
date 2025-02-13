
#ifndef GAMES_H
#define GAMES_H

#pragma once
#include <string>

using namespace std;

class Games
{
public:
    Games();
    void displayDetails();
    ~Games();

    Games(string, string, float, float);

    void setName();
    string getName();
    
    void setGenre();
    string getGenre();

    void sethoursPlayed();
    float gethoursPlayed();

    void setstorageSize();
    float getstorageSize();


    

private:

    string name;
    string genre;
    float hoursPlayed;
    float storageSize;

};

#endif