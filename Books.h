#ifndef BOOKS_H
#define BOOKS_H
#include "MediaItem.h"
#include "Publisher.h"

class Books: public MediaItem        //Inheritence: Books class is inheriting from the MediaItem class
{
    public:
        Books();                    // default parameterless constructor
        virtual ~Books();

        int Getcurrent_page() { return current_page; }               //accessor (get) methods
        void Setcurrent_page(int val) { current_page = val; }        //Mutator methods(setters)
        int GetpageCount() { return pageCount; }               //accessor (get) methods
        void SetpageCount(int val) { pageCount = val; }

        Books(string nam, string gen, int current_page, int pageCount);         //Overloaded constructor with 3 parameters
        void setBookDetails(int cp);        //Mutator methods(setters)
        void display();                     //accessor (get) methods
        int current_page;
        int pageCount;

        Books(const Books& other);     // Copy constructor for deep copy
        Books& operator=(const Books& other); // Assignment operator for deep copy

        /*
        Books(const Books& objBeingCopied); //shallow Copy constructor
        Books& operator=(const Books &objBeingCopied); //shallow Assignment operator
        */

        Books(string nam, string gen, int curPage, int pageC, Publisher* pub);

        Publisher* publisher;

        //Overloaded comparison operators
        friend bool operator<(Books b1,  Books b2);
        friend bool operator>(Books b1,  Books b2);
        friend bool operator<=(Books b1, Books b2);
        friend bool operator>=(Books b1, Books b2);
        friend bool operator==(Books b1, Books b2);
        friend bool operator!=(Books b1, Books b2);

        //void sortByName();
        //vector<Books> item;
    protected:

    private:

};

#endif // BOOKS_H
