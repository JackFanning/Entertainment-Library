#include "Books.h"
#include "Games.h"
#include "MediaItem.h"
#include "Publisher.h"
Books::Books() : current_page(0), pageCount(0)          //Constructor initialisation of current page - set to 0 initially
{
    //ctor
}

Books::Books(string nam, string gen, int curPage, int pageC)        //Overloaded constructor
{
    name = nam;
    genre = gen;
    current_page = curPage;
    pageCount = pageC;
}

bool operator<( Books b1,  Books b2)
{
    return (b1.GetpageCount() < b2.GetpageCount());
}

bool operator>( Books b1,  Books b2)
{
    return (b1.GetpageCount() > b2.GetpageCount());
}

bool orderByName(Books b1, Books b2)
{
    return (b1.GetName() < b2.GetName());
}
/*
void Books::sortByName() {
	cout<<"sorting playlist"<<endl;
	sort(items.begin(), items.end(), orderByName);
}
*/
void Books::setBookDetails(int cp) {

    if (cp <= 0){
        cout << "Current page should be more than 0! Setting default to Page 1.. \n" << endl;       //Error checking so the current page value isn't negative
        current_page = 1;
    }
    else {
        current_page = cp;
    }
}

void Books::display()
{
    MediaItem::display();        //Overriding function from the MediaItem
    cout << " Current Page: \t" << Getcurrent_page() << endl;
}

Books::~Books()
{
    //dtor
}
