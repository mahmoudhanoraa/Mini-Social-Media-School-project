//
// Created by mahmoud on 5/9/2017.
//

#include "Comment.h"


Comment::Comment(const string &content, User *owner) : content(content), owner(owner) {}

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
