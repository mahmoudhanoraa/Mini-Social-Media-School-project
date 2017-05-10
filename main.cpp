#include <iostream>
using namespace std;

#include "Comment.h"
#include "Date.h"
#include "Group.h"
#include "Like.h"
#include "User.h"
#include "SocialNetwork.h"

int main() {
    string user_1_name = "Mahmoud";
    string user_1_pass= "kokokoko11";
    string user_1_email= "hanora@hanoraSocial.com";
    User  *user_1 = new User(user_1_name, user_1_pass, user_1_email, 1);


    Comment *comment = new Comment("Hi, this is my first comment on your social media", user_1);
    cout << "Comment 1 Date" << endl;
    cout << comment->getDate()->getDay() << ' ' << comment->getDate()->getMonth() << ' ' << comment->getDate()->getYear() << endl;

    return 0;
}