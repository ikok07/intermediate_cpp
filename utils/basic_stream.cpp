//
// Created by Kaloyan Petkov on 28.07.24.
//

#include <iostream>

using namespace std;

void get_input(const string& msg, int& input) {
    while (true) {
        cout << msg << endl;
        cin >> input;
        if (cin.fail()) {
            cout << "Enter a valid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
    }
}