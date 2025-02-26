#ifndef PARENTCLASS_H
#define PARENTCLASS_H
#include "Publisher.h"


class ParentClass: public Publisher                 //Implementation of inheritance relationship: ParentClass is inhereting from the Publisher Class
{
    public:
        ParentClass();
        virtual ~ParentClass();

        void display();
        void setDetails(string n, string g);            //Data integrity: mutator methods

        string name;
        string genre;

        Publisher publisher;
        Publisher getPublisher();
        void setPublisher(Publisher p);                //Data integrity: mutator methods
    protected:

    private:
};

#endif // PARENTCLASS_H
