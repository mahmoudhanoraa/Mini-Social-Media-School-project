#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_DATE_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_DATE_H

#include <string>
#include <map>

using namespace std;

class Date {
    int minutes;
    int hour;
    int day;
    int month;
    int year;
    static map<string, int> monthes;
    static const map<string, int> days;

public:
    Date();
    Date(int minutes, int hour, int day, int month, int year);
    Date(string &date);

    int getMinutes() const;

    void setMinutes(int minutes);

    int getHour() const;

    void setHour(int hour);

    int getDay() const;

    void setDay(int day);

    int getMonth() const;

    void setMonth(int month);

    int getYear() const;

    void setYear(int year);

    string toString();

};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_DATE_H
