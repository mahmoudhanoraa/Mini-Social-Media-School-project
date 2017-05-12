#include <iostream>
#include "Group.h"

Group::Group(int id) {
    groupId = id;
}

vector<User *> &Group::getAdmins() {
    return admins;
}

void Group::setAdmins(vector<User *> &admins) {
    Group::admins = admins;
}

Date *Group::getDate() {
    return date;
}

void Group::setDate(Date *date) {
    Group::date = date;
}

vector<User *> &Group::getUsers() {
    return users;
}

void Group::setUsers(vector<User *> &users) {
    Group::users = users;
}

list<Post *> &Group::getPosts() {
    return posts;
}

void Group::setPosts(list<Post *> &posts) {
    Group::posts = posts;
}

vector<User *> &Group::getBlocked() {
    return blocked;
}

void Group::setBlocked(vector<User *> &blocked) {
    Group::blocked = blocked;
}

int Group::getGroupId() {
    return groupId;
}

void Group::setGroupId(int groupId) {
    Group::groupId = groupId;
}

Group::~Group() {
    delete date;
}

void Group::toString() {
    cout << "Group " << endl;
    cout << this->groupName << endl;
    this->date->toString();
    cout << "Number Of Admins : " << ' ' << this->admins.size() << endl;
    cout << "Number Of Members : " << ' ' << this->users.size() << endl;
    cout << "Number Of Posts : " << ' ' << this->posts.size() << endl;
    cout << "Number Of Blocked : " << ' ' << this->blocked.size() << endl;
}

Group::Group(int, string &) {

}

const string &Group::getGroupName() const {
    return groupName;
}

void Group::setGroupName(const string &groupName) {
    Group::groupName = groupName;
}
