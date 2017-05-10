//
// Created by mahmoud on 5/9/2017.
//

#include "SocialNetwork.h"
#include <vector>

using namespace std;

const vector<User> &SocialNetwork::getUsers() const {
    return users;
}

const vector<Group> &SocialNetwork::getGroups() const {
    return groups;
}

void SocialNetwork::addUser(int ID1, int ID2) {
    User ID1_user = this->users[ID1];
    ID1_user.getFriends().push_back(this->users[ID2]);
}

void SocialNetwork::removeFriend(int ID1, int ID2) {
    User ID1_user = this->users[ID1];
    ID1_user.getFriends().erase(this->users.begin() + ID2);
}

void SocialNetwork::block(int ID1, int ID2) {
    User ID1_user = this->users[ID1];
    ID1_user.getBlocked().push_back(this->users[ID2]);
}

void SocialNetwork::blockGroupMember(int ID1, int IDg) {
    Group IDg_group = this->groups[ID1];
    IDg_group.getBlocked().push_back(this->users[ID1]);
}

void SocialNetwork::removeGroupMember(int ID1, int IDg) {
    Group IDg_group = this->groups[ID1];
    IDg_group.getUsers().erase(this->users.begin() + ID1);
}

void SocialNetwork::deleteGroup(int IDg) {
    this->groups.erase(this->groups.begin() + IDg);
}

vector<User> SocialNetwork::suggestFrinds(int ID1) {
    User ID1_user = this->users[ID1];
    vector<User> suggested_friends;
    for (int i = 0; i < ID1_user.getFriends().size(); ++i) {
        for (int j = 0; j < ID1_user.getFriends()[i].getFriends().size(); ++j) {
            suggested_friends.push_back(ID1_user.getFriends()[i].getFriends()[j]);
        }
    }
    return suggested_friends;
}

const vector<User> &SocialNetwork::getFriends(int ID1) {
    User ID1_user = this->users[ID1];
    return ID1_user.getFriends();
}

void SocialNetwork::getTimeline(int ID1) {
    vector<Post>
    User ID1_user = this->users[ID1];

}
