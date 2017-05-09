//
// Created by mahmoud on 5/9/2017.
//

#include "Profile.h"

Profile::Profile(const list<Post> &posts, const string &status, const string &profilePic) : user(
        user), posts(posts), status(status), profilePic(profilePic) {}

const list<Post> &Profile::getPosts() const {
    return posts;
}

void Profile::setPosts(const list<Post> &posts) {
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

Profile::Profile() {}
