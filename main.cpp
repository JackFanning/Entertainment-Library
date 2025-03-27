#include "Books.h"
#include "Games.h"
#include "MediaItem.h"
#include "Publisher.h"

int main()
{
    cout << "Hello world!" << endl;
    Books b1, b2("To kill a mockingbird", "Drama", 15, 150), b3("Song of Ice & Fire", "Fantasy", 12, 1000);
    cout << "\nt1";
    Games g1;
    cout << "\nt2";
    Publisher p1(5, "CD Project Red", "June-2010", "Witcher 4", "Witcher 3");
    cout << "\nt3";
    cout << "\nt4";
    b1.display();
    b1.setBookDetails(420);
    b1.display();
    b1.setDetails("parent", "class");
    b1.display();
    g1.display();
    g1.setHoursPlayed(123);
    g1.display();
    b1.setPublisher(&p1);
    b1.display();
    cout << p1;
    if (b2 < b3){
        cout << "b2 is less than b3";
    }else if(b2 > b3) {
        cout << "b2 is greater than b3";
    }

    return 0;
}
