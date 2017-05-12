#include <iostream>
#include "Post.h"

Post::Post(User *owner, const string &content) : owner(owner), content(content) {
    time_t now = time(0);
    string dt = ctime(&now);
    this->date = new Date(dt);
}

Date *Post::getDate() const {
    return date;
}

void Post::setDate(Date *date) {
    Post::date = date;
}

User *Post::getOwner() const {
    return owner;
}

void Post::setOwner(User *owner) {
    Post::owner = owner;
}

const vector<Like *> &Post::getLikes() const {
    return likes;
}

void Post::setLikes(const vector<Like *> &likes) {
    Post::likes = likes;
}

const vector<Comment *> &Post::getComments() const {
    return comments;
}

void Post::setComments(const vector<Comment *> &comments) {
    Post::comments = comments;
}

const string &Post::getContent() const {
    return content;
}

void Post::setContent(const string &content) {
    Post::content = content;
}

Post::~Post() {
    delete (owner);
    delete (date);
}

void Post::toString() {
    cout << "Post " << endl;
    this->date->toString();
    this->owner->toString();
    cout << "Number of Comments : " << ' ' << this->comments.size() << endl;
    cout << "Number of Likes : " << ' ' << this->likes.size() << endl;
    cout << this->content << endl;
}

