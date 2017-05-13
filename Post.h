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
    Post(User *owner,const string &content);

    Date *getDate();

    void setDate(Date *date);

    User *getOwner();

    void setOwner(User *owner);

    vector<Like *> &getLikes();

    void setLikes(vector<Like *> &likes);

    vector<Comment *> &getComments();

    void setComments(vector<Comment *> &comments);

    string &getContent();

    void setContent(string &content);

    void toString();

    ~Post();

};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_POST_H
