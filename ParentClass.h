#ifndef PARENTCLASS_H
#define PARENTCLASS_H
#include "Publisher.h"

const int MAX_P = 2;

class ParentClass: public Publisher                 //Implementation of inheritance relationship: ParentClass is inhereting from the Publisher Class
{
    public:
        ParentClass();
        virtual ~ParentClass();

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

#endif // PARENTCLASS_H
