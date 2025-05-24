#ifndef BOOKS_H
#define BOOKS_H
#include "MediaItem.h"
#include "Publisher.h"
#include "algorithm"
#include "vector"

class Books: public MediaItem        //Inheritence: Books class is inheriting from the MediaItem class
{
    public:
        Books();                    // default parameterless constructor
        virtual ~Books();

        int Getcurrent_page() const { return current_page; }               //accessor (get) methods
        void Setcurrent_page(int val) { current_page = val; }        //Mutator methods(setters)
        int GetpageCount() const { return pageCount; }               //accessor (get) methods
        void SetpageCount(int val) { pageCount = val; }
        string GetName() const { return name; }

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

        Books(string nam, string gen, int curPage, int pageC, Publisher* pub);  //Overloaded constructor with 5 parameters, including publisher

        Publisher* publisher; //publisher pointer

        //Overloaded comparison operators
        /*
        friend bool operator<(Books b1,  Books b2);
        friend bool operator>(Books b1,  Books b2);
        friend bool operator<=(Books b1, Books b2);
        friend bool operator>=(Books b1, Books b2);
        friend bool operator==(Books b1, Books b2);
        friend bool operator!=(Books b1, Books b2);
        */

        //Overloaded ostream & istream operators
        friend ostream& operator<<(ostream& os, const Books& book); //ostream operator
        friend istream& operator>>(istream& is, Books& book);   //istream operator

      

        bool operator<(const Books& other) const;


        void writeToFile(const string& filename) const;
        static void readFromFile(const string& filename, vector<Books>& books);

    protected:

    private:

};

#endif // BOOKS_H
