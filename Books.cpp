#include "Books.h"
#include "ParentClass.h"

Books::Books() : current_page(0)
{
    //ctor
}

Books::Books(string nam, string gen, int curPage)        //Overloaded constructor
{
    name = nam;
    genre = gen;
    current_page = curPage;
}

void Books::setBookDetails(int cp) {

    if (cp < 0){
        cout << "Current page should be more than 0! Setting default to Page 1.. \n" << endl;
        current_page = 1;
    }
    else {
        current_page = cp;
    }
}

void Books::display()
{
    ParentClass::display();
    cout << " Current Page: \t" << Getcurrent_page() << endl;
}

Books::~Books()
{
    //dtor
}
