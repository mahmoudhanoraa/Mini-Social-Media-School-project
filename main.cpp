#include <iostream>
using namespace std;

#include "Comment.h"
#include "Date.h"
#include "Group.h"
#include "Like.h"
#include "User.h"
#include "SocialNetwork.h"

int main() {
    SocialNetwork *socialNetwork = new SocialNetwork();

    string user_1_name = "Mahmoud";
    string user_1_pass= "kokokoko11";
    string user_1_email= "hanora@sadpot.com";
    User  *user_1 = new User(user_1_name, user_1_pass, user_1_email, 0);
    socialNetwork->getUsers().push_back(user_1);
    user_1->toString();
    cout << "------------------------------" << " END user 1 " << "----------------------------------" << endl;


    Comment *comment_1 = new Comment("Hi, this is my first comment on your social media", user_1);
    comment_1->toString();
    cout << "------------------------------" << " END comment " << "----------------------------------" << endl;

    string user_2_name = "Ahmed";
    string user_2_pass= "kokokoko12";
    string user_2_email= "Ahmed@sadpot.com";
    User  *user_2 = new User(user_2_name, user_2_pass, user_2_email, 1);
    socialNetwork->getUsers().push_back(user_2);
    socialNetwork->addFriend(0, 1);
    user_2->toString();
    cout << "------------------------------" << " END user 2 " << "----------------------------------" << endl;

    return 0;
}