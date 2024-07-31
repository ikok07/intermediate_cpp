//
// Created by Kaloyan Petkov on 30.07.24.
//

#include "Length.h"

Length::Length(int value) : value(value) {}

bool Length::operator==(const Length& l2) const {
    return this->value == l2.value;
}

bool Length::operator==(const int value) const {
    return this->value == value;
}

strong_ordering Length::operator<=>(const Length& l2) const {
    return value <=> l2.value;
}

inline int Length::get_value() const {
    return value;
}

void Length::set_value(int val) {
    value = val;
}

ostream& operator<<(ostream& stream, const Length& len) {
    stream << len.get_value();
    return stream;
}

Length Length::operator+(const Length &l2) const {
    return Length{value + l2.value};
}

Length Length::operator-(const Length &l2) const {
    return Length{value - l2.value};
}

Length& Length::operator+=(const Length &l2) {
    value += l2.value;
    return *this;
}

Length& Length::operator-=(const Length &l2) {
    value -= l2.value;
    return *this;
}

Length &Length::operator++() {
    value++;
    return *this;
}

Length Length::operator++(int) {
    Length copy = *this;
    operator++();
    return copy;
}

Length::operator int() const {
    return value;
}

istream& operator>>(istream &stream, Length &len) {
    int value;
    stream >> value;
    len.set_value(value);
    return stream;
}
