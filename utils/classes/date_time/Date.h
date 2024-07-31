//
// Created by Kaloyan Petkov on 31.07.24.
//

#ifndef INTERMEDIATE_CPP_DATE_H
#define INTERMEDIATE_CPP_DATE_H


class Date {
public:
    Date() = delete;
    Date(int year, int month, int day);
    int get_year();
    int get_month();
    int get_day();
private:
    int year;
    int month;
    int day;
};


#endif //INTERMEDIATE_CPP_DATE_H
