//
// Created by Kaloyan Petkov on 30.07.24.
//

#ifndef INTERMEDIATE_CPP_TEXTBOX_H
#define INTERMEDIATE_CPP_TEXTBOX_H

#include <string>
#include "Widget.h"

using namespace std;

class TextBox final : public Widget {
public:
    ~TextBox() override;
    void draw() const final;
    string get_value();
    void set_value(const string& value);
private:
    string value;
};


#endif //INTERMEDIATE_CPP_TEXTBOX_H
