//
// Created by Kaloyan Petkov on 31.07.24.
//

#ifndef INTERMEDIATE_CPP_TIME_H
#define INTERMEDIATE_CPP_TIME_H


class Time {
public:
    Time() = delete;
    Time(int hours, int minutes, int seconds);
    int get_hour();
    int get_minutes();
    int get_seconds();
private:
    int hours;
    int minutes;
    int seconds;
};


#endif //INTERMEDIATE_CPP_TIME_H
