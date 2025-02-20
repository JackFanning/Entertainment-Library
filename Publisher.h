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
        Publisher();
        virtual ~Publisher();

        int GetnoOfReleases() { return noOfReleases; }
        void SetnoOfReleases(int val) { noOfReleases = val; }
        string GetnamePublisher() { return namePublisher; }
        void SetnamePublisher(string val) { namePublisher = val; }
        string GetdateFounded() { return dateFounded; }
        void SetdateFounded(string val) { dateFounded = val; }
        string GetupcomingTitles() { return upcomingTitles; }
        void SetupcomingTitles(string val) { upcomingTitles = val; }
        string GetreleasedTitles() { return releasedTitles; }
        void SetreleasedTitles(string val) { releasedTitles = val; }


        void setPublisherDetails(int NoR, string namePub, string date, string upcoming, string released);

    protected:

    private:
        int noOfReleases;
        string namePublisher;
        string dateFounded;
        string upcomingTitles;
        string releasedTitles;
};

#endif // PUBLISHER_H
