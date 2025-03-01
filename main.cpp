#include "Books.h"
#include "Games.h"
#include "MediaItem.h"
#include "Publisher.h"

int main()
{
    cout << "Hello world!" << endl;
    Books b1;
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

    Games g2("Halo", "Shooter", 2, -4);
    g2.display();

    Books b2("Harry Potter", "Action", -3);
    b2.display();
    return 0;
}
