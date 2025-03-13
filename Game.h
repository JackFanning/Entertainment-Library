//file containing interface for Game class
#ifndef _Game_
#define _Game_
#include <string>
#include "mediaItem.h"
using namespace std;

class Game : public mediaItem { //implements the Inheritance association between the mediaItem and Book classes
private: //data member variables declared here
    string theme;
    static int nofGames;

public: //data member functions declared here
    Game(string name);

    void setTheme(string);
    string getTheme();

    int getNofGames();

    void display();
};
#endif /* _Game_ */
