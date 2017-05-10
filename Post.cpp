//
// Created by mahmoud on 5/9/2017.
//

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
    delete(owner);
    delete(date);
}

string Post::toString() {
    string s = "Post \n"+this->date->toString() + "\n";
    s.append(this->owner->toString() + "\n");
    s.append("Number of Comments : " + to_string(this->comments.size()) + "\n");
    s.append("Number of Likes : " + to_string(this->likes.size()) + "\n");
    s.append(this->content+"\n");
    return s;
}

