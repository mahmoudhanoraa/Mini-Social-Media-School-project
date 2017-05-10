//
// Created by mahmoud on 5/9/2017.
//

#include "Post.h"

Post::Post(User *owner, const string &content) : owner(owner), content(content) {}

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
    delete(owner);
    delete(date);
}

