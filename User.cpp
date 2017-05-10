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

string &User::getPassword(){
    return password;
}

void User::setPassword(string &password) {
    User::password = password;
}

string &User::getEmail(){
    return email;
}

void User::setEmail(string &email) {
    User::email = email;
}

Profile *User::getProfile(){
    return profile;
}

void User::setProfile(Profile *profile) {
    User::profile = profile;
}

vector<User*> &User::getFriends(){
    return friends;
}

vector<User*> &User::getBlocked(){
    return blocked;
}

void User::setBlocked(vector<User*> &blocked) {
    User::blocked = blocked;
}

int User::getUserId(){
    return userId;
}

void User::setUserId(int userId) {
    User::userId = userId;
}

void User::setFriends(vector<User *> &friends) {

}

string User::toString() {
    string s = "User id : " + to_string(this->userId);
    s.append("User name : " + this->userName + "\n");
    s.append("User Password : " + this->password + "\n");
    s.append("User Email : " + this->email + "\n");
    s.append(this->profile->toString());
    s.append("Number of Friends : " + to_string(this->friends.size()) + "\n");
    s.append("Number of Blocked : " + to_string(this->blocked.size()) + "\n");
    return s;
}
