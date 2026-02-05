#include "book.h"
#include <iostream>
using namespace std;

void displayBook(const Book &b) {
    cout << b.title << " by " << b.author
         << " - " << (b.isAvailable ? "Available" : "Checked Out") << endl;
}