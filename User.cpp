//
// Created by mahmoud on 5/9/2017.
//

#include "User.h"


User::User(const string &userName, const string &password, const string &email) : userName(userName),
                                                                                  password(password), email(email) {
    profile = Profile();
}

User::User() {}

const string &User::getUserName() const {
    return userName;
}

void User::setUserName(const string &userName) {
    User::userName = userName;
}

const string &User::getPassword() const {
    return password;
}

void User::setPassword(const string &password) {
    User::password = password;
}

const string &User::getEmail() const {
    return email;
}

void User::setEmail(const string &email) {
    User::email = email;
}

const Profile &User::getProfile() const {
    return profile;
}

void User::setProfile(const Profile &profile) {
    User::profile = profile;
}

const vector<User> &User::getFriends() const {
    return friends;
}

void User::setFriends(const vector<User> &friends) {
    User::friends = friends;
}

const vector<User> &User::getBlocked() const {
    return blocked;
}

void User::setBlocked(const vector<User> &blocked) {
    User::blocked = blocked;
}

int User::getUserId() const {
    return userId;
}

void User::setUserId(int userId) {
    User::userId = userId;
}
