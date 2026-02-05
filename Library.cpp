#include "library.h"
#include <iostream>
using namespace std;

void Library::addBook() {
    Book b;
    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, b.title);
    cout << "Enter author name: ";
    getline(cin, b.author);
    b.isAvailable = true;
    books.push_back(b);
    cout << "Book added successfully!\n";
}

void Library::viewBooks() {
    if(books.empty()) {
        cout << "No books in the library.\n";
        return;
    }
    cout << "\nLibrary Books:\n";
    for (int i = 0; i < books.size(); i++) {
        cout << i+1 << ". " << books[i].title
             << " by " << books[i].author
             << " - " << (books[i].isAvailable ? "Available" : "Checked Out") << endl;
    }
}