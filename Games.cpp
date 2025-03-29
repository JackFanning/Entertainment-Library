#include "Books.h"
#include "Games.h"
#include "MediaItem.h"
#include "Publisher.h"

// Destructor
Games::~Games() {
    if (publisher != nullptr) {
        delete publisher;  // Clean up dynamically allocated memory for Publisher
    }
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
}

Games::Games(string n, string g, float hp, float s, Publisher* pub)        //Overloaded constructor with 4 parameters
{
    name = n;
    genre = g;
    hoursPlayed = hp;
    storageSize = s;
    publisher = pub;
}


// Deep copy constructor
Games::Games(const Games& other)
    : hoursPlayed(other.hoursPlayed), storageSize(other.storageSize), publisher(nullptr) {
    name = other.name;
    genre = other.genre;

    // Deep copy of Publisher pointer
    if (other.publisher != nullptr) {
        publisher = new Publisher(*other.publisher); // Create a new Publisher object and copy its content
    } else {
        publisher = nullptr;
    }
}


// Deep copy assignment operator
Games& Games::operator=(const Games& other) {
    if (this == &other) {
        return *this;  // Skip self-assignment
    }

    // Shallow copy for simple types
    name = other.name;
    genre = other.genre;
    hoursPlayed = other.hoursPlayed;
    storageSize = other.storageSize;

    // Deep copy of the Publisher pointer
    if (other.publisher != nullptr) {
        // Deallocate any existing memory
        if (publisher != nullptr) {
            delete publisher;
        }
        publisher = new Publisher(*other.publisher); // Create a new Publisher object and copy its content
    } else {
        publisher = nullptr;
    }

    return *this;
}


void Games::display()
{
    MediaItem::display();                    //Overiding function from the MediaItem class
    cout << " Hours Played: \t" << hoursPlayed << endl;
    cout << " Storage Size: \t" << storageSize << "GB" << endl;
    if (publisher != nullptr) {
        cout << "Publisher: " << publisher->GetnamePublisher() << endl;
    } else {
        cout << "No Publisher assigned." << endl;
    }
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
