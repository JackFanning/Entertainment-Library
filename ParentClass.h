#ifndef PARENTCLASS_H
#define PARENTCLASS_H

#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::cout;
using std::endl;
using std::ostream;

class ParentClass
{
    public:
        ParentClass();
        virtual ~ParentClass();

        string Getname() { return name; }
        void Setname(string val) { name = val; }
        string Getgenre() { return genre; }
        void Setgenre(string val) { genre = val; }
        string Getpublisher() { return publisher; }
        void Setpublisher(string val) { publisher = val; }


        void display();

        string name;
        string genre;
        string publisher;

    protected:

    private:
};

#endif // PARENTCLASS_H
