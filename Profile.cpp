#include <iostream>
#include "Profile.h"


Profile::Profile(User *user, const string &status, const string &profilePic) : user(user), status(status),
                                                                               profilePic(profilePic) {}

User *Profile::getUser() const {
    return user;
}

void Profile::setUser(User *user) {
    Profile::user = user;
}

const list<Post *> &Profile::getPosts() const {
    return posts;
}

void Profile::setPosts(const list<Post *> &posts) {
    Profile::posts = posts;
}

const string &Profile::getStatus() const {
    return status;
}

void Profile::setStatus(const string &status) {
    Profile::status = status;
}

const string &Profile::getProfilePic() const {
    return profilePic;
}

void Profile::setProfilePic(const string &profilePic) {
    Profile::profilePic = profilePic;
}

Profile::Profile() {
    this->profilePic = "";
    this->status = "";
}

Profile::~Profile() {
    delete (user);
}

void Profile::toString() {
    cout << "Profile " << endl;
    this->user->toString();
    cout << "Number of Posts : " << ' ' << this->posts.size() << endl;
    cout << "Status : " << this->status << endl;
    cout << "Profile Pic " << this->profilePic << endl;
}
