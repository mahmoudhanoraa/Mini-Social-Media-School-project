#include <iostream>
#include "Profile.h"


Profile::Profile(User *user, const string &status,const string &profilePic) : user(user), status(status),
                                                                               profilePic(profilePic) {}

User *Profile::getUser()  {
    return user;
}

void Profile::setUser(User *user) {
    Profile::user = user;
}

vector<Post *> &Profile::getPosts() {
    return posts;
}

void Profile::setPosts(vector<Post *> &posts) {
    Profile::posts = posts;
}

string &Profile::getStatus(){
    return status;
}

void Profile::setStatus(string &status) {
    Profile::status = status;
}

string &Profile::getProfilePic(){
    return profilePic;
}

void Profile::setProfilePic(string &profilePic) {
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
    std::cout << "Profile " << std::endl;
    std::cout << "The owner Name : " << this->user->getUserName() << endl;
    if(!this->getPosts().empty())
        std::cout << "Number of Posts : " << ' ' << this->posts.size() << std::endl;
    else
        std::cout << "You did not post any thing"<< endl;
    std::cout << "Status : " << this->status << std::endl;
    std::cout << "Profile Pic " << this->profilePic << std::endl;
}
