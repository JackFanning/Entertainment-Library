#include "Publisher.h"

//Constructor Initialisation list
Publisher::Publisher() : noOfReleases(0), namePublisher("N/A"), dateFounded("N/A"), upcomingTitles("N/A"), releasedTitles("N/A")
{
    //ctor
}

Publisher::Publisher(int NoR, string namePub, string date, string upcoming, string released)  //Overloaded Constructor with 5 parameters
{
    noOfReleases = NoR;
    namePublisher = namePub;
    dateFounded = date;
    upcomingTitles = upcoming;
    releasedTitles = released;
    cout << "working";
}

void Publisher::display()
{
    cout << "\n Publisher:\t" << namePublisher
    << "\n Date Founded:\t" << dateFounded << endl;
}

ostream& operator << (ostream& ostr, const Publisher& p)
{
    ostr << "\n Publisher:\t" << p.namePublisher
    << "\n Date Founded:\t" << p.dateFounded << endl;
    return ostr;
}

Publisher::~Publisher()
{
    //dtor
}
