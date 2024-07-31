//
// Created by Kaloyan Petkov on 31.07.24.
//

#include "Date.h"

Date::Date(int year, int month, int day) : year{year}, month{month}, day{day} {}

int Date::get_year() {
    return year;
}

int Date::get_month() {
    return month;
}

int Date::get_day() {
    return day;
}