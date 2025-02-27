#ifndef MediaItem_H
#define MediaItem_H
#include "Publisher.h"

const int MAX_P = 2;                                //Using const to set a limit to number of publishers

class MediaItem: public Publisher                 //Implementation of inheritance relationship: MediaItem is inhereting from the Publisher Class
{
    public:
        MediaItem();
        virtual ~MediaItem();

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

#endif // MediaItem_H
