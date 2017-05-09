//
// Created by mahmoud on 5/9/2017.
//

#include "Like.h"

Like::Like(const User &owner, const Date &date) : owner(owner){
    // todo create object from time.date
}

const User &Like::getOwner() const {
    return owner;
}

void Like::setOwner(const User &owner) {
    Like::owner = owner;
}

const Date &Like::getDate() const {
    return date;
}

void Like::setDate(const Date &date) {
    Like::date = date;
}

Like::Like() {}
