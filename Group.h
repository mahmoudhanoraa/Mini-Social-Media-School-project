//
// Created by Mazen on 09-May-17.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_GROUP_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_GROUP_H


#include "User.h"
#include "Date.h"
#include <vector>
#include <list>
class Group {
    private:
        vector<User> admins;
        Date date;
        vector<User> users;
        list<Post> posts;
        vector<User> blocked;
        int groupId;

    public:
    void setAdmins(const vector<User> &admins);

    void setUsers(const vector<User> &users);

    void setPosts(const list<Post> &posts);

    void setBlocked(vector<User> &blocked);

    const vector<User> &getAdmins() const;

    const Date &getDate() const;

    vector<User> &getUsers();

    const list<Post> &getPosts() const;


    const int &getGroupId() const;

    vector<User> &getBlocked();
};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_GROUP_H
