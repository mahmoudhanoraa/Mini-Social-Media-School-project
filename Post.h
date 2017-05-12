#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_POST_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_POST_H


#include <vector>
#include "User.h"
#include "Like.h"
#include "Comment.h"

using namespace std;

class Comment;

class Like;

class Post {
private:
    Date *date;
    User *owner;
    vector<Like *> likes;
    vector<Comment *> comments;
    string content;

public:
    Post(User *owner, const string &content);

    Date *getDate() const;

    void setDate(Date *date);

    User *getOwner() const;

    void setOwner(User *owner);

    const vector<Like *> &getLikes() const;

    void setLikes(const vector<Like *> &likes);

    const vector<Comment *> &getComments() const;

    void setComments(const vector<Comment *> &comments);

    const string &getContent() const;

    void setContent(const string &content);

    void toString();

    ~Post();

};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_POST_H
