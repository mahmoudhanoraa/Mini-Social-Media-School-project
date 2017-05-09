cmake_minimum_required(VERSION 3.6)
project(Mini_Social_Media_School_Project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp User.cpp User.h Comment.cpp Comment.h Like.cpp Like.h Post.cpp Post.h Profile.cpp Profile.h Group.cpp Group.h SocialNetwork.cpp SocialNetwork.h)
add_executable(Mini_Social_Media_School_Project ${SOURCE_FILES})