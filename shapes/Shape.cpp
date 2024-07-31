//
// Created by Kaloyan Petkov on 30.07.24.
//

#include "Shape.h"
#include <iostream>
#include <string>

using namespace std;

string& Shape::get_background() {
    return background;
}

void Shape::set_background(const string& val) {
    background = val;
}

void Shape::draw() const {
    cout << "Drawing shape" << endl;
}
