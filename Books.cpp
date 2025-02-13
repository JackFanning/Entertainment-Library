#include "Books.h"
#include "ParentClass.h"

Books::Books() : current_page(0)
{
    //ctor
}

Books::Books(string nam, string gen, string pub)
{
    name = nam;
    genre = gen;
    publisher = pub;
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
