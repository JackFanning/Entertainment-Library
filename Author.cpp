//This file contains the implementation code for the Author class data member functions
#include "Author.h"
#include <iostream>
using namespace std;

Author::Author() {
	//cout<<"calling default Author constructor"<<endl;
	setName("");
}

Author::Author(string n) : name(n), nofSingles(5), earnings(0)  { //lab3 - part2: using constructor initializer list
	//cout<<"calling user defined overloaded Author constructor"<<endl;
}

string Author::getAuthorName() {
	return name;
}

void Author::setName(const string& name) {
	this->name = name;
}

int Author::getNofSingles() {
	return nofSingles;
}

void Author::setNofSingles(int nofSingles) {
	this->nofSingles = nofSingles;
}

void Author::setEarnings(int e) {
	earnings = e;
}

int Author::getEarnings() {
	return earnings;
}

int Author::calcWages() {
	cout<<"calling calcEarnings function defined in Author class"<<endl;
	return earnings;
}

void Author::display() {
	cout<<"calling display function defined in Author class"<<endl;
	cout<<"Author "<<getAuthorName() <<" has  : "<<getNofSingles() <<" singles "<<endl;
}
