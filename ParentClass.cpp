#include "ParentClass.h"

ParentClass::ParentClass() : name("N/A"), genre("N/A")
{
    //ctor
}

void ParentClass::setDetails(string n, string g)
{
    name = n;
    genre = g;
}

void ParentClass::setPublisher(Publisher p)
{
    publisher = p;
    cout << "\npublisher set\n";
}

Publisher ParentClass::getPublisher()
{
    return publisher;
}


void ParentClass::display()
{
    cout << "\n Title: \t" << name
    << "\n Genre: \t" << genre << endl;
    //<< "\n Publisher:\t" << Getpublisher() << endl;
}

ParentClass::~ParentClass()
{
    //dtor
}
