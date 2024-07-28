//
// Created by Kaloyan Petkov on 28.07.24.
//

#include <iostream>

using namespace std;

enum class Action {
    LIST = 1, ADD, UPDATE
};

enum class Operation {
    LIST = 1, ADD, UPDATE
};

void enums_test() {
    cout << "1: List invoices" << endl <<
         "2: Add invoice" << endl <<
         "3: Update invoice" << endl <<
         "Select: ";
    int input;
    cin >> input;

    switch (input) {
        case (int)Action::LIST:
            cout << "List invoices" << endl;
            break;
        case (int)Action::ADD:
            cout << "Add invoice" << endl;
            break;
        case (int)Action::UPDATE:
            cout << "Update invoice" << endl;
            break;
        default:
            cout << "Invalid action!" << endl;
    }
}