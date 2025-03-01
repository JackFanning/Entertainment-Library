#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <iostream>
#include <string>
using namespace std;
using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Publisher
{
    public:
        Publisher();            // default parameterless constructor
        Publisher(int NoR, string namePub, string date, string upcoming, string released);
        virtual ~Publisher();   //destructor

        int GetnoOfReleases() { return noOfReleases; }                  //accessor (get) methods
        void SetnoOfReleases(int val) { noOfReleases = val; }           //mutator (set) methods
        string GetnamePublisher() { return namePublisher; }             //accessor (get) methods
        void SetnamePublisher(string val) { namePublisher = val; }      //mutator (set) methods
        string GetdateFounded() { return dateFounded; }                 //accessor (get) methods
        void SetdateFounded(string val) { dateFounded = val; }          //mutator (set) methods
        string GetupcomingTitles() { return upcomingTitles; }           //accessor (get) methods
        void SetupcomingTitles(string val) { upcomingTitles = val; }    //mutator (set) methods
        string GetreleasedTitles() { return releasedTitles; }           //accessor (get) methods
        void SetreleasedTitles(string val) { releasedTitles = val; }    //mutator (set) methods


        void setPublisherDetails(int NoR, string namePub, string date, string upcoming, string released);
        string namePublisher;
        string dateFounded;
        friend ostream& operator<< (ostream& ostr, const Publisher& p);
        void display();
    protected:

    private:        //Data hiding
        int noOfReleases;
        string upcomingTitles;
        string releasedTitles;
};

#endif // PUBLISHER_H
