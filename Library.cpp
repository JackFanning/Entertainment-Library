#include "Library.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

Library::Library(string n, int nofmediaItems) : maxNofItems(nofmediaItems) {
	setLibraryName(n);
}

string Library::getLibraryName() {
	return LibraryName;
}

void Library::setLibraryName(string n) {
	LibraryName = n;
}

void Library::addItem(mediaItem e) {
	if (items.size() <= maxNofItems) {
    	items.push_back(e);
    } else {
    	cout<<"Library is full"<<endl;
    }
}

//Lab5: - this is a helper function used by the sortLibrary function
bool orderByDuration(mediaItem item1, mediaItem item2){ //this function determines how mediaItem objects are compared
	return (item1.getDuration() < item2.getDuration());
}

bool orderByName(mediaItem item1, mediaItem item2){ //this function determines how mediaItem objects are compared
	return (item1.getName() < item2.getName());
}

//Lab5: - this function uses the orderByDuration helper function to sort the object in the 'items' vector
void Library::sortLibraryByDuration() {
	cout<<"sorting Library"<<endl;
	sort(items.begin(), items.end(), orderByDuration);
}

void Library::sortLibraryByName() {
	cout<<"sorting Library"<<endl;
	sort(items.begin(), items.end(), orderByName);
}

//Lab5: - this function requires that the < operator is overloaded in the class of the objects stored in the 'items' vector (i.e. in the mediaItem class)
void Library::sortLibraryByDefault() {
	cout<<"sorting Library"<<endl;
	sort(items.begin(), items.end());
}

void Library::displayDetails() {
	cout << "The " <<items.size() <<" mediaItem(s) in the Library are: " <<endl;
	for (int i=0; i<items.size(); i++) {
		//items[i].display();
		cout<<items[i]; //uses the overloaded ostream operator in the class of the objects stored in the 'items' vector (i.e. in the mediaItem class)
	}
  	std::cout << '\n';
}


