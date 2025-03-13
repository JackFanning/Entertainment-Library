//file containing interface for Book class
#ifndef _Book_
#define _Book_
#include <string>
#include "mediaItem.h"
#include "Author.h"
using namespace std;

class Book : public mediaItem { //implements the Inheritance association between the mediaItem and Book classes
private: //data member variables declared here
    string genre;
    Author Author; //lab4 - Part1: implements a 1:1 aggregation relationship Aggregation relationship between the Book and Author classes

    static int nofBooks; //lab4 - Part3

public: //data member functions declared here
    Book(string name);
    Book();
    void setGenre(string);
    string getGenre();

    int static getNofBooks();


    void display();
/*
    Author getAuthor() {
		return Author;
	}

	void setAuthor(Author auth) {
		Author = auth;
	}
*/

	//Lab5 - overloaded comparison operators implemented as friend functions
	//friend bool operator>= ( Book,  Book);
	//friend bool operator<= ( Book,  Book);
	//friend ostream& operator<< (ostream&, Book );

	//Lab5 - overloaded comparison operators implemented as friend functions
	//friend bool operator <(Book, Book); //lh operand is passed implicitly to the overloaded < operator
	//friend bool operator >(Book, Book);

	//Lab5 - overloaded comparison operators implemented as member functions
	bool operator <(Book s); //lh operand is passed implicitly to the overloaded < operator
	bool operator >(Book s);

	//Lab5 - overloaded ostream operator implemented as friend functions
	friend ostream& operator<< (ostream&, Book );

	//friend bool operator==(Book, Book);
	//friend bool operator!= (Book, Book);

};
//Lab5 - overloaded equality and inequality operators implemented as normal functions
bool operator==(Book, Book);
bool operator!= (Book, Book);


#endif /* _Book_ */
