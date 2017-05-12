#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_COMMENT_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_COMMENT_H

#include <string>
#include "User.h"
#include "Date.h"

using namespace std;
class User;
class Date;
class Comment {
private:
    string content;
    User *owner;
    Date *date;

public:
    Comment(const string &content, User *owner);

    const string &getContent() const;

    void setContent(const string &content);

    User *getOwner() const;

    void setOwner(User *owner);

    Date *getDate() const;

    void setDate(Date *date);

    void toString();

};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_COMMENT_H
