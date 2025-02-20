#include "Games.h"

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


void Games::setGameDetails(float hp, float s) {
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


void Games::displayDetails()
{
    cout << "Name: " << name << endl;
    cout << "Genre: " << genre << endl;
    cout << "Hours Played: " << hoursPlayed << endl;
    cout << "Storage Size: " << storageSize << "GB" << endl;
    cout << " \n" << endl;
}
