//
// Created by Kaloyan Petkov on 31.07.24.
//

#include "DateTime.h"

DateTime::DateTime(int year, int month, int day, int hours, int minutes, int seconds) : Date(year, month, day), Time(hours, minutes, seconds) {}
