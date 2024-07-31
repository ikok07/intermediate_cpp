//
// Created by Kaloyan Petkov on 30.07.24.
//

#include "Checkbox.h"
#include <iostream>

using namespace std;

void Checkbox::draw() const {
    cout << "Drawing a CheckBox" << endl;
}

Checkbox::~Checkbox() {
    cout << "Destructing a CheckBox" << endl;
}
