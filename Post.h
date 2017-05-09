//
// Created by mahmoud on 5/9/2017.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_POST_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_POST_H


#include <vector>
#include "User.h"
#include "Like.h"
#include "Comment.h"

using namespace std;

class Post {
private:
    Date date;
    User owner;
    vector<Like> likes;
    vector<Comment> comments;
    string content;

public:
    Post(const User &owner, const vector<Like> &likes, const vector<Comment> &comments,
         const string &content);

    const Date &getDate() const;

    void setDate(const Date &date);

    const User &getOwner() const;

    void setOwner(const User &owner);

    const vector<Like> &getLikes() const;

    void setLikes(const vector<Like> &likes);

    const vector<Comment> &getComments() const;

    void setComments(const vector<Comment> &comments);

    const string &getContent() const;

    void setContent(const string &content);


};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_POST_H
