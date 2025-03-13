//file containing interface for Author class
#ifndef _Author_
#define _Author_
#include <string>
using namespace std;
class Author {

	private: //private data member variables
	    string name;
		int nofSingles;
		int earnings;

	public: //data member functions declared here
		Author(); // User defined default (parameterless) constructor
		Author(string name); //user-defined constructor

		//mutator (set) methods
		void setName(const string& name);
		void setNofSingles(int nofSingles);
		void setEarnings(int e);

		//accessor (get) methods
		string getAuthorName();
		int getNofSingles();
		int getEarnings();

		virtual int calcWages(); //lab3 - part4: adding in '=0' makes calcWages an abstract function and therefore the Author class an abstract class

		//void display(); //lab3 - part1: this function will be overridden in the child classes
		virtual void display(); //lab3 - part3: the overridden function is now marked as virtual to enable late binding
};
#endif /* _Author_ */

