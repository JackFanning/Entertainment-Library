#ifndef MediaItem_H
#define MediaItem_H
#include "Publisher.h"

const int MAX_P = 2;                                //Using const to set a limit to number of publishers

class MediaItem          
{
    public:
        MediaItem();                        // default parameterless constructor
        virtual ~MediaItem();

        void display();
        void setDetails(string n, string g);            //Data integrity: mutator methods

        string name;
        string genre;

        bool setPublisher(Publisher* val);
        Publisher* publisher[MAX_P];

    protected:

    private:
        int p_cnt=0;

};

#endif // MediaItem_H
