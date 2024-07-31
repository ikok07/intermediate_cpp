//
// Created by Kaloyan Petkov on 29.07.24.
//

#ifndef INTERMEDIATE_CPP_RECTANGLE_H
#define INTERMEDIATE_CPP_RECTANGLE_H

#include <string>
using namespace std;

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(const Rectangle& src) = delete;
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    ~Rectangle();

    void draw() const;
    int get_area() const;

    int get_width() const;
    void set_width(int width);

    int get_height() const;
    void set_height(int height);

    static int get_obj_count();
private:
    int width = 0;
    int height = 0;
    string color;

    static int obj_count;
};


#endif //INTERMEDIATE_CPP_RECTANGLE_H
