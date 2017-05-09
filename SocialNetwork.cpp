//
// Created by mahmoud on 5/9/2017.
//

#include "SocialNetwork.h"

const vector<User> &SocialNetwork::getUsers() const {
    return users;
}

const vector<Group> &SocialNetwork::getGroups() const {
    return groups;
}


void SocialNetwork::addUser(int ID1, int ID2) {

}

void SocialNetwork::removeFriend(int ID1, int ID2) {

}

void SocialNetwork::block(int ID1, int ID2) {

}

void SocialNetwork::blockGroupMember(int ID1, int IDg) {

}

void SocialNetwork::removeGroupMember(int ID1, int IDg) {

}

void SocialNetwork::deleteGroup(int IDg) {

}

const vector<User> SocialNetwork::suggestFrinds(int) {
    return NULL;
}

const vector<User> &SocialNetwork::getFriends(int) {
    return <#initializer#>;
}
