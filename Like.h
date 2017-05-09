//
// Created by mahmoud on 5/9/2017.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_LIKE_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_LIKE_H


#include "User.h"

class Like {
private:
    User owner;
    Date date;

public:
    Like(const User &owner);

    Like();

    const User &getOwner() const;

    void setOwner(const User &owner);

    const Date &getDate() const;

    void setDate(const Date &date);
};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_LIKE_H
