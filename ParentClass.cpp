#include "ParentClass.h"

ParentClass::ParentClass() : name("N/A"), genre("N/A")            //constructor initialisation list
{
    //ctor
}

void ParentClass::setDetails(string n, string g)
{
    name = n;
    genre = g;
}

bool ParentClass::setPublisher(Publisher* p)
{
    if (p_cnt < MAX_P){
        publisher[p_cnt] = p;
        p_cnt++;
        return true;
    }
}

void ParentClass::display()            //Parent class display function
{
    cout << "\n Title: \t" << name
    << "\n Genre: \t" << genre << endl;
    //<< "\n Publisher:\t" << Getpublisher() << endl;
}

ParentClass::~ParentClass()
{
    //dtor
}
