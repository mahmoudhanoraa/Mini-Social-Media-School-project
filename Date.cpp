//
// Created by mahmoud on 5/10/2017.
//

#include "Date.h"

Date::Date() {}

Date::Date(int minutes, int hour, int day, int month, int year) : minutes(minutes), hour(hour), day(day), month(month),
                                                                  year(year) {}

int Date::getMinutes() const {
    return minutes;
}

void Date::setMinutes(int minutes) {
    Date::minutes = minutes;
}

int Date::getHour() const {
    return hour;
}

void Date::setHour(int hour) {
    Date::hour = hour;
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}
