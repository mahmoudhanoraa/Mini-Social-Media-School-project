//
// Created by mahmoud on 5/10/2017.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_DATE_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_DATE_H


class Date {
    int minutes;
    int hour;
    int day;
    int month;
    int year;
public:
    Date();
    Date(int minutes, int hour, int day, int month, int year);

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
};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_DATE_H
