//
// Created by mahmoud on 5/9/2017.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_LIKE_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_LIKE_H


#include "User.h"
#include <string>

using namespace std;

class User;
class Date;

class Like {

private:
    User *owner;
    Date *date;

public:
    Like(User *owner);

    User *getOwner() const;

    void setOwner(User *owner);

    Date *getDate() const;

    void setDate(Date *date);

    string toString();

     ~Like();
};




#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_LIKE_H
