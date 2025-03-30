#include "Books.h"
#include "Games.h"
#include "MediaItem.h"
#include "Publisher.h"
Books::Books() : current_page(0), pageCount(0)          //Constructor initialisation of current page - set to 0 initially
{
    //ctor
}

Books::Books(string nam, string gen, int curPage, int pageC)        //Overloaded constructor
{
    name = nam;
    genre = gen;
    current_page = curPage;
    pageCount = pageC;
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
        return *this;  // Skip self-assignment
    }

    // Shallow copy for simple types/ non pointer types
    name = other.name;
    genre = other.genre;
    current_page = other.current_page;
    pageCount = other.pageCount;

     // Deep copy of the Publisher pointer
     if (other.publisher != nullptr) {
        // Deallocate any existing memory
        if (publisher != nullptr) {
            delete publisher;
        }
        publisher = new Publisher(*other.publisher); // Create a new Publisher object and copy its content
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
    is >> book.name;  // Takes single-word input; spaces will break input

    cout << "Enter genre: ";
    is >> book.genre; 

    cout << "Enter current page: ";
    is >> book.current_page;

    cout << "Enter total page count: ";
    is >> book.pageCount;

    // Ask for Publisher name and set the Publisher object
    book.publisher = new Publisher();
    is >> *book.publisher;  // Calls the overloaded istream operator for Publisher

    return is;
}


/*
void Books::sortByName() {
	cout<<"sorting playlist"<<endl;
	sort(items.begin(), items.end(), orderByName);
}
*/
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

// Destructor to deallocate memory
Books::~Books() {
    if (publisher != nullptr) {
        delete publisher;  // Release memory allocated for the Publisher object
        publisher = nullptr; // Set the pointer to null to avoid double deletion
    }
}
