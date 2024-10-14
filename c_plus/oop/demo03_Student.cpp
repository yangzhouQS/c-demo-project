#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    int id;
public:
    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return this->name;
    }

    void setAge(int age) {
        if (age < 0 || age > 150) {
            this->age = 0;
        } else {
            this->age = age;
        }
    }

    int getAge() {
        return this->age;
    }
};

int main() {
    Student stu;
    stu.setName("张三");
    stu.setAge(20);

    cout << "姓名：" << stu.getName() << endl;

    cout << "年龄：" << stu.getAge() << endl;

    return 0;
}