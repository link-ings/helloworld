#include "../include/student.h"
#include <iostream>

Student::Student()
{
}

Student::~Student()
{
}
void Student::setName(const std::string &name)
{
    m_name = name;
}
void Student::setAge(int age)
{
    m_age = age;
}
std::string Student::getName() const
{
    return m_name;
}
int Student::getAge() const
{
    return m_age;
}
void Student::printInfo() const
{
    std::cout << "Name: " << m_name << ", Age: " << m_age << std::endl;
}