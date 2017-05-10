//
// Created by mahmoud on 5/9/2017.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_USER_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_USER_H
#include <string>
#include "Profile.h"
#include <vector>

using namespace std;
class Profile;
class User {
private:
    string userName;
    string password;
    string email;
    Profile *profile;
    vector<User*> friends;
    vector<User*> blocked;
    int userId;

public:
    User(string &userName,string &password, string &email, int);


    string &getUserName();

    void setUserName(string &userName);

    string &getPassword();

    void setPassword(string &password);

    string &getEmail();

    void setEmail(string &email);

    Profile* getProfile();

    void setProfile(Profile *profile);

    vector<User*> &getFriends();

    void setFriends(vector<User*> &friends);

    vector<User*> &getBlocked();

    void setBlocked(vector<User*> &blocked);

    int getUserId();

    void setUserId(int userId);

};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_USER_H
