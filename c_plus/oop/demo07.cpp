#include <iostream>
#include <string>

using namespace std;

class Person {

public:
    void say() {
        cout << this->age << endl;
    }

    Person() {}

    // 拷贝构造函数
    Person(const Person &p) {
        this->age = p.age;
    }

    void setAge(int age) {
        this->age = age;
    }

private:
    int age;

};

int main() {
    Person p1;
    p1.setAge(20);

    Person *p = new Person(p1);
    p->say();
    return 0;
}
