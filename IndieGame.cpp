//This file contains the implementation code for the IndieGame class member functions
#include "IndieGame.h"
#include <iostream>
using namespace std;

IndieGame::IndieGame()  {
	//cout<<"calling default IndieGame constructor"<<endl;
	//initialise the variables for the class
	setName("");
	setSeriesFee(0);
	hasBackingSeries=false;
}

IndieGame::IndieGame(string n) : Author(n) { //lab3 - part2: IndieGame constructor - it calls the user defined parent class constructor explicitly in this initialization list
	//cout<<"calling user defined overloaded IndieGame constructor"<<endl;
	hasBackingSeries=false;
	SeriesFee=0;
}

IndieGame::IndieGame(string n, bool b) : Author(n), hasBackingSeries(b) { //using initialization list for constructor code
	SeriesFee=0;
}

bool IndieGame::getHasBackingSeries() {
	return hasBackingSeries;
}

void IndieGame::setHasBackingSeries(bool ibb) {
	hasBackingSeries = ibb;
}

int IndieGame::getSeriesFee() {
	return SeriesFee;
}

void IndieGame::setSeriesFee(int f) {
	SeriesFee = f;
}

int IndieGame::calcWages() {
	cout<<"calling calcEarnings function defined in IndieGame class"<<endl;
	return Author::getEarnings() - SeriesFee;
}

void IndieGame::display() { //this function overrides the function with the same signature (name, number, order and type of parameters) in the Author class
	cout<<"calling display function defined in IndieGame class"<<endl;
	Author::display();
	cout<<" has backing Series? : "<<getHasBackingSeries()<<endl;
}
