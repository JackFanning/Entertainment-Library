#ifndef Library_H
#define Library_H
#include "Publisher.h"

const int MAX_P = 2;                                //Using const to set a limit to number of publishers

class Library: public Publisher                 //Implementation of inheritance relationship: Library is inhereting from the Publisher Class
{
    public:
        Library();
        virtual ~Library();

        void display();
        void setDetails(string n, string g);            //Data integrity: mutator methods

        string name;
        string genre;

        bool setPublisher(Publisher* p);                //Data integrity: mutator methods
    protected:

    private:
        int p_cnt=0;
        Publisher* publisher[MAX_P];
};

#endif // Library_H
