#include <iostream>
#include "book.h"
#include "Book.h"
#include "game.h"
#include "library.h"
#include <vector>
#include <algorithm>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/* some simple tests first, showing that inbuilt comparison operators work fine for primitive types and strings*/
	/* tests to compare two Book objects */
	cout<<"******************************"<<endl;
	cout<<"tests showing that inbuilt comparison operators work fine for primitive (e.g. int) types"<<endl;
	int i = 9;
	int j = 56;

	if (i > j) {
		cout<<"i is greater than j" <<endl;
	} else if (i < j) {
		cout<<"i is less than j" <<endl;
	 } else {
		cout<<"i is equal to j" <<endl;
	 }

	cout<<"******************************"<<endl;
	cout<<"tests showing that inbuilt comparison operators work fine for string types"<<endl;
	string str1 = "hello";
	string str2 = "hi";
	if (str1 > str2) {
		cout << "str1 is greater than str2" <<endl;
	} else if (str1 < str2) {
		cout<<"str2 is greater than str1" <<endl;
	} else {
		cout<<"str1 is equal to str2" <<endl;
	}

	//Many algorithms use inbuilt operators behind the scenes
	//e.g. the sort algorithm uses the 'less than' ('<') operator
	//This code works fine by default - the vector of strings can be sorted without overloading the inbuilt operators
	cout<<"******************************"<<endl;
	cout<<"tests showing that sort algortihms work fine for string types"<<endl;
	vector<string> BookNames;
	BookNames.push_back("Lemon World");
	BookNames.push_back("Tampourine Man");
	BookNames.push_back("Hallelujia");
	cout<<"Books before they are sorted"<<endl;

	for (int i = 0; i < BookNames.size(); i++)
	{
		cout << BookNames[i] << endl;
	}
/*
	for (string s :  BookNames) {
        cout << s <<endl;
    }
*/

	sort(BookNames.begin(), BookNames.end());
	cout << "sort algorithm is used to sort the list of Books based on their names:" <<endl;
    /*for (string s :  BookNames) {
        cout << s <<endl;
    }*/
	for (int i = 0; i < BookNames.size(); i++)
	{
		cout << BookNames[i] << endl;
	}
	/* Now for tests using our user defined types */
	book b1;
	b1.setName("The National"); //instantiate/create a Solopublisher object using the user defined constructor
	b1.setEarnings(986000);
	b1.setNofSingles(567);
	b1.setNofbookMembers(5);

	Book s1("Lemon World");
	s1.setDuration(3);
	s1.setGenre("indie");
	s1.setAuthor(b1);

	Book s2("Tampourine Man");
	s2.setGenre("indie");
	s2.setDuration(5);

	Book s3("Hallelujia");
	s3.setGenre("Pop");
	s3.setDuration(4);

	/* tests to compare two Book objects */
	cout<<"******************************"<<endl;
	cout<<"testing overloaded greater than ('>') operator for Book objects"<<endl;
	if (s1>s3) { //this will only work if the greater than ('>') operator has been overloaded in the Book class or in its parent class
		cout<<"s1 has a longer duration than s3"<<endl;
	} else {
		cout<<"s3 has a longer duration than s1"<<endl;
	}

	/* tests to compare two Book objects for equality*/
	cout<<"******************************"<<endl;
	cout<<"testing overloaded equality ('==') operator for Book objects"<<endl;
	if (s1==s2) { //this will only work if the equality ('==') operator has been overloaded in the Book class or in its parent class
		cout<<"s1 is equal to s2"<<endl;
	} else {
		cout<<"s2 is not equal to s1"<<endl;
	}

	/* tests to show the use of the overloaded less than ('<') operator with the STL sort algorithm */
	cout<<"******************************"<<endl;
	cout<<"testing that the sort algorithm works for Book objects - this requires that the less than ('<') operator is overloaded for Book objects"<<endl;
	library pl1("Paula's library", 8);
	pl1.addItem(s1);
	pl1.addItem(s2);
	pl1.addItem(s3);
	cout<<"******************************"<<endl;
	cout<<"order before sorting based on the criteria specified in the overloaded less than ('<') operator"<<endl;
	pl1.displayDetails(); //order before sorting by name
	pl1.sortlibraryByDefault(); //uses the overloaded < operator in the mediaItem as the sorting criterion
	cout<<"******************************"<<endl;
	cout<<"order after sorting based on the overloaded less than ('<') operator: "<<endl;
	pl1.displayDetails();

	pl1.sortlibraryByDuration(); //uses the overloaded < operator in the mediaItem as the sorting criterion
	cout<<"******************************"<<endl;
	cout<<"order after sorting by duration: "<<endl;
	pl1.displayDetails();

	pl1.sortlibraryByName(); //uses the overloaded < operator in the mediaItem as the sorting criterion
	cout<<"******************************"<<endl;
	cout<<"order after sorting by name: "<<endl;
	pl1.displayDetails();

	/* tests to use the overloaded ostream ('<<') operator to print out a Book object details*/
	cout<<"******************************"<<endl;
	cout<<"testing overloaded ostream ('<<') operator for a Book object"<<endl;
	cout<<s1; //this will only work if the ostream operator is overloaded for the Book class
}
