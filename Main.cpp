#include "library.h"
#include <iostream>
using namespace std;

int main() {
    Library lib;
    int choice;
    do {
        cout << "\nLibrary Menu:\n1. Add Book\n2. View Books\n3. Exit\nChoose: ";
        cin >> choice;
        switch(choice) {
            case 1: lib.addBook(); break;
            case 2: lib.viewBooks(); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 3);
    return 0;
}