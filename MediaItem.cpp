#include "MediaItem.h"

MediaItem::MediaItem() : name("N/A"), genre("N/A")            //constructor initialisation list
{
    //ctor
}

void MediaItem::setDetails(string n, string g)
{
    name = n;
    genre = g;
}

bool MediaItem::setPublisher(Publisher* p)
{
    if (p_cnt < MAX_P){
        publisher[p_cnt] = p;
        p_cnt++;
        return true;
    }
}

void MediaItem::display()            //Parent class display function
{
    cout << "\n Title: \t" << name
    << "\n Genre: \t" << genre << endl;
    //<< "\n Publisher:\t" << Getpublisher() << endl;
}

MediaItem::~MediaItem()
{
    //dtor
}
