/*
 * Series.cpp
 *
 *  Created on: 25 Jan 2021
 *      Author: hannon
 */

#include "Series.h"
#include <iostream>
#include <string>

using namespace std;

Series::Series() {
	// TODO Auto-generated constructor stub
}

int Series::getNofSeriesMembers() {
	return nofMembers;
}

void Series::setNofSeriesMembers(int nofM) {
	nofMembers = nofM;
}

int Series::calcWages() {
	cout<<"calling calcEarnings function defined in Series class"<<endl;
	return Author::getEarnings()/nofMembers;
}

void Series::display() { //this function overrides the function with the same signature (name, number, order and type of parameters) in the Author class
	cout<<"calling display function defined in Series class"<<endl;
	cout<<getAuthorName()<<" Series has : "<<getNofSeriesMembers()<<" members"<<endl;
}
