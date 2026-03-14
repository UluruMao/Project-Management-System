cmake_minimum_required(VERSION 3.27)
project(cppFinal)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cppFinal
        Client.cpp
        Client.hpp
        Entity.hpp
        FileManager.cpp
        FileManager.hpp
        main.cpp
        Person.cpp
        Person.hpp
        Project.cpp
        Project.hpp
        ProjectManagementSystem.cpp
        ProjectManagementSystem.hpp
        Task.cpp
        Task.hpp
        TeamMember.cpp
        TeamMember.hpp
        Vendor.cpp
        Vendor.hpp)
