#include <iostream>
#include "Post.h"

Post::Post(User *owner,const string &content) : owner(owner), content(content) {
    time_t now = time(0);
    string dt = ctime(&now);
    this->date = new Date(dt);
}

Date *Post::getDate(){
    return date;
}

void Post::setDate(Date *date) {
    Post::date = date;
}

User *Post::getOwner(){
    return owner;
}

void Post::setOwner(User *owner) {
    Post::owner = owner;
}

vector<Like *> &Post::getLikes(){
    return likes;
}

void Post::setLikes(vector<Like *> &likes) {
    Post::likes = likes;
}

vector<Comment *> &Post::getComments(){
    return comments;
}

void Post::setComments(vector<Comment *> &comments) {
    Post::comments = comments;
}

string &Post::getContent(){
    return content;
}

void Post::setContent(string &content) {
    Post::content = content;
}

Post::~Post() {
    delete (owner);
    delete (date);
}

void Post::toString(){
    std::cout << "Post " << std::endl;
    this->date->toString();
    std::cout << "Owner of the post : " << this->owner->getUserName() << std::endl;
    if(!this->comments.empty())
        std::cout << "Number of Comments : " << ' ' << this->comments.size() << std::endl;
    else
        cout << "This Post has no comments " << endl;
    if(!this->likes.empty())
        std::cout << "Number of Likes : " << ' ' << this->likes.size() << std::endl;
    else
        cout << "This Post has no Likes "<< endl;
    std::cout << this->content << std::endl;
}

