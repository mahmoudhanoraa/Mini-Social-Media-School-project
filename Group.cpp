//
// Created by Mazen on 09-May-17.
//

#include "Group.h"

const vector<User> &Group::getAdmins() const {
    return admins;
}

const Date &Group::getDate() const {
    return date;
}

const vector<User> &Group::getUsers() const {
    return users;
}

const list<Post> &Group::getPosts() const {
    return posts;
}

const vector<User> &Group::getBlkd() const {
    return blkd;
}

void Group::setAdmins(const vector<User> &admins) {
    Group::admins = admins;
}

void Group::setUsers(const vector<User> &users) {
    Group::users = users;
}

void Group::setPosts(const list<Post> &posts) {
    Group::posts = posts;
}

void Group::setBlkd(const vector<User> &blkd) {
    Group::blkd = blkd;
}

const int &Group::getGroupId() const {
    return groupId;
}
