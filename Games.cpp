#include "Books.h"
#include "Games.h"
#include "MediaItem.h"
#include "Publisher.h"

// Destructor
Games::~Games() {
    if (publisher != nullptr) {
        delete publisher;  // Release memory allocated for the Publisher object
        publisher = nullptr; // Set the pointer to null to avoid double deletion
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
    cout << "Hours Played: \t" << hoursPlayed << endl;
    cout << "Storage Size: \t" << storageSize << "GB" << endl;
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


//Overloaded comparison operators
bool operator<(const Games& g1, const Games& g2) {
    return g1.storageSize < g2.storageSize;
}

bool operator>(const Games& g1, const Games& g2) {
    return g1.storageSize > g2.storageSize;
}

bool operator==(const Games& g1, const Games& g2){
   
return (g1.name == g2.name &&
        g1.genre == g2.genre &&
        g1.hoursPlayed == g2.hoursPlayed &&
        g1.storageSize == g2.storageSize);
}
    

bool operator!=(const Games& g1, const Games& g2){
    return !(g1 == g2);
}


//overloaded ostream operator
ostream& operator<<(ostream& os, const Games& game) {
    os << "Game Name: " << game.name << "\n"
       << "Genre: " << game.genre << "\n"
       << "Hours Played: " << game.hoursPlayed << "\n"
       << "Storage Size: " << game.storageSize << " GB\n";
    if (game.publisher != nullptr) {
        os << "Publisher: " << game.publisher->GetnamePublisher() << "\n";
    } else {
        os << "No Publisher assigned.\n";
    }
    return os;
}

//istream overloaded operator
istream& operator>>(istream& is, Games& game) {
    
    cout << "Enter game name: ";
    getline(is, game.name);  // Allows multi-word input

    cout << "Enter genre: ";
    getline(is, game.genre); 

    cout << "Enter hours played: ";
    is >> game.hoursPlayed;

    cout << "Enter storage size (GB): ";
    is >> game.storageSize;

    game.publisher = new Publisher();
    is >> *game.publisher;  // Calls the Publisher's overloaded istream operator

    return is;
}

