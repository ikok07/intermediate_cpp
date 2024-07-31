//
// Created by Kaloyan Petkov on 29.07.24.
//

#include <iostream>
#include "Rectangle.h"

using namespace std;

int Rectangle::obj_count = 0;

void Rectangle::draw() const {
    cout << "Drawing a rectangle" << endl;
    cout << "Width: " << Rectangle::width << endl << "Height: " << Rectangle::height << endl;
}

int Rectangle::get_area() const {
   return Rectangle::width * Rectangle::height;
}

int Rectangle::get_width() const {
    return this->width;
}

void Rectangle::set_width(int width) {
    if (width < 0) throw invalid_argument("The width cannot be negative!");
    else if (width > 100) throw out_of_range("The width cannot be greater than 100!");
    this->width = width;
}

int Rectangle::get_height() const {
    return height;
}

void Rectangle::set_height(int height) {
    if (height < 0) throw invalid_argument("height");
    this->height = height;
}

Rectangle::Rectangle(int width, int height) {
    obj_count++;
    this->set_width(width);
    this->set_height(height);
}

Rectangle::Rectangle(int width, int height, const string &color) : Rectangle(width, height) {
    this->color = color;
}

Rectangle::~Rectangle() {
    obj_count--;
//    cout << "Destructing rectangle..." << endl;
}

int Rectangle::get_obj_count() {
    return obj_count;
}


