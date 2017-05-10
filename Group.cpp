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

string Group::toString() {
    string s = "Group \n" + this->groupName + " \n";
    s.append(this->date->toString());
    s.append("Number Of Admins : " + to_string(this->admins.size()) +"\n");
    s.append("Number of Members : " + to_string(this->users.size()) +"\n");
    s.append("Number of Posts : " + to_string(this->posts.size()) + "\n");
    s.append("Number of Blocked : " + to_string(this->blocked.size()) + "\n");
    return s;
}

Group::Group(int, string &) {

}

const string &Group::getGroupName() const {
    return groupName;
}

void Group::setGroupName(const string &groupName) {
    Group::groupName = groupName;
}
