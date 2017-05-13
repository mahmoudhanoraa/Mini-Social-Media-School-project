#include "Comment.h"
#include <ctime>
#include <iostream>

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

void Comment::toString() {
    std::cout << "Comment " << ' ' << std::endl;
    this->getDate()->toString();
    this->owner->toString();
    std::cout << this->content << std::endl;
}
