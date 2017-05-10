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

vector<User> &Group::getUsers() {
    return users;
}

const list<Post> &Group::getPosts() const {
    return posts;
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


const int &Group::getGroupId() const {
    return groupId;
}

void Group::setBlocked(vector<User> &blocked) {

}

vector<User> &Group::getBlocked() {
    return <#initializer#>;
}
