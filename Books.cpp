#include "Books.h"
#include "ParentClass.h"

Books::Books() : current_page(0)            //Constructor initialisation of current page - set to 0 initially
{
    //ctor
}

Books::Books(string nam, string gen, int curPage)        //Overloaded constructor & constructor initialisation
{
    name = nam;
    genre = gen;
    current_page = curPage;
}

void Books::setBookDetails(int cp) {

    if (cp < 0){
        cout << "Current page should be more than 0! Setting default to Page 1.. \n" << endl;       //Error checking so the current page value isn't negative
        current_page = 1;
    }
    else {
        current_page = cp;
    }
}

void Books::display()
{
    ParentClass::display();        //Overriding function from the ParentClass
    cout << " Current Page: \t" << Getcurrent_page() << endl;
}

Books::~Books()
{
    //dtor
}
