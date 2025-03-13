//This file contains the implementation code for the Game class data member functions
#include "Game.h"

#include <iostream>
#include <string>

using namespace std;

int Game::nofGames = 0;

Game::Game(string n) : mediaItem(n){
	nofGames++;
}
string Game::getTheme() {
	return theme;
}

void Game::setTheme(string t) {
	theme = t;
}

int Game::getNofGames() {
	return nofGames;
}

void Game::display() {
	cout<<"Game '"<<getName() <<"' is about "<<getTheme()<<endl;
}

