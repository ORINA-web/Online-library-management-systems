#include "user.h"
#include <iostream>
#include <vector>
using namespace std;

// Add a new user
void addUser(vector<User>& users) {
    User u;
    cout << "Enter user name: ";
    cin.ignore();
    getline(cin, u.name);
    cout << "Enter user ID: ";
    cin >> u.id;
    users.push_back(u);
    cout << "User added successfully!\n";
}

// View all users
void viewUsers(const vector<User>& users) {
    if(users.empty()) {
        cout << "No users in the system.\n";
        return;
    }
    cout << "\nUsers:\n";
    for(int i = 0; i < users.size(); i++) {
        cout << i+1 << ". " << users[i].name << " - ID: " << users[i].id << endl;
    }
}