/*
 Student Records Management System (C++ + Oracle DB)
 Author: Prajwal Subramanya S N

 This is a starter skeleton file for integrating C++ with Oracle DB.
 Currently, it only contains menu options and placeholders for database operations.
 The actual Oracle DB integration (via ODBC/OCI) will be added later.
*/

#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n===== Student Records Management =====\n";
    cout << "1. Add Student\n";
    cout << "2. Update Student\n";
    cout << "3. Delete Student\n";
    cout << "4. View Students\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    bool running = true;

    while (running) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "[TODO] Add Student (connect to Oracle DB)\n";
                break;
            case 2:
                cout << "[TODO] Update Student (connect to Oracle DB)\n";
                break;
            case 3:
                cout << "[TODO] Delete Student (connect to Oracle DB)\n";
                break;
            case 4:
                cout << "[TODO] View Students (fetch from Oracle DB)\n";
                break;
            case 5:
                running = false;
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
