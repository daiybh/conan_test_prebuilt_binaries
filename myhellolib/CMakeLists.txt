cmake_minimum_required(VERSION 3.15)
project(myhellolib CXX)




add_library(myhellolib src/myhellolib.cpp)
target_include_directories(myhellolib PUBLIC include)



set_target_properties(myhellolib PROPERTIES PUBLIC_HEADER "include/myhellolib.h")
install(TARGETS myhellolib)
