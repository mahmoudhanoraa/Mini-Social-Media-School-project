#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

#include "Comment.h"
#include "Date.h"
#include "Group.h"
#include "Like.h"
#include "User.h"
#include "SocialNetwork.h"

void drawASCI(){
    ifstream myReadFile;
    myReadFile.open("C:/Users/mahmoud/Documents/GitHub/Mini-Social-Media-School-project/cmake-build-debug/ASCI.txt");
    int L;
    myReadFile >> L; myReadFile.ignore();
    int H;
    myReadFile >> H; myReadFile.ignore();
    string T;
    myReadFile >>T;
    string g[H+1];
    for (int i = 0; i <= H; i++) {
        string ROW;
        getline(myReadFile, ROW);
        g[i] = ROW;
    }

    for(int j = 0; j <= H; j++){
        string s = g[j];
        for(int i = 0; i< T.length(); i++){
            int order = (toupper(T[i]) - 'A') + 1;
            if(!(T[i] >= 'A'&& T[i] <='Z' || T[i] >= 'a'&& T[i] <='z')){
                order = 27;
            }
            for(int k = 0; k < L; k++){
                if(s[((order - 1)*L)+k] == '\0')
                    continue;
                cout << s[((order - 1)*L)+k];
            }
        }
        cout << endl;
    }
    myReadFile.close();
}

int main() {
    drawASCI();
    SocialNetwork *socialNetwork = new SocialNetwork();


    cout << "Welcome to Mini-Social media by created by SadPotatoes "<< endl;
    cout << "we are testing the social media project" << endl;

    string user_1_name;
    string user_1_pass;
    string user_1_email;

    cout << "Enter a User Name ;" << endl;
    getline(cin, user_1_name);
    cout << "Enter a Email ;" << endl;
    cin >> user_1_email;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Enter a password ;" << endl;
    getline(cin, user_1_pass);

    cout << "For testing purposes you have 3 friends and you are user number one" << endl;
    cout << "Here is your data : " << endl;


    User  *user_1 = new User(user_1_name, user_1_pass, user_1_email, 0);
    socialNetwork->getUsers().push_back(user_1);


    string user_2_name = "Ahmed";
    string user_2_pass = "kokokoko12";
    string user_2_email = "Ahmed@sadpot.com";
    User *user_2 = new User(user_2_name, user_2_pass, user_2_email, 1);
    user_2->setProfile(new Profile(user_2, "What's Next", "Ahmed.jpg"));
    socialNetwork->getUsers().push_back(user_2);
    socialNetwork->addFriend(0, 1);


    string user_3_name = "Mazen";
    string user_3_pass = "kokokoko13";
    string user_3_email = "mazen@sadpot.com";
    User *user_3 = new User(user_3_name, user_3_pass, user_3_email, 2);
    user_3->setProfile(new Profile(user_3, "a el 5ara da", "Mazen.jpg"));
    socialNetwork->getUsers().push_back(user_3);
    socialNetwork->addFriend(0, 2);


    string user_4_name = "Mahmoud";
    string user_4_pass = "kokokoko14";
    string user_4_email = "hanora@sadpot.com";
    User *user_4 = new User(user_4_name, user_4_pass, user_4_email, 3);
    user_4->setProfile(new Profile(user_4, "a el 5ara da", "Mahmoud.jpg"));
    socialNetwork->getUsers().push_back(user_4);
    socialNetwork->addFriend(0, 3);

    user_1->toString();
    cout << "------------------------------" << " END user 1 " << "----------------------------------" << endl;
    cout << "Do you want to see your friends data ? (Y/N)" << endl;


    char ans;
    cin >> ans;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    if(ans == 'y' || ans == 'Y') {
        user_2->toString();
        cout << "------------------------------" << " END user 2 " << "----------------------------------" << endl;


        user_3->toString();
        cout << "------------------------------" << " END user 3 " << "----------------------------------" << endl;


        user_4->toString();
        cout << "------------------------------" << " END user 4 " << "----------------------------------" << endl;
    }

    cout << "OK you need a profile let's create one for you " << endl;

    cout << "Do you want to put a status on your time line ? (Y/N) "<< endl;
    cin >> ans;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string status = "";
    if(ans == 'y' || ans == 'Y') {
        cout << "Please Enter your status :"<< endl;
        getline(cin, status);
    }

    cout << "Do you want to put your profile pic your friends can see it ? (Y/N)" << endl;
    cin >> ans;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string profilePic = "";
    if(ans == 'y' || ans == 'Y') {
        cout << "Please Enter your profile picture's path  :"<< endl;
        cin >> profilePic;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    user_1->setProfile(new Profile(user_1, status, profilePic));

    cout << "Now Do you want to see your profile data? (Y/N) " << endl;
    cin >> ans;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    if(ans == 'y' || ans == 'Y') {
        user_1->getProfile()->toString();
    }

    cout << "On your timeline you can see your post, friends post and groups related post" << endl;
    cout << "Your friends has already had some posts. Do you want to have a look on your time line ? (Y/N)" << endl;

    Post *post_1 = new Post(user_2, "What a wonderful social media!!!!");
    socialNetwork->publishPost(post_1, post_1->getOwner());
    Post *post_2 = new Post(user_3, "Here we have the full mark :D");
    socialNetwork->publishPost(post_2, post_2->getOwner());
    Post *post_3 = new Post(user_4, "Midan el 3abasila");
    socialNetwork->publishPost(post_3, post_3->getOwner());
    Post *post_4 = new Post(user_2, "Endomi she3ria");
    socialNetwork->publishPost(post_4, post_4->getOwner());

    cin >> ans;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    if(ans == 'y' || ans == 'Y') {
        socialNetwork->getTimeline(0);
    }

    // create friends of friends
    string user_5_name = "Khaled";
    string user_5_pass = "kokokoko14";
    string user_5_email = "khaled@sadpot.com";
    User *user_5 = new User(user_5_name, user_5_pass, user_5_email, 4);
    user_5->setProfile(new Profile(user_5, "bakrah 7aiati", "khaled.jpg"));
    socialNetwork->getUsers().push_back(user_5);
    socialNetwork->addFriend(2, 4);

    cout << "We can suggest friends for you, Do you want a list of suggested friends? (Y/N)" << endl;
    cin >> ans;
    cin.ignore();
    if(ans == 'y' || ans == 'Y') {
        vector<User*> suggested = socialNetwork->suggestFriends(0);
        for (int i = 0; i < suggested.size(); ++i) {
            suggested[i]->getProfile()->toString();
            cout << "--------------------------- End Of Suggested Profile ----------------------" << endl;
        }
    }
    return 0;
}