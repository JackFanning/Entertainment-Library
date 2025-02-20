#ifndef BOOKS_H
#define BOOKS_H
#include "ParentClass.h"
#include "Publisher.h"

class Books: public ParentClass
{
    public:
        Books();
        virtual ~Books();

        int Getcurrent_page() { return current_page; }
        void Setcurrent_page(int val) { current_page = val; }

        Books(string nam, string gen, int curPage);
        void setBookDetails(int cp);
        void display();
        int current_page;
    protected:

    private:

};

#endif // BOOKS_H
