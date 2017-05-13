#include <iostream>
#include "Date.h"


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

map<string, int> Date::monthes{
        {"Jan", 1},
        {"Feb", 2},
        {"Mar", 3},
        {"Apr", 4},
        {"May", 5},
        {"Jun", 6},
        {"Jul", 7},
        {"Aug", 8},
        {"Sep", 9},
        {"Oct", 10},
        {"Nov", 11},
        {"Dec", 12}
};
const map<string, int> Date::days{
        {"Sat", 1},
        {"Sun", 2},
        {"Mon", 3},
        {"Tue", 4},
        {"Wed", 5},
        {"Thu", 6},
        {"Fri", 7}
};


Date::Date(string &date) {
    string monthSt;
    monthSt.resize(3);
    string day;
    day.resize(3);
    string hour;
    hour.resize(2);
    string minutes;
    minutes.resize(2);
    string year;
    year.resize(4);
    string dayNum;
    dayNum.resize(2);
    for (int i = 0; i < 3; ++i) {
        day[i] = date[i];
    }
    for (int i = 0; i < 3; ++i) {
        monthSt[i] = date[i + 4];
    }
    for (int i = 0; i < 2; ++i) {
        dayNum[i] = date[i + 8];
    }
    for (int i = 0; i < 2; ++i) {
        hour[i] = date[i + 11];
    }
    for (int i = 0; i < 2; ++i) {
        minutes[i] = date[i + 14];
    }
    for (int i = 0; i < 4; ++i) {
        year[i] = date[(date.length() - 5) + i];
    }

    this->day = stoi(dayNum);
    this->month = monthes[monthSt];
    this->hour = stoi(hour);
    this->minutes = stoi(minutes);
    this->year = stoi(year);
}

void Date::toString() {
    std::cout << "Date : " << std::endl;
    std::cout << this->getDay() << " / " <<this->getMonth()<< " / " << this->getYear() << std::endl;
}
