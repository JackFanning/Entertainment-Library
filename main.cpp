#include "Books.h"
#include "Games.h"
#include "MediaItem.h"
#include "Publisher.h"

int main()
{   
    /*
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
    */
    /*Games g2("Halo", "Shooter", 2, -4);
    g2.display();

    Books b2("Harry Potter", "Action", -3, 201);
    b2.display();
    */

    /*Publisher p2("Mojang",2009);
    Games g3("Terraria","Adventure",14,9,p2);

    g3.display();
    */

    cout << "\n It's wokring" << endl;
    
    /*
    //Shallow Copy construtcor test
    Publisher p2 = Publisher(10, "Mojang", "2009", "Upcomiing", "Released");

    Books b2("Gold","Fantasy",21,500,p2);
   

    Books b3 = b2;   //shallow Copy construcotr test
    b2.display();
    b3.display();
    


    //shallow Assignment operator test
    Publisher p3("Hello","2000");

    Books b4("Hi","Adventure",22,23,p3);
    Books b5("W","L",1,2,p3);

    b4 = b5; //Assigning b5 to b4, whatever is put in for b5 will be assigned to b4 aswell

    b4.display();
    cout << "----------------" << endl;
    b5.display();
    */

    /*
    Publisher p5(5,"Pub1","2001","Upcoming","Released");
    Publisher p6(3,"Pub2","2000","Up","Rel");

    Books b6("Six","Fiction",10,200,p5);
    b6.display();

    Books b7 = b6; //Deep copy constructor test
    
    b7.setName("Horrid");
    b7.display();


    cout << "Book 6 remains the same: \n" << endl;
    b6.display();

    //Deep copy assignment operator test
    Books b8("GG","Action",23,290,p5);
    cout << "\n b8:" << endl;
    b8.display();

    Books b9;
    b9 = b8;

    b9.setName("Rat");
    cout << "b9:" << endl;
    b9.display();

    cout << "B8 remains unchanged: " << endl;
    b8.display();

    b8.Setcurrent_page(1);
    b8.display();

    b9.display();
    */

    
    Publisher* p1 = new Publisher(10,"Aaa","2003","Up","Rel");
    
    /*
    Books b1("Harry Potter","Action",23,100,p1);

    b1.display();

    Books b2 = b1;  //Deep copy constructor
    
    b2.setName("Top");
    b2.display();

    cout << "Original b1: " << endl;
    b1.display();


    Books b3;
    //b3 = b1;
    b3.setName("Differenet");
    b3.display();
    */



    Publisher* p2 = new Publisher(3,"Mojang","2009","Coming","Out");
    Games g1("Minecraft","Adventure",13,20,p2);

    g1.display();


    Games g2 = g1;  //Deep copy constructor
    g2.setName("X");
    g2.setstorageSize(6);
    g2.display();

    g1.display();


    Games game1("Cyberpunk", "RPG", 50, 70,p1);  // 70GB storage
    Games game2("Minecraft", "Sandbox", 200, 1,p1);  // 1GB storage

    if (game1 > game2) {
        cout << "Cyberpunk takes more storage than Minecraft!" << endl;
    }

    if (game2 < game1) {
        cout << "Minecraft takes less storage than Cyberpunk!" << endl;
    }


    Games game3("Cyberpunk", "RPG", 50, 70,p1);
    Games game4("Cyberpunk", "RPG", 50, 70,p1);


    if (game3 == game4) {
        cout << "Game3 and Game4 are identical!" << endl;
    }

    if(game3 != game2){
        cout << "Different!" << endl;
    }

    game4.display();

    /*
    Books b1("G","F",4,56);
    Books b2("W","R",4,200);

    if (b1<b2){
        cout << "B1 has less than b2" << endl;
    }
    */

    cout << "\n" << game4 << endl;


    Books book2("Harry","Fantasy",4,400,p1);
    cout << "\n " << book2 << endl;
    

/*
    Games game;

    cout << "Please enter details: " << endl;
    cin >> game;

    cout << "\n" << game << endl;
*/

    Books book;
    cin >> book;

    cout << "\n" << book << endl;
    return 0;

}
