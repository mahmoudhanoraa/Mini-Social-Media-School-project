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

void SocialNetwork::unfriend(int ID1, int ID2) {
    User* ID1_user = this->users[ID1];
    User* ID2_user = this->users[ID2];
    for (int i = 0; i < ID1_user->getFriends().size(); ++i) {
        if(ID1_user->getFriends()[i]->getUserId() == ID2) {
            ID1_user->getFriends().erase(this->users.begin() + i);
            break;
        }
    }
    for (int i = 0; i < ID2_user->getFriends().size(); ++i) {
        if(ID2_user->getFriends()[i]->getUserId() == ID1) {
            ID2_user->getFriends().erase(this->users.begin() + i);
            break;
        }
    }
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

vector<User*> SocialNetwork::suggestFriends(int ID1) {
    User* ID1_user = this->users[ID1];
    vector<User*> suggested_friends;
    for (int i = 0; i < ID1_user->getFriends().size(); ++i) {
        for (int j = 0; j < ID1_user->getFriends()[i]->getFriends().size(); ++j) {
            if(ID1_user->getFriends()[i]->getFriends()[j] != ID1_user)
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
    if(!ID1_user_profile->getPosts().empty()) {
        for (int i = 0; i < ID1_user_profile->getPosts().size(); ++i) {
            ID1_user_timeline.push_back(ID1_user_profile->getPosts()[i]);
//            try {
//                ID1_user_profile->getPosts()[i]->toString();
//                cout << "------------------------- End Post -----------------------" << endl;
//            }
//            catch (...){
//
//            }
        }

        struct date_compare {
            inline bool operator()(Post *post_1, Post *post_2) {
                if (post_1 == NULL || post_1->getDate() == NULL)
                    return false;
                if(post_2 == NULL || post_1->getDate() == NULL )
                    return true;
                int date_1 = post_1->getDate()->getYear() * 10000 +
                             post_1->getDate()->getMonth() * 1000 +
                             post_1->getDate()->getDay() * 100 +
                             post_1->getDate()->getHour() * 10 +
                             post_1->getDate()->getMinutes();

                int date_2 = post_2->getDate()->getYear() * 10000 +
                             post_2->getDate()->getMonth() * 1000 +
                             post_2->getDate()->getDay() * 100 +
                             post_2->getDate()->getHour() * 10 +
                             post_2->getDate()->getMinutes();

                return date_1 > date_2;

            }
        };
        sort(ID1_user_timeline.begin(), ID1_user_timeline.end(), date_compare());

        for (int i = 0; i < ID1_user_timeline.size(); ++i) {
            cout << ID1_user_timeline[i]->getContent() << endl;
        }
    }
}

SocialNetwork::SocialNetwork() {}

void SocialNetwork::addFriend(int ID1, int ID2) {
    User* ID1_user = this->users[ID1];
    ID1_user->getFriends().push_back(this->users[ID2]);
    User* ID2_user = this->users[ID2];
    ID2_user->getFriends().push_back(this->users[ID1]);
}

void SocialNetwork::publishPost(Post *post, User *owner) {
    owner->getProfile()->getPosts().push_back(post);
    for (int i = 0; i < owner->getFriends().size(); ++i) {
        User *friend_user = owner->getFriends()[i];
        friend_user->getProfile()->getPosts().push_back(post);
    }
}

void SocialNetwork::publishPost(Post *post, Group *toPublishOn) {
    toPublishOn->getPosts().push_back(post);
    for (int i = 0; i < toPublishOn->getUsers().size(); ++i) {
        User* memberUser = toPublishOn->getUsers()[i];
        memberUser->getProfile()->getPosts().push_back(post);
    }
}
