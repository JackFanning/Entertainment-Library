#include "Publisher.h"

//Constructor Initialisation list
Publisher::Publisher() : noOfReleases(0), namePublisher("N/A"), dateFounded("N/A"), upcomingTitles("N/A"), releasedTitles("N/A")
{
    //ctor
}

Publisher::Publisher(int NoR, string namePub, string date, string upcoming, string released)
{
    noOfReleases = NoR;
    namePublisher = namePub;
    dateFounded = date;
    upcomingTitles = upcoming;
    releasedTitles = released;
    cout << "working";
}


// Deep copy constructor
Publisher::Publisher(const Publisher& other)
    : noOfReleases(other.noOfReleases),
      namePublisher(other.namePublisher),
      dateFounded(other.dateFounded),
      upcomingTitles(other.upcomingTitles),
      releasedTitles(other.releasedTitles) {
    // Simply copy all the string and int values
}




Publisher::Publisher(string nam, string date) : namePublisher(nam), dateFounded(date)
{
    
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
