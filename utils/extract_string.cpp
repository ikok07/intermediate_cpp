//
// Created by Kaloyan Petkov on 27.07.24.
//

#include <iostream>

using namespace std;

int extract_name() {
    string name = "John Smith";
    size_t space_index = name.find_last_of(' ');
    if (space_index == -1) return 1;
    string f_name = name.substr(0, space_index);
    string l_name = name.substr(space_index);
    cout << "First name: " << f_name << endl;
    cout << "Last name: " << l_name << endl;
}