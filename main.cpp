#include "Books.h"
#include "Games.h"

int main()
{
    cout << "Hello world!" << endl;
    Books b1;
    Games g1;
    Publisher p1;
    b1.display();
    b1.setBookDetails(420);
    b1.display();
    b1.setDetails("parent", "class");
    b1.display();
    g1.display();
    g1.setHoursPlayed(123);
    g1.display();
    b1.setPublisher(&p1);
    return 0;
}
