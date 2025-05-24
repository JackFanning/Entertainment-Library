#include "Books.h"
#include "Games.h"
#include "MediaItem.h"
#include "Publisher.h"
#include <fstream> 

Books::Books() : current_page(0), pageCount(0), publisher(nullptr)         //Constructor initialisation of current page - set to 0 initially
{
    //ctor
}

Books::Books(string nam, string gen, int curPage, int pageC)        //Overloaded constructor
{
    name = nam;
    genre = gen;
    current_page = curPage;
    pageCount = pageC;

    publisher = nullptr;
}


// Parameterized constructor
Books::Books(string nam, string gen, int curPage, int pageC, Publisher* pub)
{
    name = nam;
    genre = gen;
    current_page = curPage;
    pageCount = pageC;
    publisher = pub;
}



//Deep copy constructor
Books::Books(const Books& other)
    : current_page(other.current_page), pageCount(other.pageCount) {
    name = other.name;
    genre = other.genre;
    
    // Deep copy of Publisher pointer
    if (other.publisher != nullptr) {
        publisher = new Publisher(*other.publisher); // Create a new Publisher object and copy its content
    } else {
        publisher = nullptr;
    }
}


//Deep copy overloaded assignment operator
Books& Books::operator=(const Books& other) {
    if (this == &other) {
        return *this;  // Self-assignment
    }

    // Clean up existing publisher to avoid memory leak or crash
    if (publisher != nullptr) {
        delete publisher;
        publisher = nullptr;
    }

    // Copy basic data
    name = other.name;
    genre = other.genre;
    current_page = other.current_page;
    pageCount = other.pageCount;

    // Deep copy publisher
    if (other.publisher != nullptr) {
        publisher = new Publisher(*other.publisher);
    } else {
        publisher = nullptr;
    }

    return *this;
}



/*
// shallow Copy constructor
Books::Books(const Books &objBeingCopied) : MediaItem(objBeingCopied) {
    cout << "Copy constructor called for book: " << objBeingCopied.name << endl;

    // Copy the name and other basic attributes
    this->name = objBeingCopied.name;
    this->genre = objBeingCopied.genre;
    this->current_page = objBeingCopied.current_page;
    this->pageCount = objBeingCopied.pageCount;

    // Copy the Publisher (object copy, not pointer)
    this->publisher = objBeingCopied.publisher;
}


Books &Books::operator=(const Books &objBeingCopied)    //shallow Assignment opearator
{
    if (this != &objBeingCopied) {  // Check for self-assignment
        cout << "Assignment operator called for book: " << objBeingCopied.name << endl;

        // Assign the base class (MediaItem) data first
        MediaItem::operator=(objBeingCopied);

        // Copy the member variables
        this->name = objBeingCopied.name;
        this->genre = objBeingCopied.genre;
        this->current_page = objBeingCopied.current_page;
        this->pageCount = objBeingCopied.pageCount;

        // Copy the Publisher object
        this->publisher = objBeingCopied.publisher;
    }
    return *this;
}
*/


//Overloaded comparison operators
bool operator<( Books b1,  Books b2)
{
    return (b1.GetpageCount() < b2.GetpageCount());
}

bool operator>( Books b1,  Books b2)
{
    return (b1.GetpageCount() > b2.GetpageCount());
}

bool operator<=(Books b1, Books b2) {
	return b1.GetpageCount()<= b2.GetpageCount();
}

bool operator>=(Books b1, Books b2) {
	return b1.GetpageCount()>= b2.GetpageCount();
}

bool operator==(Books b1, Books b2)
{
   return (b1.GetName()==b2.GetName() && b1.GetpageCount()==b2.GetpageCount());
}

bool operator!=(Books b1, Books b2)
{
    return !(b1==b2);
}


//Overloaded ostream operator
ostream& operator<<(ostream& os, const Books& book) {
    os << "Book Name: " << book.name << "\n"
       << "Genre: " << book.genre << "\n"
       << "Current Page: " << book.current_page << "\n"
       << "Total Pages: " << book.pageCount << "\n";
    if (book.publisher != nullptr) {
        os << "Publisher: " << book.publisher->GetnamePublisher() << "\n";
    } else {
        os << "No Publisher assigned.\n";
    }
    return os;
}

//Overloaded istream operator
istream& operator>>(istream& is, Books& book) {
    
    cout << "Enter book name: ";
    getline(is, book.name);  // Allows multi-word input

    cout << "Enter genre: ";
    getline(is, book.genre);  // Allows multi-word input

    cout << "Enter current page: ";
    is >> book.current_page;

    cout << "Enter total page count: ";
    is >> book.pageCount;

    // Ask for Publisher name and set the Publisher object
    book.publisher = new Publisher();
    is >> *book.publisher;  // Calls the overloaded istream operator for Publisher

    return is;
}


void Books::setBookDetails(int cp) {

    if (cp <= 0){
        cout << "Current page should be more than 0! Setting default to Page 1.. \n" << endl;       //Error checking so the current page value isn't negative
        current_page = 1;
    }
    else {
        current_page = cp;
    }
}

void Books::display()
{
    MediaItem::display();        //Overriding function from the MediaItem
    cout << " Current Page: \t" << Getcurrent_page() << endl;
    if (publisher != nullptr) {
        cout << "Publisher: " << publisher->GetnamePublisher() << endl;
    } else {
        cout << "No Publisher assigned." << endl;
    }

}


Books::~Books() {
    delete publisher; // Free dynamically allocated memory
}


//STL default sort by title alphabetically (e.g. std::sort(vector.begin(), vector.end()))
bool Books::operator<(const Books& other) const {
    return name < other.name; //Default sorting alphabetically by name
}



// WRITE TO FILE
void Books::writeToFile(const string& filename) const {
    ofstream outFile(filename, ios::app); 

    if (!outFile) {
        cout << "Could not open file for writing.\n" <<endl;
        return;
    }

    outFile << name << '\n'
            << genre << '\n'
            << current_page << '\n'
            << pageCount << '\n';

    outFile.close();
}

// READ FROM FILE
void Books::readFromFile(const string& filename, vector<Books>& books) {
    ifstream inFile(filename);

    if (!inFile) {
        cout << "Could not open file for reading.\n" << endl;
        return;
    }

    string name, genre;
    int current_page, pageCount;

    while (getline(inFile, name) && getline(inFile, genre)
        && inFile >> current_page && inFile >> pageCount) {
        
        inFile.ignore(); // Skip newline after pageCount
        books.push_back(Books(name, genre, current_page, pageCount));
    }

    inFile.close();
}
