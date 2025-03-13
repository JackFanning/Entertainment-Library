//file containing interface for Library class
#ifndef _Library_
#define _Library_
#include <string>
#include <vector>

#include "mediaItem.h"
using namespace std;

class Library {
    private: //data member variables declared here
        string LibraryName;
		vector<mediaItem> items; //reference to a vector of mediaItem objects - implements the composition relationship between the Library & mediaItem classes
        const int maxNofItems;

    public: //data member functions declared here
        Library(string, int);
		string getLibraryName();
		void setLibraryName(string n);
		void addItem(mediaItem i);
		void sortLibrary(); //Lab5
		void sortLibraryByDefault(); //Lab5
		void sortLibraryByDuration(); //Lab5
		void sortLibraryByName(); //Lab5
		void displayDetails();

};

#endif /* _Library_ */

