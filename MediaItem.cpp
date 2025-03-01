#include "MediaItem.h"
#include "Publisher.h"

MediaItem::MediaItem() : name("N/A"), genre("N/A")            //constructor initialisation list
{
    //ctor
}

void MediaItem::setDetails(string n, string g)
{
    name = n;
    genre = g;
}

bool MediaItem::setPublisher(Publisher* val)
{
    if (p_cnt < MAX_P){
        publisher[p_cnt] = val;
        p_cnt++;
        return true;
    }
    return false;
}

void MediaItem::display()            //Parent class display function
{
    for (int i = 0; i < p_cnt; i++) {
        if (publisher[i] != nullptr) {  // Check if the publisher pointer is valid
            publisher[i]->display();
        }
    }
    cout << "\n Title: \t" << name
    << "\n Genre: \t" << genre << endl;
}

MediaItem::~MediaItem()
{

}
