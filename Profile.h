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
    list<Post*> posts;
    string status;
    string profilePic;
public:
    Profile(User *user, const string &status, const string &profilePic);

    User *getUser() const;
    Profile();
    void setUser(User *user);

    const list<Post *> &getPosts() const;

    void setPosts(const list<Post *> &posts);

    const string &getStatus() const;

    void setStatus(const string &status);

    const string &getProfilePic() const;

    void setProfilePic(const string &profilePic);

    string toString();

    ~Profile();
};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_PROFILE_H
