#include <iostream>
#include "User.h"


User::User(string &userName, string &password, string &email, int id) : userName(userName),
                                                                        password(password), email(email), userId(id) {
    profile = new Profile();
}


string &User::getUserName() {
    return userName;
}

void User::setUserName(string &userName) {
    User::userName = userName;
}

string &User::getPassword() {
    return password;
}

void User::setPassword(string &password) {
    User::password = password;
}

string &User::getEmail() {
    return email;
}

void User::setEmail(string &email) {
    User::email = email;
}

Profile *User::getProfile() {
    return profile;
}

void User::setProfile(Profile *profile) {
    User::profile = profile;
}

vector<User *> &User::getFriends() {
    return friends;
}

vector<User *> &User::getBlocked() {
    return blocked;
}

void User::setBlocked(vector<User *> &blocked) {
    User::blocked = blocked;
}

int User::getUserId() {
    return userId;
}

void User::setUserId(int userId) {
    User::userId = userId;
}

void User::setFriends(vector<User *> &friends) {

}

void User::toString() {
    cout << "User id : " << this->userId << endl;
    cout << "User name : " << this->userName << endl;
    cout << "User Password : " << this->password << endl;
    cout << "User Email : " << this->email << endl;
    this->profile->toString();
    cout << "Number of Friends : " << this->friends.size() << endl;
    cout << "Number of Blocked : " << this->blocked.size() << endl;
}
