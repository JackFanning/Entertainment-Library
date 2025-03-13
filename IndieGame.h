//file containing interface for IndieGame class
#ifndef _IndieGame_
#define _IndieGame_
#include <string>
#include "Author.h"
using namespace std;
class IndieGame : public Author { //lab2 - Part2: implements the Inheritance association between the Author and IndieGame classes

private: //private data member variables
	bool hasBackingSeries;
	int SeriesFee;

public: //data member functions declared here

	IndieGame(); //default IndieGame constructor
	IndieGame(string); //user defined IndieGame overloaded constructor
	IndieGame(string, bool); //2nd user defined IndieGame overloaded constructor

	bool getHasBackingSeries();
	void setHasBackingSeries(bool);
	int getSeriesFee();
	void setSeriesFee(int);

	int calcWages(); //lab3 - part4 : this function overrides the abstract calcWages function in its parent (Author) class
	void display(); //lab3 - part1: this function overrides the display function in its parent (Author) class

};
#endif /* _IndieGame_ */

