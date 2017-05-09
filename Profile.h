//
// Created by mahmoud on 5/9/2017.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_PROFILE_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_PROFILE_H


#include "User.h"
#include "Post.h"
#include <list>
using namespace std;

class Profile {
private:
    User user;
    list<Post> posts;
    string status;
    string profilePic;
public:
    Profile(const list<Post> &posts, const string &status, const string &profilePic);

    Profile();

    const list<Post> &getPosts() const;

    void setPosts(const list<Post> &posts);

    const string &getStatus() const;

    void setStatus(const string &status);

    const string &getProfilePic() const;

    void setProfilePic(const string &profilePic);

};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_PROFILE_H
