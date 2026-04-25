cmake_minimum_required(VERSION 3.10.0)
project(SDLShooter VERSION 0.1.0 LANGUAGES C CXX)

# 设置包含的头文件所在目录
include_directories("D:/Cpp_Library/SDL2/include")

# 设置链接库所在目录
link_directories("D:/Cpp_Library/SDL2/lib/x64")

add_executable(SDLShooter main.cpp)

# 链接SDL2库
target_link_libraries(SDLShooter SDL2main SDL2)
