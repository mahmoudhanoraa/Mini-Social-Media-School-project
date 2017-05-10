//
// Created by mahmoud on 5/9/2017.
//

#include "SocialNetwork.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<User*> &SocialNetwork::getUsers(){
    return users;
}

vector<Group*> &SocialNetwork::getGroups(){
    return groups;
}

void SocialNetwork::addUser(int ID1, int ID2) {
    User* ID1_user = this->users[ID1];
    ID1_user->getFriends().push_back(this->users[ID2]);
}

void SocialNetwork::removeFriend(int ID1, int ID2) {
    User* ID1_user = this->users[ID1];
    ID1_user->getFriends().erase(this->users.begin() + ID2);
}

void SocialNetwork::block(int ID1, int ID2) {
    User* ID1_user = this->users[ID1];
    ID1_user->getBlocked().push_back(this->users[ID2]);
}

void SocialNetwork::blockGroupMember(int ID1, int IDg) {
    Group* IDg_group = this->groups[ID1];
    IDg_group->getBlocked().push_back(this->users[ID1]);
}

void SocialNetwork::removeGroupMember(int ID1, int IDg) {
    Group* IDg_group = this->groups[ID1];
    IDg_group->getUsers().erase(this->users.begin() + ID1);
}

void SocialNetwork::deleteGroup(int IDg) {
    this->groups.erase(this->groups.begin() + IDg);
}

vector<User*> SocialNetwork::suggestFrinds(int ID1) {
    User* ID1_user = this->users[ID1];
    vector<User*> suggested_friends;
    for (int i = 0; i < ID1_user->getFriends().size(); ++i) {
        for (int j = 0; j < ID1_user->getFriends()[i]->getFriends().size(); ++j) {
            suggested_friends.push_back(ID1_user->getFriends()[i]->getFriends()[j]);
        }
    }
    return suggested_friends;
}

vector<User *> &SocialNetwork::getFriends(int ID1) {
    User* ID1_user = this->users[ID1];
    return ID1_user->getFriends();
}

void SocialNetwork::getTimeline(int ID1) {
    vector<Post*> ID1_user_timeline;
    User* ID1_user = this->users[ID1];
    Profile* ID1_user_profile = ID1_user->getProfile();
    list<Post*>::const_iterator it;
    for (it = ID1_user_profile->getPosts().begin(); it != ID1_user_profile->getPosts().end(); ++it) {
        ID1_user_timeline.push_back(*it);
    }
//    for (int i = 0; i < ID1_user.getFriends().size(); ++i) {
//        list<Post>::const_iterator it1;
//        for (it = ID1_user.getFriends()[i].getProfile().getPosts().begin();
//             it1 !=  ID1_user.getFriends()[i].getProfile().getPosts().end(); ++it1) {
//            ID1_user_timeline.push_back(*it1);
//        }
//    }
    struct date_compare
    {
        inline bool operator() (const Post* post_1, const Post* post_2)
        {
            int date_1 = post_1->getDate()->getYear()*10000+
                        post_1->getDate()->getMonth()*1000+
                        post_1->getDate()->getDay()*100+
                        post_1->getDate()->getHour()*10+
                        post_1->getDate()->getMinutes();

            int date_2 = post_2->getDate()->getYear()*10000+
                        post_2->getDate()->getMonth()*1000+
                        post_2->getDate()->getDay()*100+
                        post_2->getDate()->getHour()*10+
                        post_2->getDate()->getMinutes();

            return date_1 > date_2;

        }
    };
    sort(ID1_user_timeline.begin(), ID1_user_timeline.end(), date_compare());

    for (int i = 0; i < ID1_user_timeline.size(); ++i) {
        cout << ID1_user_timeline[i]->getContent() << endl;
    }
}
