//
// Created by Kaloyan Petkov on 31.07.24.
//

#ifndef INTERMEDIATE_CPP_DATETIME_H
#define INTERMEDIATE_CPP_DATETIME_H


#include "Date.h"
#include "Time.h"

class DateTime : public Date, public Time {
public:
    DateTime() = delete;
    DateTime(int year, int month, int day, int hours, int minutes, int seconds);
};


#endif //INTERMEDIATE_CPP_DATETIME_H
