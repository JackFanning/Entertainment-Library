#include "Games.h"
#include <iostream>

Games::~Games()
{

}


Games::Games() : hoursPlayed(0), storageSize(0)
{

}

void Games::display()
{
    ParentClass::display();
    cout << " Hours Played: \t" << hoursPlayed << endl;
    cout << " Storage Size: \t" << storageSize << "GB" << endl;
}

void Games::setHoursPlayed(float hp)
{
    if (hp < 0){
        cout << "Hours Played must be greater than 0! Setting default to 1 hour.. \n" << endl;
        hoursPlayed = 1;
    }
    else{
        hoursPlayed = hp;
    }
}


void Games::setstorageSize(float s)
{
    if (s < 0){
        cout << " \n" << endl;
        cout << "Game size should be more than 0GB! Setting default to 1GB.. \n" << endl;
        storageSize = 1;
    } 
    else {
        storageSize = s;
    }
    
}


void Games::setGameDetails(string n, string g, float hp, float s) {
    name = n;
    genre = g;
    hoursPlayed = hp;
    storageSize = s;

    if (storageSize < 0){
        cout << "Game size should be more than 0GB! Setting default to 1GB.. \n" << endl;
        storageSize = 1;
    }
    else {
        storageSize = s;
    }

    if (hoursPlayed < 0){
    cout << "Hours Played must be greater than 0! Setting default to 1 hour.. \n" << endl;
    hoursPlayed = 1;
    }
    else{
    hoursPlayed = hp;
    }
}
