//
// Created by Kaloyan Petkov on 30.07.24.
//

#include <iostream>
#include "TextBox.h"

string TextBox::get_value() {
    return value;
}

void TextBox::set_value(const string &value) {
    this->value = value;
}

void TextBox::draw() const {
    cout << "Drawing a TextBox" << endl;
}

TextBox::~TextBox() {
    cout << "Destructing a TextBox" << endl;
}
