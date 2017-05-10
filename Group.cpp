//
// Created by Mazen on 09-May-17.
//

#include "Group.h"

Group::Group(int id) {
    groupId = id;
}

vector<User *> &Group::getAdmins(){
    return admins;
}

void Group::setAdmins(vector<User *> &admins) {
    Group::admins = admins;
}

Date *Group::getDate(){
    return date;
}

void Group::setDate(Date *date) {
    Group::date = date;
}

vector<User *> &Group::getUsers(){
    return users;
}

void Group::setUsers(vector<User *> &users) {
    Group::users = users;
}

list<Post *> &Group::getPosts(){
    return posts;
}

void Group::setPosts(list<Post *> &posts) {
    Group::posts = posts;
}

vector<User *> &Group::getBlocked(){
    return blocked;
}

void Group::setBlocked(vector<User *> &blocked) {
    Group::blocked = blocked;
}

int Group::getGroupId(){
    return groupId;
}

void Group::setGroupId(int groupId) {
    Group::groupId = groupId;
}

Group::~Group() {
    delete date;
}
