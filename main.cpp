#include "Books.h"
#include "Games.h"
#include "MediaItem.h"
#include "Publisher.h"
#include <algorithm>
#include <vector>

using namespace std;

int main()
{   
cout << "\n It's wokring!" << endl;
cout << "\n========= REACHED MAIN =========\n";

  
cout << "\n========= TESTING BOOKS SORT ALGORITHM =========\n";

Books b1("Zelda", "Fantasy", 100, 300);
cout << "Created b1" << endl;

Books b2("Animal Farm", "Satire", 50, 120);
cout << "Created b2" << endl;

Books b3("Dune", "Sci-Fi", 20, 500);
cout << "Created b3" << endl;

vector<Books> books = { b1, b2, b3 };
cout << "Vector created!" << endl;

cout << "\nBefore default sort (by title):\n";
for (const auto& b : books) {
    cout << "---- BOOK ----\n" << b;
}

sort(books.begin(), books.end());

cout << "\nAfter default sort (by title):\n";
for (const auto& b : books) {
    std::cout << "---- BOOK ----\n" << b;
}



cout << "\n========= TESTING GAMES SORT =========\n";

    //Create games individually
    Games g1("Elden Ring", "RPG", 120.5, 80); // 120.5 hours played, 80GB
    cout << "Created game1\n";

    Games g2("Minecraft", "Sandbox", 500, 1); // 500 hours played, 1GB
    cout << "Created game2\n";

    Games g3("CS:GO", "Shooter", 320.7, 30);  // 320.7 hours played, 30GB
    cout << "Created game3\n";

    //Store in vector
    vector<Games> games = { g1, g2, g3 };
    cout << "Games vector created!\n";

    //Display before sorting
    cout << "\nBefore default sort (by hoursPlayed):\n";
    for (const auto& g : games) {
        cout << "---- GAME ----\n" << g;
    }

    sort(games.begin(), games.end());

    //Display after sort
    cout << "\nAfter default sort (by hoursPlayed):\n";
    for (const auto& g : games) {
        cout << "---- GAME ----\n" << g;
    }


    cout << "=== TESTING EXPLICIT SORT BOOK BY CURRENT PAGE ===\n";

    //Create individual Books
    Books book4("The Hobbit", "Fantasy", 50, 300);     // on page 50 of 300
    cout << "Created b1\n";

    Books book5("1984", "Dystopian", 120, 328);        // on page 120
    cout << "Created b2\n";

    Books book6("bye", "Sci", 30, 500);            // on page 30
    cout << "Created b3\n";

    // Add to vector
    vector<Books> booksSortPage = { book4, book5, book6 };
    cout << "Books vector created!\n";

    // Display before sorting
    cout << "\nBefore explicit sort:\n";
    for (const auto& b : booksSortPage) {
        cout << "---- BOOK ----\n" << b;
    }

    //Sort using explicit criterion (by current page)
    sort(booksSortPage.begin(), booksSortPage.end(), [](const Books& a, const Books& b) {
        return a.Getcurrent_page() < b.Getcurrent_page();  // ascending
    });

    //Display after sorting
    cout << "\nAfter explicit sort (by current page ascending):\n";
    for (const auto& b : booksSortPage) {
        cout << "---- BOOK ----\n" << b;
    }


cout << "\n===== FINDING A BOOK BY TITLE =====\n";

    //Create individual book objects
    Books book7("1984", "Dystopian", 100, 328);
    Books book8("The Hobbit", "Fantasy", 75, 300);
    Books book9("Brave New World", "Sci-Fi", 25, 288);


    vector<Books> booksTitle;
    booksTitle.push_back(book7);
    booksTitle.push_back(book8);
    booksTitle.push_back(book9);

    //Use find_if to find by name
    string titleToFind = "The Hobbit";
    auto it = find_if(booksTitle.begin(), booksTitle.end(), [&](const Books& b) {
        return b.GetName() == titleToFind;
    });

    //Print result
    if (it != booksTitle.end()) {
        cout << "Book found:\n" << *it << endl;
    } else {
        cout << "Book titled '" << titleToFind << "' not found.\n";
    }


    // ===================== FIND TEST FOR GAMES =====================
    cout << "\n===== FINDING A GAME BY HOURS PLAYED =====\n";

 
    Games game3("Skyrim", "RPG", 300, 20);
    Games game4("Stardew Valley", "Sim", 150, 1);
    Games game5("Doom", "Shooter", 40, 50);

    
    vector<Games> gamesHP;
    gamesHP.push_back(game3);
    gamesHP.push_back(game4);
    gamesHP .push_back(game5);

    
    float hoursToFind = 145;
    auto git = find_if(gamesHP.begin(), gamesHP.end(), [&](const Games& g) {
        return g.GetHoursPlayed() == hoursToFind;
    });

 
    if (git != gamesHP.end()) {
        cout << "Game found:\n" << *git << endl;
    } else {
        cout << "No game found with " << hoursToFind << " hours played.\n";
    }


    cout << "===== FILE SAVING TESTING BOOKS =====" << endl;
    Books bt("Dune", "Sci-Fi", 100, 500);
    Books by("1984", "Dystopian", 50, 300);

    // Write to file
    bt.writeToFile("books.txt");
    by.writeToFile("books2.txt");

    cout << "\nBooks written to file.\n";

    // Read from file
    vector<Books> loadedBooks;
    Books::readFromFile("books.txt", loadedBooks);

    cout << "\nBooks read from file:\n";
    for (const auto& b : loadedBooks) {
        cout << "---- BOOK ----\n" << b;
    }

    vector<Books> loadedBooks2;
    Books::readFromFile("books2.txt", loadedBooks2);
    cout << "\nBooks read from 2nd file:\n";
    for (const auto& b : loadedBooks2) {
        cout << "---- BOOK ----\n" << b;
    }


cout << "\n========= TESTING FILE I/O FOR GAMES =========\n";


Games gr("Skyrim", "RPG", 200.5, 50);
Games gt("Valorant", "Shooter", 120.75, 30);


gr.writeToFile("games.txt");
gt.writeToFile("games2.txt");

cout << "Games written to file.\n";


vector<Games> loadedGames;
Games::readFromFile("games.txt", loadedGames);

// Display loaded games
cout << "\nGames read from file:\n";
for (const auto& g : loadedGames) {
    cout << "---- GAME ----\n" << g;
}

vector<Games> loadedGames2;
Games::readFromFile("games2.txt", loadedGames2);

// Display loaded games
cout << "\nGames read from file:\n";
for (const auto& g : loadedGames2) {
    cout << "---- GAME ----\n" << g;
}



    return 0;
};



