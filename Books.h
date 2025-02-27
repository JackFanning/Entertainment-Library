#ifndef BOOKS_H
#define BOOKS_H
#include "Library.h"
#include "Publisher.h"

class Books: public Library        //Inheritence: Books class is inheriting from the Library
{
    public:
        Books();
        virtual ~Books();

        int Getcurrent_page() { return current_page; }
        void Setcurrent_page(int val) { current_page = val; }        //Mutator methods(setters)

        Books(string nam, string gen, int curPage);
        void setBookDetails(int cp);        //Mutator methods(setters)
        void display();
        int current_page;

    protected:

    private:

};

#endif // BOOKS_H
