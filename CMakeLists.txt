cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(helloworld)

# 添加可执行文件
add_executable(main
	src/main.cpp
    include/student.h
    src/student.cpp
)
