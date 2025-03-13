//This file contains the implementation code for the mediaItem class data member functions
#include "mediaItem.h"

#include <iostream>
#include <string>

using namespace std;


mediaItem::mediaItem() {
}

mediaItem::mediaItem(string n) {
	setName(n);
}

mediaItem::~mediaItem() {

}
string mediaItem::getName()  {
	return name;
}

void mediaItem::setName(string n) {
	name = n;
}

int mediaItem::getDuration() {
	return duration;
}

void mediaItem::setDuration(int d) {
	duration = d;
}

void mediaItem::display() {
	cout<<"Item '"<<getName() <<"' has duration "<<getDuration()<<" minutes"<<endl;
}

//non member functions (notice they do not have 'mediaItem::' in front of their names) implemented here - used for overloading operators
bool operator==(mediaItem pl1, mediaItem pl2) {
   return (pl1.getName()==pl2.getName() && pl1.getDuration()==pl2.getDuration());
}

bool operator!=(mediaItem pl1, mediaItem pl2) {
    return !(pl1==pl2);
}

bool operator<(mediaItem pl1, mediaItem pl2) {
    return (pl1.getName()<pl2.getName());
	//return (pl1.getDuration()<pl2.getDuration());
}

bool operator>(mediaItem pl1, mediaItem pl2) {
   return (pl1.getName()>pl2.getName());
}

ostream& operator<< (ostream &cout, mediaItem pli) {
	cout<<"Using overloaded ostream operator - Item '"<<pli.getName() <<"' has duration "<<pli.getDuration()<<" minutes"<<endl;
    return cout;
}



