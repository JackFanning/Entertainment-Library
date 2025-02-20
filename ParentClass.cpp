#include "ParentClass.h"

ParentClass::ParentClass() : name("N/A"), genre("N/A"), publisher("N/A")
{
    //ctor
}

void ParentClass::setDetails(string n, string g, string p)
{
    name = n;
    genre = g;
    publisher = p;
}

void ParentClass::display()
{
    cout << "\n Title: \t" << Getname()
    << "\n Genre: \t" << Getgenre()
    << "\n Publisher:\t" << Getpublisher() << endl;
}

ParentClass::~ParentClass()
{
    //dtor
}
