#ifndef PARENTCLASS_H
#define PARENTCLASS_H
#include "Publisher.h"


class ParentClass: public Publisher
{
    public:
        ParentClass();
        virtual ~ParentClass();

        void display();
        void setDetails(string n, string g);

        string name;
        string genre;
        Publisher publisher;
    protected:

    private:
};

#endif // PARENTCLASS_H
