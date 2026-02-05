# Online Library Management System

This is a simple C++ console-based Library Management System.

## Features

- Add books to the library
- View all books in the library
- Add users to the system
- View all users

## Files in the Project

- `main.cpp` → Main program that runs the menu
- `book.h` / `book.cpp` → Defines the Book structure
- `library.h` / `library.cpp` → Defines the Library class with book and user management
- `user.h` / `user.cpp` → Defines the User structure and functions
- `README.md` → Project instructions

## How to Compile and Run

```bash
g++ main.cpp library.cpp book.cpp user.cpp -o LibrarySystem
Run the executable:
Copy code
Bash
./LibrarySystem      # On Linux / Mac
LibrarySystem.exe    # On Windows
