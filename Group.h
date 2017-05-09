//
// Created by Mazen on 09-May-17.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_GROUP_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_GROUP_H


#include "User.h"
#include <vector>
#include <list>
class Group {
    private:
        vector<User> admins;
        Date date;
        vector<User> users;
        list<Post> posts;
        vector<User> blkd;
        int groupId;

    public:
    void setAdmins(const vector<User> &admins);

    void setUsers(const vector<User> &users);

    void setPosts(const list<Post> &posts);

    void setBlkd(const vector<User> &blkd);

    const vector<User> &getAdmins() const;

    const Date &getDate() const;

    const vector<User> &getUsers() const;

    const list<Post> &getPosts() const;

    const vector<User> &getBlkd() const;

    const int &getGroupId() const;

};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_GROUP_H
