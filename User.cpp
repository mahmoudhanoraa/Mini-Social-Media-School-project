#include <iostream>
#include "User.h"


User::User(string &userName, string &password, string &email, int id) : userName(userName),
                                                                        password(password), email(email), userId(id) {
    profile = NULL;
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
    std::cout << "User id : " << this->userId << std::endl;
    std::cout << "User name : " << this->userName << std::endl;
    std::cout << "User Password : " << this->password << std::endl;
    std::cout << "User Email : " << this->email << std::endl;
    if(this->profile != NULL)
        this->profile->toString();
    else
        std::cout << "Has No Profile " << endl;
    if(!this->friends.empty())
        std::cout << "Number of Friends : " << this->friends.size() << std::endl;
    else
        std::cout << "Has no friends" << endl;
    if(!this->blocked.empty())
        std::cout << "Number of Blocked : " << this->blocked.size() << std::endl;
    else
        std::cout << "Has no Blocked " << endl;
}
