//file containing interface for mediaItem class
#ifndef _mediaItem_
#define _mediaItem_

#include <string>
using namespace std;

class mediaItem {
private: //data member variables declared here
    string name;
    int duration;

public: //data member functions declared here
    mediaItem();
    mediaItem(string name);
    virtual ~mediaItem();

    void setName(string);
    string getName();
    void setDuration(int);
    int getDuration();
    virtual void display();
};

//Lab5 - overloaded equality and inequality operators implemented as normal functions
bool operator==(mediaItem, mediaItem);
bool operator!= (mediaItem, mediaItem);
bool operator<(mediaItem, mediaItem);
bool operator>(mediaItem, mediaItem);

//Lab5 - overloaded ostream operator implemented as normal functions
ostream& operator<< (ostream &cout, mediaItem pli);

#endif /* _mediaItem_ */




