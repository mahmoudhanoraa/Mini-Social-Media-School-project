#include <iostream>
#include "Like.h"


Like::Like(User *owner) : owner(owner) {
    time_t now = time(0);
    string dt = ctime(&now);
    this->date = new Date(dt);
}

User *Like::getOwner() const {
    return owner;
}

void Like::setOwner(User *owner) {
    Like::owner = owner;
}

Date *Like::getDate() const {
    return date;
}

void Like::setDate(Date *date) {
    Like::date = date;
}

Like::~Like() {
    delete owner;
    delete date;

}

void Like::toString() {
    cout << "Like " << endl;
    this->date->toString();
    this->owner->toString();
}
