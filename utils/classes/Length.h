//
// Created by Kaloyan Petkov on 30.07.24.
//

#ifndef INTERMEDIATE_CPP_LENGTH_H
#define INTERMEDIATE_CPP_LENGTH_H

#include <compare>
#include <ostream>
#include <istream>

using namespace std;

class Length {
public:
    explicit Length(int value);
    Length() = default;

    bool operator==(const Length& l2) const;
    strong_ordering operator<=>(const Length& l2) const;
    bool operator==(int value) const;

    Length operator+(const Length& l2) const;
    Length operator-(const Length& l2) const;
    Length& operator+=(const Length& l2);
    Length& operator-=(const Length& l2);
    Length& operator++(); // prefix
    Length operator++(int); // postfix
    explicit operator int() const;


    int get_value() const;
    void set_value(int val);
private:
    int value;
    int x;
    friend ostream& operator<<(ostream& stream, const Length& len);
};

ostream& operator<<(ostream& stream, const Length& len);
istream& operator>>(istream& stream, Length& len);

#endif //INTERMEDIATE_CPP_LENGTH_H
