//
// Created by mahmoud on 5/9/2017.
//

#include "Comment.h"




const string &Comment::getContent() const {
    return content;
}

void Comment::setContent(const string &content) {
    Comment::content = content;
}

const User &Comment::getOwner() const {
    return owner;
}

void Comment::setOwner(const User &owner) {
    Comment::owner = owner;
}

const Date &Comment::getDate() const {
    return date;
}

void Comment::setDate(const Date &date) {
    Comment::date = date;
}

Comment::Comment(const string &content, const User &owner) : content(content), owner(owner){
    // todo create object from time.date
}

Comment::Comment() {}

