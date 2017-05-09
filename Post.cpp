//
// Created by mahmoud on 5/9/2017.
//

#include "Post.h"

Post::Post(const User &owner, const vector<Like> &likes, const vector<Comment> &comments,
           const string &content) : owner(owner), likes(likes), comments(comments), content(content) {
    // todo create object from time.date
}

const Date &Post::getDate() const {
    return date;
}

void Post::setDate(const Date &date) {
    Post::date = date;
}

const User &Post::getOwner() const {
    return owner;
}

void Post::setOwner(const User &owner) {
    Post::owner = owner;
}

const vector<Like> &Post::getLikes() const {
    return likes;
}

void Post::setLikes(const vector<Like> &likes) {
    Post::likes = likes;
}

const vector<Comment> &Post::getComments() const {
    return comments;
}

void Post::setComments(const vector<Comment> &comments) {
    Post::comments = comments;
}

const string &Post::getContent() const {
    return content;
}

void Post::setContent(const string &content) {
    Post::content = content;
}
