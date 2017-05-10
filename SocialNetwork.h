//
// Created by mahmoud on 5/9/2017.
//

#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_SOCIALNETWORK_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_SOCIALNETWORK_H


#include <map>
#include "User.h"
#include "Group.h"
using namespace std;

class SocialNetwork {
private:
    vector<User> users;
    vector<Group> groups;

public:
    const vector<User> &getUsers() const;

    const vector<Group> &getGroups() const;

    // Function to get the friends of the User by userID
    const vector<User> &getFriends(int);

    // function add user ID2 to the list of friends of ID1
    void addUser(int, int);

    // function remove user ID2 from list of friends ID1
    void removeFriend(int, int);

    // function block user ID2 from being a friend to ID1
    void block(int, int);

    // function block user ID1 from group IDg
    void blockGroupMember(int, int);

    // function remove member from ID1 from group IDg
    void removeGroupMember(int, int);

    // function to delete group by ID
    void deleteGroup(int);

    // function to display user's timeline by ID
    void getTimeline(int);

    // function to suggest friend by ID
    vector<User> suggestFrinds(int);
};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_SOCIALNETWORK_H
