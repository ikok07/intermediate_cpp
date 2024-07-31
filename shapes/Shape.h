//
// Created by Kaloyan Petkov on 30.07.24.
//

#ifndef INTERMEDIATE_CPP_SHAPE_H
#define INTERMEDIATE_CPP_SHAPE_H


#include <string>

using namespace std;

class Shape {
public:
    virtual void draw() const = 0;
    string& get_background();
    void set_background(const string& val);
private:
    string background;
};


#endif //INTERMEDIATE_CPP_SHAPE_H
