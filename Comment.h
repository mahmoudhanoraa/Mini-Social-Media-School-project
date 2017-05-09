//
// Created by mahmoud on 5/9/2017.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_COMMENT_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_COMMENT_H

#include <string>
#include "User.h"
#include "Date.h"

using namespace std;

class Comment {
private:
    string content;
    User owner;
    Date date;

public:
    Comment(const string &content, const User &owner);

    Comment();

    const string &getContent() const;

    void setContent(const string &content);

    const User &getOwner() const;

    void setOwner(const User &owner);

    const Date &getDate() const;

    void setDate(const Date &date);


};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_COMMENT_H
