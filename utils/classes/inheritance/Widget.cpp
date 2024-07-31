//
// Created by Kaloyan Petkov on 30.07.24.
//
#include <iostream>
#include "Widget.h"

using namespace std;

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::is_enabled() const {
    return enabled;
}
