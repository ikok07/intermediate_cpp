//
// Created by Kaloyan Petkov on 31.07.24.
//

#include "Time.h"

Time::Time(int hours, int minutes, int seconds) : hours{hours}, minutes{minutes}, seconds{seconds} {}

int Time::get_hour() {
    return hours;
}

int Time::get_minutes() {
    return minutes;
}

int Time::get_seconds() {
    return seconds;
}