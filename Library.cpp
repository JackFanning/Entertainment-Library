#include "Library.h"

Library::Library() : name("N/A"), genre("N/A")            //constructor initialisation list
{
    //ctor
}

void Library::setDetails(string n, string g)
{
    name = n;
    genre = g;
}

bool Library::setPublisher(Publisher* p)
{
    if (p_cnt < MAX_P){
        publisher[p_cnt] = p;
        p_cnt++;
        return true;
    }
}

void Library::display()            //Parent class display function
{
    cout << "\n Title: \t" << name
    << "\n Genre: \t" << genre << endl;
    //<< "\n Publisher:\t" << Getpublisher() << endl;
}

Library::~Library()
{
    //dtor
}
