//
// Created by Kaloyan Petkov on 30.07.24.
//

#ifndef INTERMEDIATE_CPP_CHECKBOX_H
#define INTERMEDIATE_CPP_CHECKBOX_H


#include "Widget.h"

class Checkbox : public Widget {
public:
    void draw() const override;
    ~Checkbox() override;
};


#endif //INTERMEDIATE_CPP_CHECKBOX_H
