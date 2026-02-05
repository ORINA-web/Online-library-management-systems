#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include <vector>
using namespace std;

class Library {
private:
    vector<Book> books;
public:
    void addBook();
    void viewBooks();
};

#endif