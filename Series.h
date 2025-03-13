#ifndef Series_H_
#define Series_H_
#include "Author.h"

class Series : public Author { //lab2 - Part2: implements the Inheritance association between the Author and Series classes
	private: //private data member variables
		int nofMembers;
	public:
		Series();
		int getNofSeriesMembers();

		void setNofSeriesMembers(int nofM);
		int calcWages(); //lab3 - part4 : this function overrides the abstract calcWages function in its parent (Author) class
		void display(); //lab3 - part1: this function overrides the display function in its parent (Author) class
};

#endif /* Series_H_ */
