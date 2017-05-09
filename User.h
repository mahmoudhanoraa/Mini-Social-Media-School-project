//
// Created by mahmoud on 5/9/2017.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_USER_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_USER_H
#include <string>
#include "Profile.h"

using namespace std;

class User {
private:
    string userName;
    string password;
    string email;
    Profile profile;
    vector<User> friends;
    vector<User> blocked;
    int userId;

public:
    User(const string &userName, const string &password, const string &email);
    User();

    const string &getUserName() const;

    void setUserName(const string &userName);

    const string &getPassword() const;

    void setPassword(const string &password);

    const string &getEmail() const;

    void setEmail(const string &email);

    const Profile &getProfile() const;

    void setProfile(const Profile &profile);

    const vector<User> &getFriends() const;

    void setFriends(const vector<User> &friends);

    const vector<User> &getBlocked() const;

    void setBlocked(const vector<User> &blocked);

    int getUserId() const;

    void setUserId(int userId);

};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_USER_H
