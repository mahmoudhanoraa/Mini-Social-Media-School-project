//
// Created by Mazen on 09-May-17.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_GROUP_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_GROUP_H


#include "User.h"
#include "Date.h"
#include <vector>
#include <list>

class Data;
class User;
class Post;
class Group {
    private:
        vector<User*> admins;
        Date *date;
        vector<User*> users;
        list<Post*> posts;
        vector<User*> blocked;
        int groupId;
        string groupName;
public:
    Group(int, string&);
    Group(int);

    const string &getGroupName() const;

    void setGroupName(const string &groupName);

    vector<User *> &getAdmins();

    void setAdmins(vector<User *> &admins);

    Date *getDate();

    void setDate(Date *date);

    vector<User *> &getUsers();

    void setUsers(vector<User *> &users);

    list<Post *> &getPosts();

    void setPosts(list<Post *> &posts);

    vector<User *> &getBlocked();

    void setBlocked(vector<User *> &blocked);

    int getGroupId();

    void setGroupId(int groupId);
    void toString();

    ~Group();

};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_GROUP_H
