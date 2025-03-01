#include "Books.h"
#include "Games.h"
#include "MediaItem.h"
#include "Publisher.h"

Games::~Games()
{

}


Games::Games() : hoursPlayed(0), storageSize(0)        //constructor initialisation list
{

}

Games::Games(string n, string g, float hp, float s)        //Overloaded constructor with 4 parameters
{
    name = n;
    genre = g;
    hoursPlayed = hp;
    storageSize = s;

    if (storageSize < 0){                //Error checking in case the storage size is set to a value that doesn't fit
        cout << "\n Game size should be more than 0GB! Setting default to 1GB.. \n" << endl;
        storageSize = 1;
    }
    else {
        storageSize = s;
    }


    if (hoursPlayed < 0){
    cout << "\n Hours Played must be greater than 0! Setting default to 1 hour.. \n" << endl;            //Error checking in case the hours played is set to a value that doesn't fit
    hoursPlayed = 1;
    }
    else{
    hoursPlayed = hp;
    }


}



void Games::display()
{
    MediaItem::display();                    //Overiding function from the MediaItem class
    cout << " Hours Played: \t" << hoursPlayed << endl;
    cout << " Storage Size: \t" << storageSize << "GB" << endl;
}



void Games::setHoursPlayed(float hp)
{
    if (hp < 0){            //Error checking in case the hours played is set to a value that doesn't fit
        cout << "Hours Played must be greater than 0! Setting default to 1 hour.. \n" << endl;
        hoursPlayed = 1;
    }
    else{
        hoursPlayed = hp;
    }
}


void Games::setstorageSize(float s)
{
    if (s < 0){            //Error checking in case the storage size is set to a value that doesn't fit
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

    if (storageSize < 0){                //Error checking in case the storage size is set to a value that doesn't fit
        cout << "Game size should be more than 0GB! Setting default to 1GB.. \n" << endl;
        storageSize = 1;
    }
    else {
        storageSize = s;
    }


    if (hoursPlayed < 0){
    cout << "Hours Played must be greater than 0! Setting default to 1 hour.. \n" << endl;            //Error checking in case the hours played is set to a value that doesn't fit
    hoursPlayed = 1;
    }
    else{
    hoursPlayed = hp;
    }
}
