#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_PROFILE_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_PROFILE_H


#include "User.h"
#include "Post.h"
#include <list>
using namespace std;
class User;
class Post;

class Profile {
private:
    User *user;
    vector<Post*> posts;
    string status;
    string profilePic;
public:
    Profile(User *user,const string &status,const string &profilePic);

    User *getUser();
    Profile();
    void setUser(User *user);

    vector<Post *> &getPosts();

    void setPosts(vector<Post *> &posts);

    string &getStatus() ;

    void setStatus(string &status);

    string &getProfilePic();

    void setProfilePic(string &profilePic);

    void toString();

    ~Profile();
};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_PROFILE_H
