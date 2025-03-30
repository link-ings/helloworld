#include <string>

class Student
{
public:
    Student(/* args */);
    ~Student();
    void setName(const std::string &name) ;
    void setAge(int age);
    std::string getName() const;
    int getAge() const;
    void printInfo() const;
private:
    std::string m_name; // 添加成员变量
    int m_age;          // 添加成员变量
};