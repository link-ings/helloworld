#include <iostream>

#include "../include/student.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, World! Link_ings" << std::endl;
    Student stu;
    stu.setName("John Doe");
    stu.setAge(20);
    stu.printInfo();

    return 0;
}