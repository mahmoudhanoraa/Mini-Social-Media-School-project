//
// Created by mahmoud on 5/9/2017.
//

#include "Comment.h"
#include <ctime>

using namespace std;


Comment::Comment(const string &content, User *owner) : content(content), owner(owner) {
    time_t now = time(0);
    string dt = ctime(&now);
    this->date = new Date(dt);
}

const string &Comment::getContent() const {
    return content;
}

void Comment::setContent(const string &content) {
    Comment::content = content;
}

User *Comment::getOwner() const {
    return owner;
}

void Comment::setOwner(User *owner) {
    Comment::owner = owner;
}

Date *Comment::getDate() const {
    return date;
}

void Comment::setDate(Date *date) {
    Comment::date = date;
}

string Comment::toString() {
    string s = "Comment \n" + this->getDate()->toString();
    s.append(this->owner->toString());
    s.append(this->content);
    return s;
}
