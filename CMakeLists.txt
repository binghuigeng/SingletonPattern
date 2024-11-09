cmake_minimum_required(VERSION 3.5)

project(SingletonPattern LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    # 若是MSVC编译器，则使用UTF-8编码
    set(CMAKE_C_FLAGS /utf-8)
    set(CMAKE_CXX_FLAGS /utf-8)

    # 添加编译选项
    add_compile_options(/EHsc)
endif()

add_executable(SingletonPattern main.cpp
    Singleton.h Singleton.cpp)
