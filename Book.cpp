//This file contains the implementation code for the Book class data member functions
#include "Book.h"

#include <iostream>
#include <string>

using namespace std;

int Book::nofBooks = 0;

Book::Book(string n) : mediaItem(n) {
	setName(n);
	nofBooks++;
}

string Book::getGenre() {
	return genre;
}

void Book::setGenre(string g) {
	genre = g;
}

int Book::getNofBooks() {
	return nofBooks;
}

/*Overloading using member functions*/

bool Book::operator>(Book s) {
	cout<<"using overloaded > operator"<<endl;
	return  this->getDuration() > s.getDuration();
}

bool Book::operator<(Book s) {
	return getDuration()< s.getDuration();
}

/*Overloading using friend functions*/
/*bool operator>(Book s1, Book s2) {
	cout<<"using overloaded > operator as a friend function"<<endl;
	return  s1.getDuration() > s2.getDuration();
}

bool operator<(Book s1, Book s2) {
	return  s1.getDuration() < s2.getDuration();
}*/
/*
bool operator<=(Book s1, Book s2) {
	return s1.getDuration()<= s2.getDuration();
}
bool operator>=(Book s1, Book s2) {
	//return s1.getDuration()<= s2.getDuration();
	return s1.getDuration()<= s2.getDuration();
}

*/
bool operator==(Book c1, Book c2) {
   //return (c1.getName()==c2.getName() && c1.getDuration()==c2.getDuration());
	return (c1.getGenre()==c2.getGenre());
}

bool operator!=(Book c1, Book c2) {
    return !(c1==c2);
}

ostream& operator<< (ostream &cout, Book s) {
	cout<<"Using overloaded ostream operator - Book '"<<s.getName() <<"' has duration "<<s.getDuration()<<" minutes"<<endl;
    return cout;
}

void Book::display() {
	cout<<"Book : "<<getName() <<" genre : " <<getGenre()<<endl;
}
