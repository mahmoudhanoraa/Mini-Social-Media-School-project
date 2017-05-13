#ifndef MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_SOCIALNETWORK_H
#define MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_SOCIALNETWORK_H


#include <map>
#include "User.h"
#include "Group.h"
using namespace std;
class User;
class Group;

class SocialNetwork {
private:
    vector<User*> users;
    vector<Group*> groups;

public:
    SocialNetwork();

    vector<User*> &getUsers();

    vector<Group*> &getGroups();

    // Function to get the friends of the User by userID
    vector<User*> &getFriends(int);

    // function add friend the to each other
    void addFriend(int, int);

    // function unfriend them
    void unfriend(int, int);

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
    vector<User*> suggestFriends(int);

    void publishPost(Post*, User*);
    void publishPost(Post*, Group*);

};


#endif //MINI_SOCIAL_MEDIA_SCHOOL_PROJECT_SOCIALNETWORK_H
