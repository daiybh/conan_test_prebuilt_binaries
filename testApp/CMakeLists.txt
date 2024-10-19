cmake_minimum_required(VERSION 3.15)
project(testApp CXX)


find_package(slc-myhellolib)
add_executable(testApp src/testApp.cpp src/main.cpp)

target_link_libraries(testApp PRIVATE slc-myhellolib::slc-myhellolib)


install(TARGETS testApp DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
