#include "Publisher.h"

Publisher::Publisher() : noOfReleases(0), namePublisher("N/A"), dateFounded("N/A"), upcomingTitles("N/A"), releasedTitles("N/A")
{
    //ctor
}

void Publisher::setPublisherDetails(int NoR, string namePub, string date, string upcoming, string released)
{
    noOfReleases = NoR;
    namePublisher = namePub;
    dateFounded = date;
    upcomingTitles = upcoming;
    releasedTitles = released;
    cout << "working";
}

Publisher::~Publisher()
{
    //dtor
}
